#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Marius Winkler
#define PRODUCT         5wg

#define MATRIX_ROWS 7
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D4, C6, F6, B6, D0, E6, B2 }
#define MATRIX_COL_PINS { F4, F5, D7, F7, B4, B3 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE