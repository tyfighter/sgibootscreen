#include "types.h"

const u8 octanelogo[] = {
    /*   0 -  7 */ 0x88, 0x13, 0xff, 0x00, 0xff, 0x00, 0xe0,
    /*   1 -  7 */ 0x79, 0x32, 0xff, 0x00, 0xff, 0x00, 0xd0,
    /*   2 -  7 */ 0x6f, 0x45, 0xff, 0x00, 0xff, 0x00, 0xc7,
    /*   3 -  7 */ 0x68, 0x54, 0xff, 0x00, 0xff, 0x00, 0xbf,
    /*   4 -  7 */ 0x62, 0x5f, 0xff, 0x00, 0xff, 0x00, 0xba,
    /*   5 -  7 */ 0x5d, 0x69, 0xff, 0x00, 0xff, 0x00, 0xb5,
    /*   6 -  7 */ 0x58, 0x74, 0xff, 0x00, 0xff, 0x00, 0xaf,
    /*   7 -  7 */ 0x52, 0x7f, 0xff, 0x00, 0xff, 0x00, 0xaa,
    /*   8 -  7 */ 0x4f, 0x85, 0xff, 0x00, 0xff, 0x00, 0xa7,
    /*   9 -  7 */ 0x4c, 0x8c, 0xff, 0x00, 0xff, 0x00, 0xa3,
    /*  10 -  7 */ 0x49, 0x92, 0xff, 0x00, 0xff, 0x00, 0xa0,
    /*  11 -  7 */ 0x45, 0x99, 0xff, 0x00, 0xff, 0x00, 0x9d,
    /*  12 -  7 */ 0x42, 0x9f, 0xff, 0x00, 0xff, 0x00, 0x9a,
    /*  13 -  7 */ 0x3f, 0xa6, 0xff, 0x00, 0xff, 0x00, 0x96,
    /*  14 -  7 */ 0x3c, 0xac, 0xff, 0x00, 0xff, 0x00, 0x93,
    /*  15 -  7 */ 0x39, 0xb1, 0xff, 0x00, 0xff, 0x00, 0x91,
    /*  16 -  7 */ 0x37, 0xb5, 0xff, 0x00, 0xff, 0x00, 0x8f,
    /*  17 -  7 */ 0x35, 0xb9, 0xff, 0x00, 0xff, 0x00, 0x8d,
    /*  18 -  7 */ 0x33, 0xbd, 0xff, 0x00, 0xff, 0x00, 0x8b,
    /*  19 -  7 */ 0x31, 0xc1, 0xff, 0x00, 0xff, 0x00, 0x89,
    /*  20 -  7 */ 0x2f, 0xc5, 0xff, 0x00, 0xff, 0x00, 0x87,
    /*  21 -  7 */ 0x2d, 0xc9, 0xff, 0x00, 0xff, 0x00, 0x85,
    /*  22 -  7 */ 0x2b, 0xce, 0xff, 0x00, 0xff, 0x00, 0x82,
    /*  23 -  7 */ 0x29, 0xd2, 0xff, 0x00, 0xff, 0x00, 0x80,
    /*  24 -  7 */ 0x27, 0xd6, 0xff, 0x00, 0xff, 0x00, 0x7e,
    /*  25 -  7 */ 0x25, 0xd9, 0xff, 0x00, 0xff, 0x00, 0x7d,
    /*  26 -  7 */ 0x23, 0xdd, 0xff, 0x00, 0xff, 0x00, 0x7b,
    /*  27 -  7 */ 0x22, 0xdf, 0xff, 0x00, 0xff, 0x00, 0x7a,
    /*  28 -  7 */ 0x21, 0xe2, 0xff, 0x00, 0xff, 0x00, 0x78,
    /*  29 -  7 */ 0x20, 0xe4, 0xff, 0x00, 0xff, 0x00, 0x77,
    /*  30 -  7 */ 0x1f, 0xe6, 0xff, 0x00, 0xff, 0x00, 0x76,
    /*  31 -  9 */ 0x1e, 0x6a, 0x14, 0x6a, 0xff, 0x00, 0xff, 0x00, 0x75,
    /*  32 - 11 */ 0x1c, 0x61, 0x29, 0x61, 0x63, 0x09, 0xff, 0x00, 0xff, 0x00, 0x08,
    /*  33 -  9 */ 0x1b, 0x5a, 0x39, 0x5a, 0x58, 0x1c, 0xff, 0x00, 0xfe,
    /*  34 -  9 */ 0x1a, 0x57, 0x41, 0x57, 0x53, 0x26, 0xff, 0x00, 0xf8,
    /*  35 - 18 */ 0x19, 0x54, 0x49, 0x55, 0x4c, 0x2e, 0x4e, 0x1a, 0x2b, 0x1c, 0x3e, 0x1c, 0x0f, 0x18, 0x32, 0x1b, 0x19, 0x5e,
    /*  36 - 18 */ 0x18, 0x52, 0x50, 0x52, 0x49, 0x33, 0x4b, 0x1a, 0x2c, 0x1c, 0x3c, 0x1d, 0x0f, 0x18, 0x32, 0x1b, 0x19, 0x5e,
    /*  37 - 18 */ 0x17, 0x50, 0x56, 0x50, 0x45, 0x38, 0x49, 0x1a, 0x2c, 0x1c, 0x3c, 0x1c, 0x10, 0x18, 0x31, 0x1c, 0x19, 0x5e,
    /*  38 - 18 */ 0x15, 0x50, 0x5a, 0x4f, 0x42, 0x3d, 0x46, 0x1a, 0x2d, 0x1c, 0x3a, 0x1d, 0x10, 0x18, 0x30, 0x1d, 0x19, 0x5e,
    /*  39 - 18 */ 0x14, 0x4e, 0x5f, 0x4e, 0x3f, 0x40, 0x45, 0x1a, 0x2d, 0x1c, 0x3a, 0x1c, 0x11, 0x18, 0x2f, 0x1e, 0x19, 0x5e,
    /*  40 - 18 */ 0x13, 0x4d, 0x63, 0x4d, 0x3c, 0x44, 0x43, 0x1a, 0x2e, 0x1b, 0x3a, 0x1c, 0x11, 0x18, 0x2f, 0x1e, 0x19, 0x5e,
    /*  41 - 18 */ 0x12, 0x4c, 0x68, 0x4b, 0x3a, 0x47, 0x41, 0x1a, 0x2e, 0x1c, 0x38, 0x1d, 0x11, 0x18, 0x2e, 0x1f, 0x19, 0x5e,
    /*  42 - 18 */ 0x11, 0x4b, 0x6c, 0x4a, 0x37, 0x4a, 0x40, 0x1a, 0x2f, 0x1b, 0x38, 0x1c, 0x12, 0x18, 0x2d, 0x20, 0x19, 0x5e,
    /*  43 - 18 */ 0x11, 0x49, 0x6f, 0x4a, 0x35, 0x4d, 0x3e, 0x1a, 0x2f, 0x1c, 0x36, 0x1d, 0x12, 0x18, 0x2c, 0x21, 0x19, 0x5e,
    /*  44 - 18 */ 0x10, 0x49, 0x72, 0x49, 0x32, 0x50, 0x3d, 0x1a, 0x30, 0x1b, 0x36, 0x1c, 0x13, 0x18, 0x2c, 0x21, 0x19, 0x5e,
    /*  45 - 18 */ 0x0f, 0x48, 0x75, 0x48, 0x31, 0x52, 0x3c, 0x1a, 0x30, 0x1c, 0x35, 0x1c, 0x13, 0x18, 0x2b, 0x22, 0x19, 0x5e,
    /*  46 - 18 */ 0x0f, 0x47, 0x78, 0x47, 0x2f, 0x54, 0x3b, 0x1a, 0x31, 0x1b, 0x34, 0x1c, 0x14, 0x18, 0x2a, 0x23, 0x19, 0x5e,
    /*  47 - 18 */ 0x0e, 0x46, 0x7b, 0x46, 0x2e, 0x56, 0x3a, 0x1a, 0x31, 0x1c, 0x33, 0x1c, 0x14, 0x18, 0x29, 0x24, 0x19, 0x5e,
    /*  48 - 18 */ 0x0d, 0x46, 0x7e, 0x45, 0x2c, 0x58, 0x39, 0x1a, 0x32, 0x1b, 0x32, 0x1c, 0x15, 0x18, 0x29, 0x24, 0x19, 0x5e,
    /*  49 - 18 */ 0x0d, 0x44, 0x81, 0x45, 0x2a, 0x5a, 0x38, 0x1a, 0x32, 0x1b, 0x32, 0x1c, 0x15, 0x18, 0x28, 0x25, 0x19, 0x5e,
    /*  50 - 20 */ 0x0c, 0x44, 0x83, 0x44, 0x29, 0x28, 0x0c, 0x28, 0x37, 0x1a, 0x32, 0x1c, 0x31, 0x1b, 0x16, 0x18, 0x27, 0x26, 0x19, 0x5e,
    /*  51 - 20 */ 0x0c, 0x43, 0x85, 0x44, 0x27, 0x25, 0x16, 0x23, 0x36, 0x1a, 0x33, 0x1b, 0x30, 0x1c, 0x16, 0x18, 0x26, 0x27, 0x19, 0x5e,
    /*  52 - 21 */ 0x0b, 0x43, 0x87, 0x43, 0x26, 0x23, 0x1b, 0x22, 0x35, 0x1a, 0x33, 0x1c, 0x2f, 0x1b, 0x17, 0x18, 0x26, 0x27, 0x19, 0x1a, 0x44,
    /*  53 - 21 */ 0x0a, 0x44, 0x88, 0x43, 0x25, 0x21, 0x1f, 0x20, 0x35, 0x1a, 0x34, 0x1b, 0x2e, 0x1c, 0x17, 0x18, 0x25, 0x28, 0x19, 0x1a, 0x44,
    /*  54 - 19 */ 0x0a, 0x43, 0x8a, 0x43, 0x23, 0x20, 0x24, 0x1e, 0x34, 0x1a, 0x34, 0x65, 0x17, 0x18, 0x24, 0x29, 0x19, 0x1a, 0x44,
    /*  55 - 19 */ 0x09, 0x43, 0x8c, 0x42, 0x23, 0x1f, 0x26, 0x1d, 0x34, 0x1a, 0x35, 0x63, 0x18, 0x18, 0x23, 0x2a, 0x19, 0x1a, 0x44,
    /*  56 - 19 */ 0x09, 0x42, 0x8e, 0x42, 0x21, 0x1e, 0x29, 0x1d, 0x33, 0x1a, 0x35, 0x63, 0x18, 0x18, 0x23, 0x2a, 0x19, 0x1a, 0x44,
    /*  57 - 19 */ 0x08, 0x42, 0x90, 0x42, 0x1f, 0x1e, 0x2b, 0x1c, 0x33, 0x1a, 0x36, 0x61, 0x19, 0x18, 0x22, 0x2b, 0x19, 0x1a, 0x44,
    /*  58 - 19 */ 0x07, 0x42, 0x92, 0x41, 0x1f, 0x1d, 0x2d, 0x1c, 0x32, 0x1a, 0x36, 0x61, 0x19, 0x18, 0x21, 0x2c, 0x19, 0x1a, 0x44,
    /*  59 - 19 */ 0x07, 0x41, 0x93, 0x42, 0x1d, 0x1d, 0x2f, 0x1c, 0x31, 0x1a, 0x37, 0x5f, 0x1a, 0x18, 0x20, 0x2d, 0x19, 0x1a, 0x44,
    /*  60 - 19 */ 0x06, 0x42, 0x94, 0x41, 0x1d, 0x1d, 0x30, 0x1b, 0x31, 0x1a, 0x37, 0x5f, 0x1a, 0x18, 0x20, 0x2d, 0x19, 0x1a, 0x44,
    /*  61 - 19 */ 0x06, 0x41, 0x95, 0x42, 0x1b, 0x1d, 0x31, 0x1b, 0x31, 0x1a, 0x38, 0x5d, 0x1b, 0x18, 0x1f, 0x2e, 0x19, 0x1a, 0x44,
    /*  62 - 19 */ 0x05, 0x42, 0x96, 0x42, 0x1a, 0x1d, 0x32, 0x1b, 0x30, 0x1a, 0x38, 0x5d, 0x1b, 0x18, 0x1e, 0x2f, 0x19, 0x1a, 0x44,
    /*  63 - 19 */ 0x05, 0x41, 0x97, 0x42, 0x1a, 0x1c, 0x33, 0x1b, 0x30, 0x1a, 0x39, 0x5b, 0x1c, 0x18, 0x1d, 0x30, 0x19, 0x1a, 0x44,
    /*  64 - 21 */ 0x04, 0x42, 0x98, 0x41, 0x19, 0x1d, 0x34, 0x1a, 0x30, 0x1a, 0x39, 0x5b, 0x1c, 0x18, 0x1d, 0x17, 0x01, 0x18, 0x19, 0x1a, 0x44,
    /*  65 - 21 */ 0x04, 0x41, 0x99, 0x41, 0x19, 0x1c, 0x35, 0x1b, 0x2f, 0x1a, 0x39, 0x5a, 0x1d, 0x18, 0x1c, 0x17, 0x02, 0x18, 0x19, 0x1a, 0x44,
    /*  66 - 21 */ 0x04, 0x41, 0x9a, 0x41, 0x18, 0x1c, 0x36, 0x1a, 0x2f, 0x1a, 0x3a, 0x59, 0x1d, 0x18, 0x1b, 0x18, 0x02, 0x18, 0x19, 0x1a, 0x44,
    /*  67 - 21 */ 0x04, 0x41, 0x9a, 0x41, 0x17, 0x1c, 0x37, 0x1a, 0x2f, 0x1a, 0x3a, 0x59, 0x1d, 0x18, 0x1a, 0x18, 0x03, 0x18, 0x19, 0x1a, 0x44,
    /*  68 - 19 */ 0x03, 0x41, 0x9b, 0x41, 0x17, 0x1c, 0x80, 0x1a, 0x3b, 0x57, 0x1e, 0x18, 0x1a, 0x17, 0x04, 0x18, 0x19, 0x1a, 0x44,
    /*  69 - 19 */ 0x03, 0x41, 0x9c, 0x41, 0x16, 0x1b, 0x81, 0x1a, 0x3b, 0x57, 0x1e, 0x18, 0x19, 0x17, 0x05, 0x18, 0x19, 0x1a, 0x44,
    /*  70 - 19 */ 0x03, 0x40, 0x9d, 0x41, 0x16, 0x1b, 0x81, 0x1a, 0x3c, 0x55, 0x1f, 0x18, 0x18, 0x18, 0x05, 0x18, 0x19, 0x1a, 0x44,
    /*  71 - 21 */ 0x02, 0x41, 0x9e, 0x40, 0x15, 0x1c, 0x81, 0x1a, 0x3c, 0x1b, 0x1e, 0x1c, 0x1f, 0x18, 0x17, 0x18, 0x06, 0x18, 0x19, 0x1a, 0x44,
    /*  72 - 21 */ 0x02, 0x40, 0x9f, 0x40, 0x15, 0x1c, 0x81, 0x1a, 0x3d, 0x1a, 0x1e, 0x1b, 0x20, 0x18, 0x17, 0x17, 0x07, 0x18, 0x19, 0x1a, 0x44,
    /*  73 - 21 */ 0x02, 0x40, 0x9f, 0x41, 0x14, 0x1b, 0x82, 0x1a, 0x3d, 0x1b, 0x1d, 0x1b, 0x20, 0x18, 0x16, 0x17, 0x08, 0x18, 0x19, 0x1a, 0x44,
    /*  74 - 21 */ 0x02, 0x40, 0xa0, 0x40, 0x14, 0x1b, 0x82, 0x1a, 0x3e, 0x1a, 0x1c, 0x1b, 0x21, 0x18, 0x15, 0x18, 0x08, 0x18, 0x19, 0x1a, 0x44,
    /*  75 - 21 */ 0x01, 0x41, 0xa0, 0x40, 0x14, 0x1b, 0x82, 0x1a, 0x3e, 0x1b, 0x1b, 0x1b, 0x21, 0x18, 0x14, 0x18, 0x09, 0x18, 0x19, 0x1a, 0x44,
    /*  76 - 21 */ 0x01, 0x41, 0xa0, 0x40, 0x14, 0x1b, 0x82, 0x1a, 0x3f, 0x1a, 0x1a, 0x1b, 0x22, 0x18, 0x14, 0x17, 0x0a, 0x18, 0x19, 0x56, 0x08,
    /*  77 - 21 */ 0x01, 0x40, 0xa1, 0x40, 0x14, 0x1b, 0x82, 0x1a, 0x3f, 0x1a, 0x1a, 0x1b, 0x22, 0x18, 0x13, 0x17, 0x0b, 0x18, 0x19, 0x56, 0x08,
    /*  78 - 21 */ 0x01, 0x40, 0xa1, 0x40, 0x14, 0x1b, 0x82, 0x1a, 0x40, 0x1a, 0x19, 0x1a, 0x23, 0x18, 0x12, 0x18, 0x0b, 0x18, 0x19, 0x56, 0x08,
    /*  79 - 21 */ 0x01, 0x40, 0xa1, 0x40, 0x13, 0x1c, 0x82, 0x1a, 0x40, 0x1a, 0x18, 0x1b, 0x23, 0x18, 0x11, 0x18, 0x0c, 0x18, 0x19, 0x56, 0x08,
    /*  80 - 21 */ 0x01, 0x40, 0xa1, 0x41, 0x12, 0x1b, 0x83, 0x1a, 0x40, 0x1b, 0x17, 0x1b, 0x23, 0x18, 0x11, 0x17, 0x0d, 0x18, 0x19, 0x56, 0x08,
    /*  81 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x12, 0x1b, 0x83, 0x1a, 0x41, 0x1a, 0x16, 0x1b, 0x24, 0x18, 0x10, 0x17, 0x0e, 0x18, 0x19, 0x56, 0x08,
    /*  82 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x12, 0x1b, 0x83, 0x1a, 0x41, 0x1a, 0x16, 0x1b, 0x24, 0x18, 0x0f, 0x18, 0x0e, 0x18, 0x19, 0x56, 0x08,
    /*  83 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x12, 0x1b, 0x83, 0x1a, 0x42, 0x1a, 0x15, 0x1a, 0x25, 0x18, 0x0e, 0x18, 0x0f, 0x18, 0x19, 0x56, 0x08,
    /*  84 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x12, 0x1c, 0x82, 0x1a, 0x42, 0x1a, 0x14, 0x1b, 0x25, 0x18, 0x0e, 0x17, 0x10, 0x18, 0x19, 0x56, 0x08,
    /*  85 - 21 */ 0x01, 0x3f, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x43, 0x1a, 0x13, 0x1a, 0x26, 0x18, 0x0d, 0x17, 0x11, 0x18, 0x19, 0x56, 0x08,
    /*  86 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x43, 0x1a, 0x12, 0x1b, 0x26, 0x18, 0x0c, 0x18, 0x11, 0x18, 0x19, 0x56, 0x08,
    /*  87 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x44, 0x1a, 0x11, 0x1a, 0x27, 0x18, 0x0b, 0x18, 0x12, 0x18, 0x19, 0x56, 0x08,
    /*  88 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x44, 0x1a, 0x10, 0x1b, 0x27, 0x18, 0x0b, 0x17, 0x13, 0x18, 0x19, 0x56, 0x08,
    /*  89 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x45, 0x19, 0x10, 0x1a, 0x28, 0x18, 0x0a, 0x17, 0x14, 0x18, 0x19, 0x56, 0x08,
    /*  90 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x45, 0x1a, 0x0f, 0x1a, 0x28, 0x18, 0x09, 0x18, 0x14, 0x18, 0x19, 0x56, 0x08,
    /*  91 - 21 */ 0x00, 0x40, 0xa3, 0x40, 0x13, 0x1b, 0x82, 0x1a, 0x46, 0x19, 0x0e, 0x1a, 0x29, 0x18, 0x08, 0x18, 0x15, 0x18, 0x19, 0x56, 0x08,
    /*  92 - 21 */ 0x01, 0x3f, 0xa3, 0x40, 0x13, 0x1c, 0x81, 0x1a, 0x46, 0x1a, 0x0d, 0x1a, 0x29, 0x18, 0x08, 0x17, 0x16, 0x18, 0x19, 0x56, 0x08,
    /*  93 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x14, 0x1b, 0x81, 0x1a, 0x47, 0x19, 0x0c, 0x1b, 0x29, 0x18, 0x07, 0x17, 0x17, 0x18, 0x19, 0x1a, 0x44,
    /*  94 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x14, 0x1b, 0x81, 0x1a, 0x47, 0x1a, 0x0b, 0x1a, 0x2a, 0x18, 0x06, 0x18, 0x17, 0x18, 0x19, 0x1a, 0x44,
    /*  95 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x14, 0x1b, 0x81, 0x1a, 0x48, 0x19, 0x0b, 0x1a, 0x2a, 0x18, 0x05, 0x18, 0x18, 0x18, 0x19, 0x1a, 0x44,
    /*  96 - 21 */ 0x01, 0x40, 0xa2, 0x40, 0x15, 0x1b, 0x80, 0x1a, 0x48, 0x19, 0x0a, 0x1a, 0x2b, 0x18, 0x05, 0x17, 0x19, 0x18, 0x19, 0x1a, 0x44,
    /*  97 - 21 */ 0x01, 0x40, 0xa1, 0x41, 0x15, 0x1b, 0x80, 0x1a, 0x48, 0x1a, 0x09, 0x1a, 0x2b, 0x18, 0x04, 0x17, 0x1a, 0x18, 0x19, 0x1a, 0x44,
    /*  98 - 23 */ 0x01, 0x40, 0xa1, 0x40, 0x16, 0x1b, 0x38, 0x19, 0x2f, 0x1a, 0x49, 0x19, 0x08, 0x1a, 0x2c, 0x18, 0x03, 0x18, 0x1a, 0x18, 0x19, 0x1a, 0x44,
    /*  99 - 23 */ 0x01, 0x40, 0xa1, 0x40, 0x16, 0x1c, 0x36, 0x1a, 0x2f, 0x1a, 0x49, 0x1a, 0x07, 0x1a, 0x2c, 0x18, 0x02, 0x18, 0x1b, 0x18, 0x19, 0x1a, 0x44,
    /* 100 - 23 */ 0x01, 0x40, 0xa1, 0x40, 0x17, 0x1c, 0x34, 0x1b, 0x2f, 0x1a, 0x4a, 0x19, 0x07, 0x19, 0x2d, 0x18, 0x02, 0x17, 0x1c, 0x18, 0x19, 0x1a, 0x44,
    /* 101 - 23 */ 0x01, 0x41, 0xa0, 0x40, 0x17, 0x1c, 0x34, 0x1b, 0x2f, 0x1a, 0x4a, 0x1a, 0x05, 0x1a, 0x2d, 0x18, 0x01, 0x17, 0x1d, 0x18, 0x19, 0x1a, 0x44,
    /* 102 - 21 */ 0x01, 0x41, 0xa0, 0x40, 0x17, 0x1d, 0x32, 0x1c, 0x2f, 0x1a, 0x4b, 0x19, 0x05, 0x19, 0x2e, 0x30, 0x1d, 0x18, 0x19, 0x1a, 0x44,
    /* 103 - 21 */ 0x02, 0x40, 0xa0, 0x40, 0x18, 0x1c, 0x32, 0x1b, 0x30, 0x1a, 0x4b, 0x19, 0x04, 0x1a, 0x2e, 0x2f, 0x1e, 0x18, 0x19, 0x1a, 0x44,
    /* 104 - 21 */ 0x02, 0x40, 0x9f, 0x41, 0x18, 0x1d, 0x30, 0x1c, 0x30, 0x1a, 0x4c, 0x19, 0x03, 0x19, 0x2f, 0x2e, 0x1f, 0x18, 0x19, 0x1a, 0x44,
    /* 105 - 21 */ 0x02, 0x40, 0x9f, 0x40, 0x1a, 0x1d, 0x2e, 0x1d, 0x30, 0x1a, 0x4c, 0x19, 0x02, 0x1a, 0x2f, 0x2d, 0x20, 0x18, 0x19, 0x1a, 0x44,
    /* 106 - 21 */ 0x02, 0x41, 0x9e, 0x40, 0x1a, 0x1e, 0x2d, 0x1c, 0x31, 0x1a, 0x4d, 0x19, 0x01, 0x19, 0x30, 0x2d, 0x20, 0x18, 0x19, 0x1a, 0x44,
    /* 107 - 21 */ 0x03, 0x40, 0x9d, 0x41, 0x1b, 0x1e, 0x2b, 0x1d, 0x31, 0x1a, 0x4d, 0x19, 0x01, 0x19, 0x30, 0x2c, 0x21, 0x18, 0x19, 0x1a, 0x44,
    /* 108 - 19 */ 0x03, 0x41, 0x9c, 0x41, 0x1c, 0x1e, 0x29, 0x1d, 0x32, 0x1a, 0x4e, 0x32, 0x30, 0x2b, 0x22, 0x18, 0x19, 0x1a, 0x44,
    /* 109 - 19 */ 0x03, 0x41, 0x9b, 0x41, 0x1d, 0x20, 0x25, 0x1f, 0x32, 0x1a, 0x4e, 0x31, 0x31, 0x2a, 0x23, 0x18, 0x19, 0x1a, 0x44,
    /* 110 - 19 */ 0x04, 0x41, 0x9a, 0x41, 0x1e, 0x20, 0x22, 0x20, 0x33, 0x1a, 0x4f, 0x30, 0x31, 0x2a, 0x23, 0x18, 0x19, 0x1a, 0x44,
    /* 111 - 19 */ 0x04, 0x41, 0x99, 0x42, 0x1e, 0x22, 0x1f, 0x20, 0x34, 0x1a, 0x4f, 0x2f, 0x32, 0x29, 0x24, 0x18, 0x19, 0x1a, 0x44,
    /* 112 - 19 */ 0x04, 0x41, 0x99, 0x41, 0x20, 0x24, 0x1a, 0x22, 0x34, 0x1a, 0x4f, 0x2f, 0x32, 0x28, 0x25, 0x18, 0x19, 0x1a, 0x44,
    /* 113 - 19 */ 0x04, 0x42, 0x98, 0x41, 0x21, 0x26, 0x14, 0x24, 0x0f, 0x66, 0x2a, 0x2d, 0x33, 0x27, 0x26, 0x18, 0x19, 0x5c, 0x02,
    /* 114 - 19 */ 0x05, 0x41, 0x97, 0x42, 0x22, 0x2c, 0x05, 0x2b, 0x10, 0x66, 0x2a, 0x2d, 0x33, 0x27, 0x26, 0x18, 0x19, 0x5c, 0x02,
    /* 115 - 17 */ 0x05, 0x42, 0x96, 0x42, 0x23, 0x5a, 0x11, 0x66, 0x2b, 0x2b, 0x34, 0x26, 0x27, 0x18, 0x19, 0x5c, 0x02,
    /* 116 - 17 */ 0x05, 0x42, 0x95, 0x42, 0x25, 0x58, 0x12, 0x66, 0x2b, 0x2b, 0x34, 0x25, 0x28, 0x18, 0x19, 0x5c, 0x02,
    /* 117 - 17 */ 0x06, 0x42, 0x94, 0x41, 0x27, 0x56, 0x13, 0x66, 0x2c, 0x29, 0x35, 0x24, 0x29, 0x18, 0x19, 0x5c, 0x02,
    /* 118 - 17 */ 0x07, 0x42, 0x92, 0x42, 0x28, 0x54, 0x14, 0x66, 0x2c, 0x29, 0x35, 0x24, 0x29, 0x18, 0x19, 0x5c, 0x02,
    /* 119 - 17 */ 0x07, 0x42, 0x91, 0x42, 0x2a, 0x52, 0x15, 0x66, 0x2d, 0x27, 0x36, 0x23, 0x2a, 0x18, 0x19, 0x5c, 0x02,
    /* 120 - 17 */ 0x08, 0x42, 0x8f, 0x43, 0x2b, 0x50, 0x16, 0x66, 0x2d, 0x27, 0x36, 0x22, 0x2b, 0x18, 0x19, 0x5c, 0x02,
    /* 121 - 17 */ 0x09, 0x42, 0x8e, 0x42, 0x2e, 0x4d, 0x17, 0x66, 0x2e, 0x26, 0x36, 0x22, 0x2b, 0x18, 0x19, 0x5c, 0x02,
    /* 122 - 17 */ 0x09, 0x42, 0x8d, 0x42, 0x30, 0x4a, 0x19, 0x66, 0x2e, 0x25, 0x37, 0x21, 0x2c, 0x18, 0x19, 0x5c, 0x02,
    /* 123 - 17 */ 0x0a, 0x42, 0x8b, 0x43, 0x32, 0x47, 0x1a, 0x66, 0x2f, 0x24, 0x37, 0x20, 0x2d, 0x18, 0x19, 0x5c, 0x02,
    /* 124 - 17 */ 0x0a, 0x43, 0x89, 0x43, 0x34, 0x44, 0x1c, 0x66, 0x2f, 0x23, 0x38, 0x1f, 0x2e, 0x18, 0x19, 0x5c, 0x02,
    /* 125 - 17 */ 0x0b, 0x43, 0x87, 0x43, 0x37, 0x40, 0x1e, 0x66, 0x30, 0x22, 0x38, 0x1f, 0x2e, 0x18, 0x19, 0x5c, 0x02,
    /* 126 - 17 */ 0x0c, 0x43, 0x85, 0x44, 0x3a, 0x3b, 0x20, 0x66, 0x30, 0x21, 0x39, 0x1e, 0x2f, 0x18, 0x19, 0x5c, 0x02,
    /* 127 - 17 */ 0x0c, 0x44, 0x83, 0x44, 0x3d, 0x36, 0x23, 0x66, 0x31, 0x20, 0x39, 0x1d, 0x30, 0x18, 0x19, 0x5c, 0x02,
    /* 128 - 17 */ 0x0d, 0x44, 0x81, 0x45, 0x40, 0x31, 0x25, 0x66, 0x31, 0x1f, 0x3a, 0x1c, 0x31, 0x18, 0x19, 0x5c, 0x02,
    /* 129 - 17 */ 0x0d, 0x46, 0x7e, 0x45, 0x44, 0x2a, 0x29, 0x66, 0x32, 0x1e, 0x3a, 0x1b, 0x32, 0x18, 0x19, 0x5c, 0x02,
    /* 130 -  9 */ 0x0e, 0x46, 0x7b, 0x46, 0x49, 0x22, 0xff, 0x00, 0xfa,
    /* 131 -  9 */ 0x0f, 0x47, 0x78, 0x47, 0x4e, 0x18, 0xff, 0x00, 0xff,
    /* 132 -  9 */ 0x0f, 0x48, 0x75, 0x48, 0xff, 0x00, 0xff, 0x00, 0x67,
    /* 133 -  9 */ 0x10, 0x49, 0x72, 0x49, 0xff, 0x00, 0xff, 0x00, 0x67,
    /* 134 -  9 */ 0x11, 0x49, 0x6f, 0x4a, 0xff, 0x00, 0xff, 0x00, 0x68,
    /* 135 -  9 */ 0x11, 0x4a, 0x6d, 0x4a, 0xff, 0x00, 0xff, 0x00, 0x69,
    /* 136 -  9 */ 0x12, 0x4c, 0x68, 0x4c, 0xff, 0x00, 0xff, 0x00, 0x69,
    /* 137 -  9 */ 0x13, 0x4d, 0x64, 0x4c, 0xff, 0x00, 0xff, 0x00, 0x6b,
    /* 138 -  9 */ 0x14, 0x4e, 0x5f, 0x4e, 0xff, 0x00, 0xff, 0x00, 0x6c,
    /* 139 -  9 */ 0x15, 0x50, 0x5a, 0x4f, 0xff, 0x00, 0xff, 0x00, 0x6d,
    /* 140 -  9 */ 0x17, 0x50, 0x56, 0x50, 0xff, 0x00, 0xff, 0x00, 0x6e,
    /* 141 -  9 */ 0x18, 0x51, 0x51, 0x52, 0xff, 0x00, 0xff, 0x00, 0x6f,
    /* 142 -  9 */ 0x19, 0x54, 0x49, 0x55, 0xff, 0x00, 0xff, 0x00, 0x70,
    /* 143 -  9 */ 0x1a, 0x57, 0x41, 0x57, 0xff, 0x00, 0xff, 0x00, 0x72,
    /* 144 -  9 */ 0x1b, 0x5a, 0x3a, 0x59, 0xff, 0x00, 0xff, 0x00, 0x73,
    /* 145 -  9 */ 0x1c, 0x61, 0x2a, 0x60, 0xff, 0x00, 0xff, 0x00, 0x74,
    /* 146 -  9 */ 0x1d, 0x6b, 0x14, 0x6a, 0xff, 0x00, 0xff, 0x00, 0x75,
    /* 147 -  7 */ 0x1f, 0xe6, 0xff, 0x00, 0xff, 0x00, 0x76,
    /* 148 -  7 */ 0x20, 0xe4, 0xff, 0x00, 0xff, 0x00, 0x77,
    /* 149 -  7 */ 0x21, 0xe2, 0xff, 0x00, 0xff, 0x00, 0x78,
    /* 150 -  7 */ 0x22, 0xdf, 0xff, 0x00, 0xff, 0x00, 0x7a,
    /* 151 -  7 */ 0x23, 0xdd, 0xff, 0x00, 0xff, 0x00, 0x7b,
    /* 152 -  7 */ 0x25, 0xda, 0xff, 0x00, 0xff, 0x00, 0x7c,
    /* 153 -  7 */ 0x27, 0xd6, 0xff, 0x00, 0xff, 0x00, 0x7e,
    /* 154 -  7 */ 0x29, 0xd2, 0xff, 0x00, 0xff, 0x00, 0x80,
    /* 155 -  7 */ 0x2b, 0xce, 0xff, 0x00, 0xff, 0x00, 0x82,
    /* 156 -  7 */ 0x2d, 0xca, 0xff, 0x00, 0xff, 0x00, 0x84,
    /* 157 -  7 */ 0x2f, 0xc6, 0xff, 0x00, 0xff, 0x00, 0x86,
    /* 158 -  7 */ 0x31, 0xc1, 0xff, 0x00, 0xff, 0x00, 0x89,
    /* 159 -  7 */ 0x33, 0xbd, 0xff, 0x00, 0xff, 0x00, 0x8b,
    /* 160 -  7 */ 0x35, 0xb9, 0xff, 0x00, 0xff, 0x00, 0x8d,
    /* 161 -  7 */ 0x37, 0xb5, 0xff, 0x00, 0xff, 0x00, 0x8f,
    /* 162 -  7 */ 0x39, 0xb1, 0xff, 0x00, 0xff, 0x00, 0x91,
    /* 163 -  7 */ 0x3c, 0xac, 0xff, 0x00, 0xff, 0x00, 0x93,
    /* 164 -  7 */ 0x3f, 0xa6, 0xff, 0x00, 0xff, 0x00, 0x96,
    /* 165 -  7 */ 0x42, 0x9f, 0xff, 0x00, 0xff, 0x00, 0x9a,
    /* 166 -  7 */ 0x45, 0x99, 0xff, 0x00, 0xff, 0x00, 0x9d,
    /* 167 -  7 */ 0x48, 0x93, 0xff, 0x00, 0xff, 0x00, 0xa0,
    /* 168 -  7 */ 0x4c, 0x8c, 0xff, 0x00, 0xff, 0x00, 0xa3,
    /* 169 -  7 */ 0x4f, 0x86, 0xff, 0x00, 0xff, 0x00, 0xa6,
    /* 170 -  7 */ 0x52, 0x7f, 0xff, 0x00, 0xff, 0x00, 0xaa,
    /* 171 -  7 */ 0x57, 0x75, 0xff, 0x00, 0xff, 0x00, 0xaf,
    /* 172 -  7 */ 0x5d, 0x6a, 0xff, 0x00, 0xff, 0x00, 0xb4,
    /* 173 -  7 */ 0x62, 0x5f, 0xff, 0x00, 0xff, 0x00, 0xba,
    /* 174 -  7 */ 0x68, 0x54, 0xff, 0x00, 0xff, 0x00, 0xbf,
    /* 175 -  7 */ 0x6f, 0x45, 0xff, 0x00, 0xff, 0x00, 0xc7,
    /* 176 -  7 */ 0x78, 0x33, 0xff, 0x00, 0xff, 0x00, 0xd0,
    /* 177 -  7 */ 0x87, 0x15, 0xff, 0x00, 0xff, 0x00, 0xdf
};
