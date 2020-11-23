#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pyoz
#define PRODUCT         HandwiredPyoz
#define DESCRIPTION     A Alice-like handwired keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 18

#define MATRIX_ROW_PINS { B14, B3, B13, B8, A6 }
#define MATRIX_COL_PINS { B2, B1, B0, B4, B5, A1, A0, A8, A7, A5, A4, B10, B11, B12, A14, A13, B9, B15 }

#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define FORCE_NKRO
