#ifndef __FONTS_H__
#define __FONTS_H__

typedef struct fontchar_s {
    u16 offset;
    u8 w;
    u8 h;
    s8 xoff;
    s8 yoff;
    s16 width;
    char ch;
} fontchar_t;

typedef struct font_s {
    const u16 *data;
    const fontchar_t *info;
    u32 dataLen;
    u32 infoLen;
    u16 fontHeight;
    u16 fontDescender;
} font_t;

extern const font_t helvR10;
extern const font_t ncenB18;
extern const font_t ScrB18;
extern const font_t SgiFont;
extern const font_t UnkFont;
extern const font_t VgxFont;

#define SGIFONT(c) \
((c == ' ') ?  0 : (c == 'C') ?  1 : (c == 'G') ?  2 : (c == 'I') ?  9 : \
 (c == 'S') ?  3 : (c == 'a') ?  4 : (c == 'c') ?  5 : (c == 'e') ?  6 : \
 (c == 'h') ?  7 : (c == 'i') ?  8 : (c == 'l') ?  9 : (c == 'm') ? 10 : \
 (c == 'n') ? 11 : (c == 'o') ? 12 : (c == 'p') ? 13 : (c == 'r') ? 14 : \
 (c == 's') ? 15 : (c == 't') ? 16 : (c == 'u') ? 17 : (c == 'y') ? 18 : \
 (c == ',') ? 19 : (c == '.') ? 20 : -1)

#endif /* __FONTS_H__ */
