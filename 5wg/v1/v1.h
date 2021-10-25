#pragma once

#include "5wg.h"

#include "quantum.h"

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09, \
    L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, \
    L20, L21, L22, L23, LU0, LU1, L26, L27, L28, L29, \
              LL0, LC0, LR0, LL1, LC1, LR1,           \
                        LD0, LD1                      \
) \
{ \
    { KC_NO, KC_NO, L04, L05, KC_NO, KC_NO }, \
    { L00, L02, L14, L15, L06, L08 }, \
    { L10, L12, LC0, LC1, L16, L18 }, \
    { L20, L22, LD0, LD1, L26, L28 }, \
    { L01, L03, LU0, LU1, L07, L09 }, \
    { L11, L13, LL0, LL1, L17, L19 }, \
    { L21, L23, LR0, LR1, L27, L29 } \
}

#define LAYOUT_default LAYOUT
#define LAYOUT_via LAYOUT