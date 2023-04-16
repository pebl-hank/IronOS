#ifndef BLE_CHARACTERISTICS_H_
#define BLE_CHARACTERISTICS_H_

#include "ble_config.h"

/*

 Pinecil exposes two main services; Status and settings

 Status:
 - Current setpoint temperature
 - Current live tip temperature
 - Current DC Input
 - Current Handle cold junction temperature
 - Current power level (aka pwm level)

 Settings:
 - One entry for every setting in the unit
*/

// d85efab4-168e-4a71-affd-33e27f9bc533
#define BT_UUID_SVC_LIVE_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef000, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
// f6d75f91-5a10-4eba-a233-47d3f26a907f
#define BT_UUID_SVC_SETTINGS_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d80000, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
// 9eae1adb-9d0d-48c5-a6e7-ae93f0ea37b0
#define BT_UUID_SVC_BULK_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1000, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))

#define BT_UUID_CHAR_BLE_LIVE_LIVE_TEMP     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef001, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_SETPOINT_TEMP BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef002, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_DC_INPUT      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef003, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_HANDLE_TEMP   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef004, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_POWER_LEVEL   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef005, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_POWER_SRC     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef006, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_TIP_RES       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef007, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_UPTIME        BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef008, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_MOVEMENT      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef009, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_MAX_TEMP      BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef00A, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_RAW_TIP       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef00B, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_HALL_SENSOR   BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef00C, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_OP_MODE       BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef00D, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_EST_WATTS     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xd85ef00E, 0x168e, 0x4a71, 0xAA55, 0x33e27f9bc533))

// Bulk data that returns non-fixed sized objects
#define BT_UUID_CHAR_BLE_LIVE_BULK_LIVE_DATA BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1001, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_ACCEL_NAME     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1002, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_BUILD          BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1003, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_DEV_SN         BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1004, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_LIVE_DEV_ID         BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0x9eae1005, 0x9d0d, 0x48c5, 0xAA55, 0x33e27f9bc533))

// Settings

#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_SAVE  BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7FFFF, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_RESET BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7FFFE, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_0     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70000, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_1     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70001, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_2     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70002, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_3     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70003, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_4     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70004, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_5     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70005, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_6     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70006, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_7     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70007, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_8     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70008, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_9     BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70009, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_10    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000a, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_11    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000b, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_12    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000c, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_13    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000d, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_14    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000e, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_15    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7000f, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_16    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70010, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_17    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70011, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_18    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70012, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_19    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70013, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_20    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70014, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_21    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70015, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_22    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70016, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_23    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70017, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_24    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70018, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_25    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70019, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_26    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001a, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_27    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001b, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_28    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001c, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_29    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001d, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_30    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001e, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_31    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d7001f, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_32    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70020, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_33    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70021, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_34    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70022, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_35    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70023, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_36    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70024, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_37    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70025, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#define BT_UUID_CHAR_BLE_SETTINGS_VALUE_38    BT_UUID_DECLARE_128(BT_UUID_128_ENCODE(0xf6d70026, 0x5a10, 0x4eba, 0xAA55, 0x33e27f9bc533))
#endif
