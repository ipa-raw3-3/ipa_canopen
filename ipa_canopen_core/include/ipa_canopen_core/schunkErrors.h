#ifndef SCHUNKERRORS_H
#define SCHUNKERRORS_H

static const char * const errorsCode[] =
{
    "ERROR_NONE",
    "INFO_TODO",
    "INFO_NO_FREE_SPACE",
    "INFO_NO_RIGHTS",
    "INFO_UNKNOWN_COMMAND",
    "INFO_FAILED",
    "INFO_NOT_REFERENCED",
    "UNKNOWN_ERROR_07",
    "UNKNOWN_ERROR_08",
    "INFO_COMMUNICATION_ERROR",
    "INFO_PROGRAM_DEBUGDATA",
    "INFO_PROGRAM_FINISHED",
    "INFO_PROGRAM_ABORTED",
    "INFO_PROGRAM_PAUSED",
    "INFO_PROGRAM_CONTINUED",
    "INFO_SEQUENCE_END",

    "INFO_TIMEOUT",
    "INFO_UNKNOWN_AXIS_INDEX",
    "UNKNOWN_ERROR_12",
    "UNKNOWN_ERROR_13",
    "UNKNOWN_ERROR_14",
    "UNKNOWN_ERROR_15",
    "INFO_WRONG_BAUDRATE",
    "UNKNOWN_ERROR_17",
    "UNKNOWN_ERROR_18",
    "INFO_CHECKSUM",
    "UNKNOWN_ERROR_1A",
    "UNKNOWN_ERROR_1B",
    "UNKNOWN_ERROR_1C",
    "INFO_MESSAGE_LENGTH",
    "INFO_WRONG_PARAMETER",
    "INFO_PROGRAM_END",

    "INFO_BATTERY_LOW",
    "ERROR_BATTERY_DOWN",
    "INFO_POSITION_NOT_REACHABLE",
    "UNKNOWN_ERROR_23",
    "UNKNOWN_ERROR_24",
    "UNKNOWN_ERROR_25",
    "UNKNOWN_ERROR_26",
    "UNKNOWN_ERROR_27",
    "UNKNOWN_ERROR_28",
    "UNKNOWN_ERROR_29",
    "UNKNOWN_ERROR_2A",
    "UNKNOWN_ERROR_2B",
    "UNKNOWN_ERROR_2C",
    "UNKNOWN_ERROR_2D",
    "UNKNOWN_ERROR_2E",
    "UNKNOWN_ERROR_2F",

    "UNKNOWN_ERROR_30",
    "UNKNOWN_ERROR_31",
    "UNKNOWN_ERROR_32",
    "UNKNOWN_ERROR_33",
    "UNKNOWN_ERROR_34",
    "UNKNOWN_ERROR_35",
    "UNKNOWN_ERROR_36",
    "UNKNOWN_ERROR_37",
    "UNKNOWN_ERROR_38",
    "UNKNOWN_ERROR_39",
    "UNKNOWN_ERROR_3A",
    "UNKNOWN_ERROR_3B",
    "UNKNOWN_ERROR_3C",
    "UNKNOWN_ERROR_3D",
    "UNKNOWN_ERROR_3E",
    "UNKNOWN_ERROR_3F",

    "INFO_TRIGGER",
    "INFO_READY",
    "INFO_GUI_CONNECTED",
    "INFO_GUI_DISCONNECTED",
    "INFO_PROGRAM_CHANGED",
    "INFO_PROGRAM_CHANGE_FAILED",
    "UNKNOWN_ERROR_46",
    "UNKNOWN_ERROR_47",
    "UNKNOWN_ERROR_48",
    "UNKNOWN_ERROR_49",
    "UNKNOWN_ERROR_4A",
    "UNKNOWN_ERROR_4B",
    "UNKNOWN_ERROR_4C",
    "UNKNOWN_ERROR_4D",
    "UNKNOWN_ERROR_4E",
    "UNKNOWN_ERROR_4F",

    "UNKNOWN_ERROR_50",
    "UNKNOWN_ERROR_51",
    "UNKNOWN_ERROR_52",
    "UNKNOWN_ERROR_53",
    "UNKNOWN_ERROR_54",
    "UNKNOWN_ERROR_55",
    "UNKNOWN_ERROR_56",
    "UNKNOWN_ERROR_57",
    "UNKNOWN_ERROR_58",
    "UNKNOWN_ERROR_59",
    "UNKNOWN_ERROR_5A",
    "UNKNOWN_ERROR_5B",
    "UNKNOWN_ERROR_5C",
    "UNKNOWN_ERROR_5D",
    "UNKNOWN_ERROR_5E",
    "UNKNOWN_ERROR_5F",

    "UNKNOWN_ERROR_60",
    "UNKNOWN_ERROR_61",
    "UNKNOWN_ERROR_62",
    "UNKNOWN_ERROR_63",
    "UNKNOWN_ERROR_64",
    "UNKNOWN_ERROR_65",
    "UNKNOWN_ERROR_66",
    "UNKNOWN_ERROR_67",
    "UNKNOWN_ERROR_68",
    "UNKNOWN_ERROR_69",
    "UNKNOWN_ERROR_6A",
    "UNKNOWN_ERROR_6B",
    "UNKNOWN_ERROR_6C",
    "UNKNOWN_ERROR_6D",
    "UNKNOWN_ERROR_6E",
    "UNKNOWN_ERROR_6F",

    "ERROR_TEMP_LOW",
    "ERROR_TEMP_HIGH",
    "ERROR_LOGIC_LOW",
    "ERROR_LOGIC_HIGH",
    "ERROR_MOTOR_VOLTAGE_LOW",
    "ERROR_MOTOR_VOLTAGE_HIGH",
    "ERROR_CABEL_BREAK",
    "ERROR_MOTOR_VOLTAGE_SHORT",
    "ERROR_MOTOR_TEMP",
    "ERROR_BRAKE_VOLTAGE",
    "ERROR_LIFE_SIGN",
    "ERROR_CUSTOM_DEFINED",
    "UNKNOWN_ERROR_7C",
    "UNKNOWN_ERROR_7D",
    "UNKNOWN_ERROR_7E",
    "UNKNOWN_ERROR_7F",

    "ERROR_POWER_TEMP",
    "ERROR_BRAKE_RESISTOR_TEMP",
    "ERROR_OVERSHOOT",
    "ERROR_HARDWARE_VERSION",
    "ERROR_SOFTWARE_VERSION",
    "UNKNOWN_ERROR_85",
    "UNKNOWN_ERROR_86",
    "UNKNOWN_ERROR_87",
    "UNKNOWN_ERROR_88",
    "UNKNOWN_ERROR_89",
    "UNKNOWN_ERROR_8A",
    "UNKNOWN_ERROR_8B",
    "UNKNOWN_ERROR_8C",
    "UNKNOWN_ERROR_8D",
    "UNKNOWN_ERROR_8E",
    "UNKNOWN_ERROR_8F",

    "UNKNOWN_ERROR_90",
    "UNKNOWN_ERROR_91",
    "UNKNOWN_ERROR_92",
    "UNKNOWN_ERROR_93",
    "UNKNOWN_ERROR_94",
    "UNKNOWN_ERROR_95",
    "UNKNOWN_ERROR_96",
    "UNKNOWN_ERROR_97",
    "UNKNOWN_ERROR_98",
    "UNKNOWN_ERROR_99",
    "UNKNOWN_ERROR_9A",
    "UNKNOWN_ERROR_9B",
    "UNKNOWN_ERROR_9C",
    "UNKNOWN_ERROR_9D",
    "UNKNOWN_ERROR_9E",
    "UNKNOWN_ERROR_9F",

    "UNKNOWN_ERROR_A0",
    "UNKNOWN_ERROR_A1",
    "UNKNOWN_ERROR_A2",
    "UNKNOWN_ERROR_A3",
    "UNKNOWN_ERROR_A4",
    "UNKNOWN_ERROR_A5",
    "UNKNOWN_ERROR_A6",
    "UNKNOWN_ERROR_A7",
    "UNKNOWN_ERROR_A8",
    "UNKNOWN_ERROR_A9",
    "UNKNOWN_ERROR_AA",
    "UNKNOWN_ERROR_AB",
    "UNKNOWN_ERROR_AC",
    "UNKNOWN_ERROR_AD",
    "UNKNOWN_ERROR_AE",
    "UNKNOWN_ERROR_AF",

    "ERROR_PROGRAM_ABORTION",
    "ERROR_PROGRAM_RUNTIME",
    "ERROR_PROGRAM_INVALID",
    "ERROR_PROGRAM_CONFLICT",
    "UNKNOWN_ERROR_B4",
    "UNKNOWN_ERROR_B5",
    "UNKNOWN_ERROR_B6",
    "UNKNOWN_ERROR_B7",
    "UNKNOWN_ERROR_B8",
    "UNKNOWN_ERROR_B9",
    "UNKNOWN_ERROR_BA",
    "UNKNOWN_ERROR_BB",
    "UNKNOWN_ERROR_BC",
    "UNKNOWN_ERROR_BD",
    "UNKNOWN_ERROR_BE",
    "UNKNOWN_ERROR_BF",

    "UNKNOWN_ERROR_C0",
    "UNKNOWN_ERROR_C1",
    "UNKNOWN_ERROR_C2",
    "UNKNOWN_ERROR_C3",
    "UNKNOWN_ERROR_C4",
    "UNKNOWN_ERROR_C5",
    "UNKNOWN_ERROR_C6",
    "UNKNOWN_ERROR_C7",
    "ERROR_WRONG_RAMP_TYPE",
    "UNKNOWN_ERROR_C9",
    "UNKNOWN_ERROR_CA",
    "UNKNOWN_ERROR_CB",
    "UNKNOWN_ERROR_CC",
    "UNKNOWN_ERROR_CD",
    "UNKNOWN_ERROR_CE",
    "UNKNOWN_ERROR_CF",

    "UNKNOWN_ERROR_D0",
    "ERROR_WRONG_DIRECTION",
    "ERROR_CONFIG_MEMORY",
    "ERROR_PROGRAM_MEMORY",
    "ERROR_INVALID_PHRASE",
    "ERROR_SOFT_LOW",
    "ERROR_SOFT_HIGH",
    "ERROR_PRESSURE",
    "ERROR_SERVICE",
    "ERROR_FAST_STOP",
    "ERROR_TOW",
    "ERROR_VPC3",
    "ERROR_FRAGMENTATION",
    "ERROR_COMMUTATION",
    "ERROR_CURRENT",
    "ERROR_I2T",

    "ERROR_INITIALIZE",
    "ERROR_INTERNAL",
    "ERROR_HARD_LOW",
    "ERROR_HARD_HIGH",
    "ERROR_TOO_FAST",
    "ERROR_POS_SYSTEM",
    "ERROR_ANALOG_INPUT",
    "ERROR_FLASH_MEMORY",
    "ERROR_LIMITER_ACTIVE",
    "ERROR_STOP_CMD_TIMEOUT",
    "ERROR_UNEXPECTED_STOP_DURING_PHRASE",
    "ERROR_RESOLVER_CHECK_FAILED",
    "ERROR_MATH",
    "ERROR_LEAVE_MASTER",
    "UNKNOWN_ERROR_EE",
    "UNKNOWN_ERROR_EF",

    "UNKNOWN_ERROR_F0",
    "UNKNOWN_ERROR_F1",
    "UNKNOWN_ERROR_F2",
    "UNKNOWN_ERROR_F3",
    "UNKNOWN_ERROR_F4",
    "UNKNOWN_ERROR_F5",
    "UNKNOWN_ERROR_F6",
    "UNKNOWN_ERROR_F7",
    "UNKNOWN_ERROR_F8",
    "UNKNOWN_ERROR_F9",
    "UNKNOWN_ERROR_FA",
    "UNKNOWN_ERROR_FB",
    "UNKNOWN_ERROR_FC",
    "UNKNOWN_ERROR_FD",
    "UNKNOWN_ERROR_FE",
    "UNKNOWN_ERROR_FF"
};

#endif // SCHUNKERRORS_H
