#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Marius Winkler
#define PRODUCT         s3kbd

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D0

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE