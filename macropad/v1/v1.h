#pragma once

#include "macropad.h"

#include "quantum.h"

#define LAYOUT( \
    L00, L01, L02, \
    L10, L11, L12, \
    L20, L21, L22, \
    L30, L31, L32  \
) \
{ \
    { L00, L01, L02 }, \
    { L10, L11, L12 }, \
    { L20, L21, L22 }, \
    { L30, L31, L32 } \
}

#define LAYOUT_default LAYOUT
#define LAYOUT_via LAYOUT