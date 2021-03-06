/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This file defines the mapping from the MT3620 reference development board (RDB) to the
// soda machine as implemented in the low-power MCU to cloud software reference solution.
// See https://aka.ms/AzureSphereHardwareDefinitions for more information on how to use hardware abstractions,
// to enable apps to work across multiple hardware variants.

// This file is autogenerated from ../../soda_machine.json.  Do not edit it directly.

#pragma once
#include "mt3620_rdb.h"

// MT3620 RDB: Connect external STM32 UART using header 2, pin 1 (RX), pin 3 (TX) (no flow control)
#define SODAMACHINE_STM32_UART MT3620_RDB_HEADER2_ISU0_UART

// MT3620 RDB: Connect USB serial adapter using header 4, pin 5 (RX), pin 7 (TX) (no flow control)
#define SODAMACHINE_DEBUG_UART MT3620_RDB_HEADER4_ISU1_UART

// Red channel of RGB status LED
#define SODAMACHINE_RGBLED_RED MT3620_RDB_LED1_RED

// Green channel of RGB status LED
#define SODAMACHINE_RGBLED_GREEN MT3620_RDB_LED1_GREEN

// Blue channel of RGB status LED
#define SODAMACHINE_RGBLED_BLUE MT3620_RDB_LED1_BLUE

