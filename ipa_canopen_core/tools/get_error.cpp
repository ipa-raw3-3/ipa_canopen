/*!
 *****************************************************************
 * \file
 *
 * \note
 *   Copyright (c) 2013 \n
 *   Fraunhofer Institute for Manufacturing Engineering
 *   and Automation (IPA) \n\n
 *
 *****************************************************************
 *
 * \note
 *   Project name: ipa_canopen
 * \note
 *   ROS stack name: ipa_canopen
 * \note
 *   ROS package name: ipa_canopen_core
 *
 * \author
 *   Author: Thiago de Freitas Oliveira Araujo, email:tdf@ipa.fhg.de
 * \author
 *   Supervised by: Thiago de Freitas Oliveira Araujo, email:tdf@ipa.fhg.de
 *
 * \date Date of creation: July 2013
 *
 * \brief
 *   Get errors from the canopen device
 *
 *****************************************************************
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     - Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer. \n
 *     - Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution. \n
 *     - Neither the name of the Fraunhofer Institute for Manufacturing
 *       Engineering and Automation (IPA) nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission. \n
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License LGPL as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License LGPL for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License LGPL along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 ****************************************************************/

#include <utility>
#include <iostream>
#include <iomanip>
#include "canopen.h"
#include "schunkErrors.h"

int main(int argc, char *argv[]) {

    if (argc != 3) {
        std::cout << "Arguments:" << std::endl
        << "(1) device file" << std::endl
        << "(2) CAN deviceID" << std::endl
        << "Example: ./get_error /dev/pcan32 12" << std::endl;
        return -1;
    }

    canopen::NMTmsg.ID = 0;
    canopen::NMTmsg.MSGTYPE = 0x00;
    canopen::NMTmsg.LEN = 2;

    canopen::syncMsg.ID = 0x80;
    canopen::syncMsg.MSGTYPE = 0x00;

    canopen::syncMsg.LEN = 0x00;

    std::string deviceFile = std::string(argv[1]);

    if (!canopen::openConnection(deviceFile)){
        std::cout << "Cannot open CAN device; aborting." << std::endl;
        exit(EXIT_FAILURE);
    }
    else{
        std::cout << "Connection to CAN bus established" << std::endl;
    }

    uint16_t CANid = std::stoi(std::string(argv[2]));

    canopen::devices[ CANid ] = canopen::Device(CANid);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    canopen::sendNMT(CANid, canopen::NMT_START_REMOTE_NODE);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    std::this_thread::sleep_for(std::chrono::milliseconds(10));


    TPCANRdMsg m;

    canopen::sendSDO(CANid, canopen::STATUSWORD);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    m.Msg.ID = 0x00;

    while (m.Msg.ID != 0x583)
    {
        LINUX_CAN_Read(canopen::h, &m);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    canopen::sendSDO(CANid, canopen::ERRORWORD);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    m.Msg.ID = 0x00;

    while (m.Msg.ID != 0x583)
    {
        LINUX_CAN_Read(canopen::h, &m);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    uint16_t error_register;
    error_register = m.Msg.DATA[4];

    std::cout << "error_register=0x" << std::hex << (int)error_register << ", categories:";

    if ( error_register & canopen::EMC_k_1001_GENERIC )
        std::cout << " generic,";
    if ( error_register & canopen::EMC_k_1001_CURRENT)
        std::cout << " current,";
    if ( error_register & canopen::EMC_k_1001_VOLTAGE )
        std::cout << " voltage,";
    if ( error_register & canopen::EMC_k_1001_TEMPERATURE )
        std::cout << " temperature,";
    if ( error_register & canopen::EMC_k_1001_COMMUNICATION )
        std::cout << " communication,";
    if ( error_register & canopen::EMC_k_1001_DEV_PROF_SPEC )
        std::cout << " device profile specific,";
    if ( error_register & canopen::EMC_k_1001_RESERVED )
        std::cout << " reserved,";
    if ( error_register & canopen::EMC_k_1001_MANUFACTURER)
        std::cout << " manufacturer specific";
    std::cout << "\n";

    /***************************************************************/
    //		Manufacturer specific errors register
    /***************************************************************/

    canopen::sendSDO(CANid, canopen::MANUFACTURER);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));

    m.Msg.ID = 0x00;

    while (m.Msg.ID != 0x583)
    {
        LINUX_CAN_Read(canopen::h, &m);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    uint16_t code = m.Msg.DATA[4];
    uint16_t classification = m.Msg.DATA[5];

    std::cout << "manufacturer_status_register=0x" << std::hex << int(classification) << int(code) <<
                 ": code=0x" << std::hex << int( code ) << " (" << errorsCode[int(code)] << "),"
           << ", classification=0x" << std::hex << int( classification ) << std::dec;
    if ( classification == 0x88 )
        std::cout << " (CMD_ERROR)";
    if ( classification == 0x89 )
        std::cout << " (CMD_WARNING)";
    if ( classification == 0x8a )
        std::cout << " (CMD_INFO)";
    std::cout << "\n";


    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    std::cout << "Error checking complete" << std::endl;

}
