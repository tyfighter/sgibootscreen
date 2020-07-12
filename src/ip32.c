#include "types.h"

const u8 o2logo[] = {
  0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF,
  0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00,
  0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF,
  0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF,
  0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00,
  0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF,
  0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF,
  0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00,
  0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xC0, 0x21, 0xFF,
  0x00, 0x0E, 0xB5, 0x37, 0xFF, 0x00, 0x03, 0xAC, 0x49, 0xF9,
  0xA6, 0x55, 0xF3, 0xA0, 0x60, 0xEE, 0x9C, 0x69, 0xE9, 0x98,
  0x71, 0xE5, 0x93, 0x7A, 0xE1, 0x8F, 0x82, 0xDD, 0x8C, 0x88,
  0xDA, 0x89, 0x8E, 0xD7, 0x86, 0x94, 0xD4, 0x83, 0x9A, 0xD1,
  0x81, 0x9F, 0xCE, 0x7E, 0xA4, 0xCC, 0x7C, 0xA9, 0xC9, 0x79,
  0xAE, 0xC7, 0x77, 0xB3, 0xC4, 0x75, 0xB7, 0xC2, 0x73, 0xBB,
  0xC0, 0x71, 0xBF, 0xBE, 0x6F, 0xC3, 0xBC, 0x6D, 0xC7, 0xBA,
  0x6B, 0xCA, 0xB9, 0x69, 0xCE, 0xB7, 0x68, 0xD1, 0xB5, 0x66,
  0xD4, 0xB4, 0x65, 0xD7, 0xB2, 0x63, 0xDA, 0xB1, 0x62, 0xDD,
  0xAF, 0x60, 0xE1, 0xAD, 0x5F, 0xE3, 0xAC, 0x5D, 0xE6, 0xAB,
  0x5C, 0xE8, 0xAA, 0x5B, 0xEB, 0xA8, 0x5A, 0xED, 0xA7, 0x58,
  0xF0, 0xA6, 0x57, 0xF3, 0xA4, 0x56, 0xF5, 0xA3, 0x55, 0xF7,
  0xA2, 0x54, 0xF9, 0xA1, 0x53, 0x6E, 0x1F, 0x6E, 0xA0, 0x52,
  0x68, 0x2D, 0x68, 0x9F, 0x51, 0x64, 0x38, 0x63, 0x9E, 0x50,
  0x5F, 0x43, 0x5F, 0x9D, 0x4F, 0x5D, 0x49, 0x5D, 0x9C, 0x4E,
  0x5B, 0x4F, 0x5B, 0x9B, 0x4D, 0x59, 0x55, 0x59, 0x9A, 0x4C,
  0x57, 0x5B, 0x57, 0x99, 0x4B, 0x55, 0x61, 0x55, 0x98, 0x4A,
  0x54, 0x65, 0x53, 0x98, 0x49, 0x54, 0x67, 0x53, 0x97, 0x49,
  0x52, 0x6B, 0x52, 0x96, 0x48, 0x51, 0x6F, 0x51, 0x95, 0x47,
  0x50, 0x73, 0x50, 0x94, 0x46, 0x4F, 0x77, 0x4E, 0x94, 0x46,
  0x4E, 0x79, 0x4E, 0x93, 0x45, 0x4D, 0x7D, 0x4D, 0x92, 0x44,
  0x4D, 0x7F, 0x4C, 0x92, 0x44, 0x4C, 0x81, 0x4C, 0x91, 0x43,
  0x4C, 0x83, 0x4C, 0x90, 0x42, 0x4C, 0x85, 0x4B, 0x90, 0x42,
  0x4B, 0x87, 0x4B, 0x8F, 0x41, 0x4A, 0x8B, 0x4A, 0x8E, 0x41,
  0x49, 0x8D, 0x49, 0x8E, 0x40, 0x49, 0x8F, 0x49, 0x8D, 0x40,
  0x49, 0x8F, 0x49, 0x8D, 0x3F, 0x49, 0x91, 0x49, 0x8C, 0x3F,
  0x48, 0x93, 0x48, 0x8C, 0x3E, 0x48, 0x94, 0x49, 0x8B, 0x3E,
  0x48, 0x95, 0x48, 0x8B, 0x3D, 0x48, 0x97, 0x48, 0x8A, 0x3D,
  0x47, 0x99, 0x47, 0x8A, 0x3D, 0x47, 0x99, 0x47, 0x8A, 0x3C,
  0x47, 0x9B, 0x47, 0x89, 0x3C, 0x47, 0x9B, 0x47, 0x89, 0x3B,
  0x47, 0x9D, 0x46, 0x2E, 0x4E, 0x0D, 0x3B, 0x47, 0x9D, 0x47,
  0x2D, 0x4E, 0x0D, 0x3B, 0x46, 0x9F, 0x46, 0x2D, 0x4E, 0x0D,
  0x3A, 0x47, 0x9F, 0x47, 0x2D, 0x4D, 0x0D, 0x3A, 0x47, 0x9F,
  0x47, 0x2F, 0x4B, 0x0D, 0x3A, 0x46, 0xA1, 0x46, 0x30, 0x4A,
  0x0D, 0x3A, 0x46, 0xA1, 0x46, 0x32, 0x48, 0x0D, 0x39, 0x46,
  0xA3, 0x45, 0x33, 0x47, 0x0D, 0x39, 0x46, 0xA3, 0x46, 0x34,
  0x45, 0x0D, 0x39, 0x46, 0xA3, 0x46, 0x35, 0x44, 0x0D, 0x39,
  0x45, 0xA5, 0x45, 0x37, 0x42, 0x0D, 0x39, 0x45, 0xA5, 0x45,
  0x38, 0x41, 0x0D, 0x38, 0x46, 0xA5, 0x46, 0x39, 0x3F, 0x0D,
  0x38, 0x46, 0xA5, 0x46, 0x3A, 0x1B, 0x30, 0x38, 0x46, 0xA5,
  0x46, 0x3C, 0x1B, 0x2E, 0x38, 0x46, 0xA5, 0x46, 0x3D, 0x1B,
  0x2D, 0x38, 0x46, 0xA5, 0x46, 0x3F, 0x1B, 0x2B, 0x38, 0x46,
  0xA5, 0x46, 0x40, 0x1B, 0x2A, 0x38, 0x45, 0xA7, 0x45, 0x41,
  0x1C, 0x28, 0x38, 0x45, 0xA7, 0x45, 0x43, 0x1B, 0x27, 0x38,
  0x45, 0xA7, 0x45, 0x44, 0x1C, 0x25, 0x38, 0x45, 0xA7, 0x45,
  0x45, 0x1C, 0x24, 0x38, 0x45, 0xA7, 0x45, 0x47, 0x1B, 0x23,
  0x38, 0x45, 0xA7, 0x45, 0x48, 0x1B, 0x22, 0x38, 0x45, 0xA7,
  0x45, 0x49, 0x1C, 0x20, 0x38, 0x45, 0xA7, 0x45, 0x4B, 0x1B,
  0x1F, 0x38, 0x45, 0xA6, 0x46, 0x4C, 0x1B, 0x1E, 0x38, 0x46,
  0xA5, 0x46, 0x4D, 0x1B, 0x1D, 0x38, 0x46, 0xA5, 0x46, 0x4E,
  0x1B, 0x1C, 0x38, 0x46, 0xA5, 0x46, 0x50, 0x1B, 0x1A, 0x38,
  0x46, 0xA5, 0x46, 0x51, 0x1A, 0x1A, 0x38, 0x46, 0xA5, 0x46,
  0x52, 0x1A, 0x19, 0x39, 0x45, 0xA5, 0x45, 0x54, 0x1A, 0x18,
  0x39, 0x45, 0xA5, 0x45, 0x55, 0x1A, 0x17, 0x39, 0x45, 0xA5,
  0x45, 0x55, 0x1B, 0x16, 0x39, 0x46, 0xA3, 0x46, 0x56, 0x1B,
  0x15, 0x3A, 0x45, 0xA3, 0x45, 0x58, 0x1A, 0x15, 0x3A, 0x46,
  0xA1, 0x46, 0x58, 0x1B, 0x14, 0x3A, 0x46, 0xA1, 0x46, 0x59,
  0x1A, 0x14, 0x3A, 0x46, 0xA1, 0x46, 0x59, 0x1A, 0x14, 0x3A,
  0x47, 0x9F, 0x46, 0x5A, 0x1B, 0x13, 0x3B, 0x46, 0x9F, 0x46,
  0x2F, 0x02, 0x28, 0x1C, 0x13, 0x3B, 0x47, 0x9D, 0x47, 0x2F,
  0x05, 0x25, 0x1C, 0x13, 0x3C, 0x46, 0x9D, 0x46, 0x30, 0x08,
  0x22, 0x1C, 0x13, 0x3C, 0x46, 0x9D, 0x46, 0x30, 0x0B, 0x1D,
  0x1E, 0x13, 0x3C, 0x47, 0x9B, 0x47, 0x30, 0x0D, 0x1A, 0x1F,
  0x13, 0x3D, 0x46, 0x9B, 0x46, 0x31, 0x0F, 0x16, 0x20, 0x14,
  0x3D, 0x47, 0x99, 0x47, 0x31, 0x15, 0x0D, 0x23, 0x14, 0x3D,
  0x48, 0x97, 0x48, 0x31, 0x45, 0x14, 0x3E, 0x48, 0x95, 0x48,
  0x32, 0x44, 0x15, 0x3E, 0x48, 0x95, 0x48, 0x32, 0x44, 0x15,
  0x3F, 0x48, 0x93, 0x48, 0x33, 0x42, 0x17, 0x3F, 0x49, 0x91,
  0x49, 0x33, 0x41, 0x18, 0x40, 0x49, 0x8F, 0x49, 0x34, 0x40,
  0x19, 0x40, 0x49, 0x8F, 0x49, 0x35, 0x3D, 0x1B, 0x41, 0x49,
  0x8D, 0x49, 0x39, 0x39, 0x1C, 0x41, 0x4A, 0x8B, 0x4A, 0x3D,
  0x30, 0x21, 0x42, 0x4A, 0x89, 0x4A, 0x42, 0x29, 0x24, 0x43,
  0x4B, 0x85, 0x4B, 0x47, 0x21, 0x28, 0x43, 0x4C, 0x83, 0x4C,
  0x4F, 0x0F, 0x32, 0x44, 0x4C, 0x81, 0x4C, 0x91, 0x45, 0x4C,
  0x7F, 0x4C, 0x92, 0x45, 0x4D, 0x7D, 0x4D, 0x92, 0x46, 0x4D,
  0x7B, 0x4D, 0x93, 0x46, 0x4F, 0x77, 0x4F, 0x93, 0x47, 0x50,
  0x73, 0x50, 0x94, 0x48, 0x51, 0x6F, 0x51, 0x95, 0x49, 0x51,
  0x6D, 0x51, 0x96, 0x4A, 0x52, 0x69, 0x52, 0x97, 0x4A, 0x54,
  0x65, 0x54, 0x97, 0x4B, 0x55, 0x61, 0x55, 0x98, 0x4C, 0x57,
  0x5B, 0x57, 0x99, 0x4D, 0x59, 0x55, 0x59, 0x9A, 0x4E, 0x5B,
  0x50, 0x5A, 0x9B, 0x4F, 0x5C, 0x4B, 0x5C, 0x9C, 0x50, 0x5F,
  0x44, 0x5E, 0x9D, 0x51, 0x63, 0x39, 0x63, 0x9E, 0x52, 0x67,
  0x2F, 0x67, 0x9F, 0x53, 0x6B, 0x25, 0x6B, 0xA0, 0x54, 0x7B,
  0x03, 0x7B, 0xA1, 0x55, 0xF7, 0xA2, 0x56, 0xF5, 0xA3, 0x57,
  0xF3, 0xA4, 0x58, 0xF1, 0xA5, 0x5A, 0xED, 0xA7, 0x5B, 0xEB,
  0xA8, 0x5C, 0xE9, 0xA9, 0x5D, 0xE7, 0xAA, 0x5F, 0xE3, 0xAC,
  0x60, 0xE1, 0xAD, 0x62, 0xDD, 0xAF, 0x63, 0xDB, 0xB0, 0x65,
  0xD7, 0xB2, 0x66, 0xD5, 0xB3, 0x68, 0xD1, 0xB5, 0x69, 0xCF,
  0xB6, 0x6B, 0xCB, 0xB8, 0x6D, 0xC7, 0xBA, 0x6F, 0xC3, 0xBC,
  0x71, 0xBF, 0xBE, 0x73, 0xBB, 0xC0, 0x75, 0xB8, 0xC1, 0x77,
  0xB3, 0xC4, 0x79, 0xAF, 0xC6, 0x7C, 0xAA, 0xC8, 0x7E, 0xA5,
  0xCB, 0x80, 0xA1, 0xCD, 0x83, 0x9B, 0xD0, 0x86, 0x95, 0xD3,
  0x89, 0x8F, 0xD6, 0x8C, 0x89, 0xD9, 0x8F, 0x83, 0xDC, 0x93,
  0x7B, 0xE0, 0x97, 0x73, 0xE4, 0x9B, 0x6B, 0xE8, 0xA0, 0x62,
  0xEC, 0xA5, 0x57, 0xF2, 0xAB, 0x4B, 0xF8, 0xB3, 0x3B, 0xFF,
  0x00, 0x01, 0xBD, 0x27, 0xFF, 0x00, 0x0B, 0xFF, 0x00, 0xEF,
  0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF,
  0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00,
  0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF, 0xFF, 0x00, 0xEF,
  0xFF, 0x00, 0xEF, 0x00
};