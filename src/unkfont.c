#include "types.h"
#include "fonts.h"

static const u16 UnkFontData[] = {
    /* 0x00 */
    0x07C0,
    0x1FC0,
    0x3800,
    0x3000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x6000,
    0x3000,
    0x3800,
    0x1FC0,
    0x07C0,

    /* 0x14 */
    0xFFFF,
    0xFFFF,

    /* 0x16 */
    0xF000,
    0xFC00,
    0x0E00,
    0x0600,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0300,
    0x0600,
    0x0E00,
    0xFC00,
    0xF000,

    /* 0x2A */
    0x0000,
    0x0000
};

static const fontchar_t UnkFontInfo[] = {
    { 0x2A, 9,  2, 0, -4, 0 }, /* 0 - nothing      */
    { 0x00, 9, 20, 0, -4, 9 }, /* 1 - 'C'          */
    { 0x14, 9,  2, 0, -4, 0 }, /* 2 - Underline    */
    { 0x2A, 9,  2, 0, -4, 0 }, /* 3 - nothing      */
    { 0x2A, 9, 18, 0, -4, 0 }, /* 4 - nothing      */
    { 0x14, 9,  2, 0, 14, 0 }, /* 5 - Overline     */
    { 0x16, 9, 20, 0, -4, 9 }  /* 6 - reversed 'C' */
};

const font_t UnkFont = {
    UnkFontData,                                  /* data          */
    UnkFontInfo,                                  /* info          */
    sizeof(UnkFontData) / sizeof(UnkFontData[0]), /* dataLen       */
    sizeof(UnkFontInfo) / sizeof(UnkFontInfo[0]), /* infoLen       */
    20,                                           /* fontHeight    */
    4                                             /* fontDescender */
};
