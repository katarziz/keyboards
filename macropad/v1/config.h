#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Marius Winkler
#define PRODUCT         macropad

#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { D1, B1, E6, B6 }
#define MATRIX_COL_PINS { D0, D4, F5 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE