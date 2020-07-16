#include "types.h"
#include "bootscreen.h"
#include "bs_priv.h"
#include "colors.h"
#include "fonts.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
 * ip19.c
 */
extern const u8 realitylogo[];


/*
 * ip20.c
 */
extern const u8 indigologo[];


/*
 * ip22.c
 */
extern const u8 indigo2logo[];


/*
 * ip24.c
 */
extern const u8 indylogo[];


/*
 * ip26.c
 */
extern const u8 powerindigo2logo[];
extern const u8 powerindigo2shadow[];


/*
 * ip28.c
 */
extern const u8 indigo2r10klogo[];
extern const u8 indigo2r10kshadow[];


/*
 * ip30.c
 */
extern const u8 octanelogo[];


/*
 * ip32.c
 */
extern const u8 o2logo[];


/*
 * ip35.c
 */
extern const u8 fuellogo[];
extern const u8 infiniteperformancelogo[];
extern const u8 infiniterealitylogo[];
extern const u8 tezrologo[];
extern const u8 ultimatevisionlogo[];


/*
 * sgcslogo.c
 */
extern const u8 sgcslogo[];


/*
 * venice.c
 */
extern const u8 realityenginelogo_red[];
extern const u8 realityenginelogo_green[];
extern const u8 realityenginelogo_blue[];


/* Boot screen type
 *   Really only needs to be "old" vs. "new", but
 *   I didn't know that when I was starting.
 */
#define BOOTSCREEN_TYPE                       0x7
#define BOOTSCREEN_TYPE_UNK                   0x0
#define BOOTSCREEN_TYPE_VGX                   0x1
#define BOOTSCREEN_TYPE_MG1                   0x2
#define BOOTSCREEN_TYPE_RE                    0x3
#define BOOTSCREEN_TYPE_NEW                   0x4


/* Silicon Graphics string
 *   Older systems print "Silicon Graphics Computer Systems"
 *   while newer systems print "Silicon Graphics, lnc.".
 */
#define BOOTSCREEN_SGSTR                      0x8
#define BOOTSCREEN_SGSTR_SGCS                 0x0
#define BOOTSCREEN_SGSTR_SGI                  0x8


/* Silicon Graphics string color
 *   Older systems print the above string in yellow,
 *   while newer systems print it in white.
 */
#define BOOTSCREEN_SGSTR_COLOR                0x10
#define BOOTSCREEN_SGSTR_COLOR_YELLOW         0x0
#define BOOTSCREEN_SGSTR_COLOR_WHITE          0x10


/* Logo shadow offset
 *   A few of systems adjust the position of the
 *   logo shadow.
 */
#define BOOTSCREEN_LOGO_SHADOW_OFFSET         0x60
#define BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0     0x00
#define BOOTSCREEN_LOGO_SHADOW_OFFSET_N7_11   0x20
#define BOOTSCREEN_LOGO_SHADOW_OFFSET_N10_14  0x40


static const bootscreen_t bs_mg1_entry = {
    BOOTSCREEN_TYPE_MG1,
    1024, 768
};


static const bootscreen_t bs_mg1_express = {
    BOOTSCREEN_TYPE_MG1,
    1280, 1024
};


static const bootscreen_new_t bs_ip19reality = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_N7_11,
        1280, 1024 },
    realitylogo,
    realitylogo,
    512, 256
};


static const bootscreen_new_t bs_ip20indigo = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    indigologo,
    indigologo,
    512, 256
};

const bootscreen_new_t bs_ip22indigo2 = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    indigo2logo,
    indigo2logo,
    918, 150
};

static const bootscreen_new_t bs_ip24indy = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    indylogo,
    indylogo,
    576, 256
};

const bootscreen_new_t bs_ip26powerindigo2 = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_N10_14,
        1280, 1024 },
    powerindigo2logo,
    powerindigo2shadow,
    918, 150
};

const bootscreen_new_t bs_ip28indigo2r10k = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_N10_14,
        1280, 1024 },
    indigo2r10klogo,
    indigo2r10kshadow,
    918, 150
};


static const bootscreen_new_t bs_ip30octane = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    octanelogo,
    octanelogo,
    889, 178
};


static const bootscreen_new_t bs_ip32o2 = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGCS |
        BOOTSCREEN_SGSTR_COLOR_YELLOW |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    o2logo,
    o2logo,
    494, 237
};


static const bootscreen_new_t bs_ip35fuel = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    fuellogo,
    fuellogo,
    964, 237
};


static const bootscreen_new_t bs_ip35infiniteperformance = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    infiniteperformancelogo,
    infiniteperformancelogo,
    1162, 142
};


static const bootscreen_new_t bs_ip35infinitereality = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    infiniterealitylogo,
    infiniterealitylogo,
    872, 174
};


static const bootscreen_new_t bs_ip35tezro = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    tezrologo,
    tezrologo,
    891, 283
};


static const bootscreen_new_t bs_ip35ultimatevision = {
    {   BOOTSCREEN_TYPE_NEW |
        BOOTSCREEN_SGSTR_SGI |
        BOOTSCREEN_SGSTR_COLOR_WHITE |
        BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0,
        1280, 1024 },
    ultimatevisionlogo,
    ultimatevisionlogo,
    772, 139
};


static const bootscreen_t bs_vgx = {
    BOOTSCREEN_TYPE_VGX,
    1280, 1024
};


static const bootscreen_t bs_realityengine = {
    BOOTSCREEN_TYPE_RE,
    1280, 1024
};


static const bootscreen_t * const bootscreens[] = {
    &bs_vgx,
    &bs_mg1_entry,
    &bs_mg1_express,
    &bs_realityengine,
    &bs_ip19reality.base,
    &bs_ip20indigo.base,
    &bs_ip22indigo2.base,
    &bs_ip24indy.base,
    &bs_ip26powerindigo2.base,
    &bs_ip28indigo2r10k.base,
    &bs_ip30octane.base,
    &bs_ip32o2.base,
    &bs_ip35fuel.base,
    &bs_ip35infiniteperformance.base,
    &bs_ip35infinitereality.base,
    &bs_ip35tezro.base,
    &bs_ip35ultimatevision.base
};

static const char WELCOME_TO[] = "W   E   L   C   O   M   E     T   O";
static const u8 SiliconGraphicsComputerSystems[] = {
    SGIFONT('S'), SGIFONT('i'), SGIFONT('l'), SGIFONT('i'), SGIFONT('c'), SGIFONT('o'), SGIFONT('n'),
    SGIFONT(' '),
    SGIFONT('G'), SGIFONT('r'), SGIFONT('a'), SGIFONT('p'), SGIFONT('h'), SGIFONT('i'), SGIFONT('c'), SGIFONT('s'),
    SGIFONT(' '),
    SGIFONT('C'), SGIFONT('o'), SGIFONT('m'), SGIFONT('p'), SGIFONT('u'), SGIFONT('t'), SGIFONT('e'), SGIFONT('r'),
    SGIFONT(' '),
    SGIFONT('S'), SGIFONT('y'), SGIFONT('s'), SGIFONT('t'), SGIFONT('e'), SGIFONT('m'), SGIFONT('s')
};
static const u8 SiliconGraphicslnc[] = {
    SGIFONT('S'), SGIFONT('i'), SGIFONT('l'), SGIFONT('i'), SGIFONT('c'), SGIFONT('o'), SGIFONT('n'),
    SGIFONT(' '),
    SGIFONT('G'), SGIFONT('r'), SGIFONT('a'), SGIFONT('p'), SGIFONT('h'), SGIFONT('i'), SGIFONT('c'), SGIFONT('s'),
    SGIFONT(' '), SGIFONT(','), SGIFONT(' '),
    SGIFONT('I'), SGIFONT('n'), SGIFONT('c'), SGIFONT('.')
};


#define DRAW_MAX_WIDTH  2048
#define DRAW_MAX_HEIGHT 2048
#define DRAW_MAX_PIXELS (DRAW_MAX_WIDTH * DRAW_MAX_HEIGHT)


/*
 * draw
 */
typedef struct {
    unsigned short width, height;
    unsigned short x, y;
    size_t num_pixels;
    size_t size;
    unsigned char color_index;
    bgr_t colors[256];
    struct {
        bgr_t *line_first;
        bgr_t *line_last;
        bgr_t *last;
        bgr_t *pixel;
    } box;
    bgr_t image[DRAW_MAX_PIXELS];
} draw_t;
static draw_t draw;


/*
 * draw_init
 *   Initialize the draw state with a (width, height) size.
 */
static s32 draw_init(const u16 width, const u16 height)
{
    const size_t num_pixels = (size_t)width * (size_t)height;

    if (width < 1 || height < 1 || num_pixels > DRAW_MAX_PIXELS) {
        return -1;
    }

    memset(&draw, 0, sizeof(draw));
    draw.width = width;
    draw.height = height;
    draw.num_pixels = num_pixels;
    draw.size = num_pixels * sizeof(bgr_t);

    return 0;
}

/*
 * draw_box_start
 *   Draws are all based around rectangular (box) regions
 *   of the image given a (x,y) starting position and
 *   (width,height).
 */
static inline void draw_box_start(u16 x, u16 y, u16 w, u16 h)
{
    draw.box.line_first = &draw.image[((u32)y * (u32)draw.width) + (u32)x];
    draw.box.line_last = &draw.box.line_first[w - 1];
    draw.box.last = &draw.box.line_last[((u32)h - 1) * (u32)draw.width];
    draw.box.pixel = draw.box.line_first;
}

#define DRAW_BOX_DONE 0
#define DRAW_BOX_NEXT_PIXEL 1
#define DRAW_BOX_NEXT_LINE 2

/*
 * draw_box_step
 *   Increment within the box by "step" pixels.
 *   Returns
 *     DRAW_BOX_DONE(0) when finally stepping
 *       beyond the box region.
 *     DRAW_BOX_NEXT_PIXEL(1) when still on
 *       the same line.
 *     DRAW_BOX_NEXT_LINE(2) when going to
 *       the next line within the box.
 */
static inline u8 draw_box_step(size_t step)
{
    draw.box.pixel += step;
    if (draw.box.pixel > draw.box.line_last) {
        if (draw.box.pixel > draw.box.last) {
            return DRAW_BOX_DONE;
        }
        draw.box.line_first += draw.width;
        draw.box.line_last += draw.width;
        draw.box.pixel = draw.box.line_first;
        return DRAW_BOX_NEXT_LINE;
    }
    return DRAW_BOX_NEXT_PIXEL;
}


/*
 * draw_mapcolor
 *   The textport for all SGI systems uses indexed color
 *   for drawing.
 */
static inline void draw_mapcolor(u8 index, u8 r, u8 g, u8 b)
{
    bgr_t *color = &draw.colors[index];
    color->b = b;
    color->g = g;
    color->r = r;
}


/*
 * draw_setcolor
 *   Sets the active color for textport drawing.
 */
static inline void draw_setcolor(u8 index)
{
    draw.color_index = index;
}


/*
 * draw_cmov2i
 *   Sets the (x,y) starting position when
 *   drawing bitmaps.
 */
static inline void draw_cmov2i(u16 x, u16 y)
{
    draw.x = x;
    draw.y = y;
}


/*
 * draw_point
 *    Draw a single pixel at (x,y) with the active color.
 */
static inline void draw_point(u16 x, u16 y)
{
    draw.image[((u32)y * (u32)draw.width) + (u32)x] = draw.colors[draw.color_index];
}


/*
 * draw_sboxfi
 *   Draw a filled box at (x,y) of size (w,h) with
 *   the active color.
 */
static void draw_sboxfi(u16 x, u16 y, u16 w, u16 h)
{
    const bgr_t color = draw.colors[draw.color_index];
    draw_box_start(x, y, w, h);
    do {
        *draw.box.pixel = color;
    } while (draw_box_step(1) != DRAW_BOX_DONE);
}


/*
 * draw_sboxi
 *   Draw a hollow box at (x,y) of size (w,h) with
 *   the active color.
 */
static void draw_sboxi(u16 x, u16 y, u16 w, u16 h)
{
    const bgr_t color = draw.colors[draw.color_index];
    draw_box_start(x, y, w, h);

    /* Draw the bottom line. */
    do {
        *draw.box.pixel = color;
    } while (draw_box_step(1) == DRAW_BOX_NEXT_PIXEL);

    /* Draw the two side lines. */
    while (--h > 1) {
        *draw.box.line_first = *draw.box.line_last = color;
        draw.box.line_first += draw.width;
        draw.box.line_last += draw.width;
    }
    draw.box.pixel = draw.box.line_first;

    /* Draw the top line. */
    do {
        *draw.box.pixel = color;
    } while (draw_box_step(1) != DRAW_BOX_DONE);
}

/*
 * draw_bitmap
 *   Draw a bitmap image of (xsize,ysize)
 *   at the during (draw.x,draw.y) position
 *   and move the position by (xmove,ymove)
 *   afterwards.  Used for drawing
 *   bitmap characters.
 */
static void draw_bitmap(const u16 *base,
    short xsize, short ysize,
    short xorig, short yorig,
    short xmove, short ymove)
{
    const u16 x = draw.x, y = draw.y;
    draw.x += xmove;
    draw.y -= ymove;

    if (xsize <= 0 || ysize <= 0) {
        return;
    }

    const bgr_t color = draw.colors[draw.color_index];
    draw_box_start(x + xorig, y + yorig, xsize, ysize);
    do {
        BSR_LOOP(*base++, bit, bit_mask, bits) {
            draw.box.pixel[15 - bit] = color;
        }
    } while (draw_box_step(16) != DRAW_BOX_DONE);
}


/*
 * draw_spans
 *   Draw an image defined in run lengths (spans) of
 *   "skip", "draw", "skip", "draw", etc. at (x,y) of
 *   size (w,h) using the active color.
 */
static void draw_spans(const u8 *spans, u16 x, u16 y, u16 w, u16 h)
{
    const bgr_t color = draw.colors[draw.color_index];
    u8 d = 0;
    draw_box_start(x, y, w, h);
    while (1) {
        u8 length = *spans++;
        if (d) {
            for (u8 i = 0; i < length; ++i) {
                draw.box.pixel[i] = color;
            }
        }
        switch (draw_box_step(length)) {
        default:
        case DRAW_BOX_DONE:
            return;
        case DRAW_BOX_NEXT_PIXEL:
            d ^= 1;
            break;
        case DRAW_BOX_NEXT_LINE:
            d = 0;
            break;
        }
    }
}


/*
 * unorm2float
 *   Make a float of range [0.0f,1.0f] from an
 *   unsigned integer of range [0,255].
 */
inline static float unorm2float(u8 x)
{
    return x / 255.0f;
}


/*
 * float2unorm
 *   Make an unsigned integer of range [0,255] from
 *   a float of [0.0f,1.0f+].
 */
inline static u8 float2unorm(float x)
{
    if (x > 1.0f) {
        x = 1.0f;
    }
    return (u8)(255.0f * x);
}


/*
 * draw_gammacorrection
 *   Perform a trivial "gamma correction" operation on the
 *   entire image.
 */
static void draw_gammacorrection(float gamma)
{
    gamma = 1.0f / gamma;
    draw_box_start(0, 0, draw.width, draw.height);
    do {
        draw.box.pixel->b = float2unorm(powf(unorm2float(draw.box.pixel->b), gamma));
        draw.box.pixel->g = float2unorm(powf(unorm2float(draw.box.pixel->g), gamma));
        draw.box.pixel->r = float2unorm(powf(unorm2float(draw.box.pixel->r), gamma));
    } while (draw_box_step(1) != DRAW_BOX_DONE);
}


/*
 * draw_background
 *   Draw a gradient at position (x,y) of size(w,h)
 *   using the background gradient region of the
 *   color map.  Draws the background for newer
 *   systems.
 */
static void draw_background(u16 x, u16 y, u16 w, u16 h)
{
    const u32 step = ((BGND_IDX + 64) << 16) / (h - 1);
    u32 color_index = (BGND_IDX << 16) + (y * step);
    bgr_t color = draw.colors[color_index >> 16];
    draw_box_start(x, y, w, h);
    while (1) {
        *draw.box.pixel = color;
        switch (draw_box_step(1)) {
        default:
        case DRAW_BOX_DONE:
            return;
        case DRAW_BOX_NEXT_PIXEL:
            break;
        case DRAW_BOX_NEXT_LINE:
            color_index += step;
            color = draw.colors[color_index >> 16];
            break;
        }
    }
}


/*
 * draw_character
 *   Draws a bitmap character using "font" with info
 *   at index "c" within the font.
 */
static void draw_character(const font_t * const font, const u8 c)
{
    const fontchar_t * const fontchar = &font->info[c];
    draw_bitmap(&font->data[fontchar->offset],
        fontchar->w, fontchar->h,
        fontchar->xoff, fontchar->yoff,
        fontchar->width, 0);
}


/*
 * draw_string
 *   Draws an ASCII string "str" using the bitmap "font".
 */
static void draw_string(const u8 *str, const font_t *font)
{
    for (u8 c; c = *str; ++str) {
        const font_t *f = font;
        if (c >= 0x20) {
            c -= ((c >= 0x80) ? 0x42 : 0x20);
        }
        else if (c < 7) {
            f = &UnkFont;
        }
        else {
            continue;
        }
        draw_character(f, c);
    }
}


/*
 * draw_logo_SiliconGraphicsComputerSystems
 *   Draws the "Silicon Graphics Computer Systems" logo for
 *   older SGI systems.
 */
static void draw_logo_SiliconGraphicsComputerSystems(u16 x, u16 y)
{
    const u8 *sgcslogo_ptr = sgcslogo;
    u8 length;
    draw_box_start(x, y, 372, 93);
    do {
        length = *sgcslogo_ptr++;
        bgr_t color = draw.colors[LOGO_START | (length & 0xf)];
        length = (length >> 4) + 1;
        for (u8 i = 0; i < length; ++i) {
            draw.box.pixel[i] = color;
        }
    } while (draw_box_step(length) != DRAW_BOX_DONE);
}


/*
 * draw_bootscreen_VGX
 */
static void draw_bootscreen_VGX(void)
{
    /* Initialize the color map. */
    draw_mapcolor(   BLACK,     BLACK_R,     BLACK_G,     BLACK_B);
    draw_mapcolor(     RED,       RED_R,       RED_G,       RED_B);
    draw_mapcolor(   GREEN,     GREEN_R,     GREEN_G,     GREEN_B);
    draw_mapcolor(  YELLOW,    YELLOW_R,    YELLOW_G,    YELLOW_B);
    draw_mapcolor(    BLUE,      BLUE_R,      BLUE_G,      BLUE_B);
    draw_mapcolor( MAGENTA,   MAGENTA_R,   MAGENTA_G,   MAGENTA_B);
    draw_mapcolor(    CYAN,      CYAN_R,      CYAN_G,      CYAN_B);
    draw_mapcolor(   WHITE, WHITE_VGX_R, WHITE_VGX_G, WHITE_VGX_B);
    draw_mapcolor( SCR_IDX,   SCR_VGX_R,   SCR_VGX_G,   SCR_VGX_B);
    draw_mapcolor(  TP_IDX,    TP_VGX_R,    TP_VGX_G,    TP_VGX_B);

    /* Initialize the logo gradient in the color map. */
    u8 index = LOGO_START;
    u32 r = LOGO_START_VGX_R << 16, g = LOGO_START_VGX_G << 16, b = LOGO_START_VGX_B << 16;
    while (1) {
        draw_mapcolor(index++, r >> 16, g >> 16, b >> 16);
        if (index < LOGO_END) {
            r -= LOGO_STEP_VGX_R;
            g += LOGO_STEP_VGX_G;
            b -= LOGO_STEP_VGX_B;
        }
        else if (index == LOGO_END) {
            r = LOGO_END_VGX_R << 16;
            g = LOGO_END_VGX_G << 16;
            b = LOGO_END_VGX_B << 16;
        }
        else {
            break;
        }
    }

    /* Draw the background by clearing to the screen color. */
    draw_setcolor(SCR_IDX);
    draw_sboxfi(0, 0, draw.width, draw.height);

    /* Position the textport region in the middle of the screen. */
    const u16 numcols = 80;
    const u16 numrows = 40;
    const u16 fontWidth = 9;
    const u16 fontHeight = 16;
    const u16 tp_width = (numcols * fontWidth);
    const u16 tp_height = (numrows * fontHeight);
    const u16 llx = (draw.width  - tp_width  - 4) / 2;
    const u16 lly = (draw.height - tp_height - 4) / 2;

    /* Draw the textport border. */
    draw_setcolor(WHITE);
    draw_sboxi(llx, lly, tp_width  + 4, tp_height + 4);

    /* Draw the interior textport region. */
    draw_setcolor(TP_IDX);
    draw_sboxfi(llx + 1, lly + 1, tp_width  + 2, tp_height + 2);

    /* Draw the Silicon Graphics Computer Systems logo. */
    draw_logo_SiliconGraphicsComputerSystems(20, draw.height - 103);
}

/*
 * draw_bootscreen_MG1
 */
static void draw_bootscreen_MG1(void)
{
    /* Initialize the color map. */
    draw_mapcolor(   BLACK,     BLACK_R,     BLACK_G,     BLACK_B);
    draw_mapcolor(     RED,       RED_R,       RED_G,       RED_B);
    draw_mapcolor(   GREEN,     GREEN_R,     GREEN_G,     GREEN_B);
    draw_mapcolor(  YELLOW,    YELLOW_R,    YELLOW_G,    YELLOW_B);
    draw_mapcolor(    BLUE,      BLUE_R,      BLUE_G,      BLUE_B);
    draw_mapcolor( MAGENTA,   MAGENTA_R,   MAGENTA_G,   MAGENTA_B);
    draw_mapcolor(    CYAN,      CYAN_R,      CYAN_G,      CYAN_B);
    draw_mapcolor(   WHITE, WHITE_MG1_R, WHITE_MG1_G, WHITE_MG1_B);
    draw_mapcolor( SCR_IDX,   SCR_MG1_R,   SCR_MG1_G,   SCR_MG1_B);
    draw_mapcolor(  TP_IDX,    TP_MG1_R,    TP_MG1_G,    TP_MG1_B);
    draw_mapcolor( PNL_IDX,   PNL_MG1_R,   PNL_MG1_G,   PNL_MG1_B);
    draw_mapcolor( LOG_IDX,   LOG_MG1_R,   LOG_MG1_G,   LOG_MG1_B);

    /* Initialize the logo gradient in the color map. */
    u8 index = LOGO_START;
    u32 r = LOGO_START_MG1_R << 16, g = LOGO_START_MG1_G << 16, b = LOGO_START_MG1_B << 16;
    while (1) {
        draw_mapcolor(index++, r >> 16, g >> 16, b >> 16);
        if (index < LOGO_END) {
            r += LOGO_STEP_MG1_R;
            g += LOGO_STEP_MG1_G;
            b -= LOGO_STEP_MG1_B;
        }
        else if (index == LOGO_END) {
            r = LOGO_END_MG1_R << 16;
            g = LOGO_END_MG1_G << 16;
            b = LOGO_END_MG1_B << 16;
        }
        else {
            break;
        }
    }

    /* Draw the background by clearing to the screen color. */
    draw_setcolor(SCR_IDX);
    draw_sboxfi(0, 0, draw.width, draw.height);

    /* Draw the Silicon Graphics Computer Systems logo. */
    u16 sgcs_x, sgcs_y;
    if (draw.width == 1024) {
        sgcs_x = 37;
        sgcs_y = draw.height - 95;
    }
    else {
        sgcs_x = 20;
        sgcs_y = draw.height - 103;
    }
    draw_logo_SiliconGraphicsComputerSystems(sgcs_x, sgcs_y);

    /* Position the textport region in the middle of the screen. */
    const u16 numcols = 80;
    const u16 numrows = (draw.width == 1024) ? 24 : 40;
    const u16 fontWidth = 9;
    const u16 fontHeight = 16;
    const u16 tp_width = (numcols * fontWidth);
    const u16 tp_height = (numrows * fontHeight);
    const u16 llx = (draw.width - tp_width - 4) / 2;
    const u16 lly = (draw.height - tp_height - 4) / 2;

    /* Draw the textport border. */
    draw_setcolor(WHITE);
    draw_sboxi(llx - 2, lly - 2, tp_width + 4, tp_height + 4);

    /* Draw the textport inner border. */
    draw_setcolor(LOGO_START);
    draw_sboxi(llx - 1, lly - 1, tp_width + 2, tp_height + 2);

    /* Draw the interior textport region. */
    draw_setcolor(TP_IDX);
    draw_sboxfi(llx, lly, tp_width, tp_height);
}


/*
 * re_decomp
 *   The Reality Engine logo in the GE8prom.u image
 *   in the IRIX 6.2 installation media is "compressed"
 *   in a simple run-length encoding per component.
 *   This state tracking data type and function return
 *   the appropriate component value.
 */
typedef struct {
    const u8 *ptr;
    char length;
    u8 value;
} re_decomp_t;
static u8 re_decomp(re_decomp_t *dc)
{
    if (dc->length > 0) {
        --dc->length;
        dc->value = *dc->ptr++;
    }
    else if (dc->length < 0) {
        ++dc->length;
    }
    else {
        dc->length = *((char *)dc->ptr++);
        if (dc->length < 0) {
            ++dc->length;
        }
        dc->value = *dc->ptr++;
    }
    return dc->value;
}


/*
 * draw_logo_RealityEngine
 *   Draws the Reality Engine logo in the GE8prom.u image
 *   in the IRIX 6.2 installation media at position (x,y).
 */
static void draw_logo_RealityEngine(const u16 x, const u16 y)
{
    re_decomp_t r = { realityenginelogo_red, 0, 0 };
    re_decomp_t g = { realityenginelogo_green, 0, 0 };
    re_decomp_t b = { realityenginelogo_blue, 0, 0 };
    draw_box_start(x, y, 640, 212);
    do {
        draw.box.pixel->b = re_decomp(&b);
        draw.box.pixel->g = re_decomp(&g);
        draw.box.pixel->r = re_decomp(&r);
    } while (draw_box_step(1) != DRAW_BOX_DONE);
}


/*
 * draw_bootscreen_RealityEngine
 */
static void draw_bootscreen_RealityEngine(void)
{
    /* Initialize the color map. */
    draw_mapcolor(   BLACK,     BLACK_R,     BLACK_G,     BLACK_B);
    draw_mapcolor(     RED,       RED_R,       RED_G,       RED_B);
    draw_mapcolor(   GREEN,     GREEN_R,     GREEN_G,     GREEN_B);
    draw_mapcolor(  YELLOW,    YELLOW_R,    YELLOW_G,    YELLOW_B);
    draw_mapcolor(    BLUE,      BLUE_R,      BLUE_G,      BLUE_B);
    draw_mapcolor( MAGENTA,   MAGENTA_R,   MAGENTA_G,   MAGENTA_B);
    draw_mapcolor(    CYAN,      CYAN_R,      CYAN_G,      CYAN_B);
    draw_mapcolor(   WHITE,  WHITE_RE_R,  WHITE_RE_G,  WHITE_RE_B);
    draw_mapcolor( SCR_IDX,    SCR_RE_R,    SCR_RE_G,    SCR_RE_B);
    draw_mapcolor(  TP_IDX,     TP_RE_R,     TP_RE_G,     TP_RE_B);
    draw_mapcolor( PNL_IDX,    PNL_RE_R,    PNL_RE_G,    PNL_RE_B);
    draw_mapcolor( LOG_IDX,    LOG_RE_R,    LOG_RE_G,    LOG_RE_B);
    draw_mapcolor(  IDX_12, IDX_12_RE_R, IDX_12_RE_G, IDX_12_RE_B);

    /* Initialize the logo gradient in the color map. */
    u8 index = LOGO_START;
    u32 r = LOGO_START_RE_R << 16, g = LOGO_START_RE_G << 16, b = LOGO_START_RE_B << 16;
    while (1) {
        draw_mapcolor(index++, r >> 16, g >> 16, b >> 16);
        if (index < LOGO_END) {
            r -= LOGO_STEP_RE_R;
            g -= LOGO_STEP_RE_G;
            b -= LOGO_STEP_RE_B;
        }
        else if (index == LOGO_END) {
            r = LOGO_END_RE_R << 16;
            g = LOGO_END_RE_G << 16;
            b = LOGO_END_RE_B << 16;
        }
        else {
            break;
        }
    }

    /* Draw the background by clearing to the screen color. */
    draw_setcolor(SCR_IDX);
    draw_sboxfi(0, 0, draw.width, draw.height);

    /* Draw the Silicon Graphics Computer Systems logo. */
    draw_logo_SiliconGraphicsComputerSystems(20, draw.height - 103);

    /* Draw the Reality Engine logo. */
    draw_logo_RealityEngine(draw.width - 640, 0);

    /* Position the textport region in the middle of the screen. */
    const u16 numcols = 80;
    const u16 numrows = 40;
    const u16 fontWidth = 9;
    const u16 fontHeight = 16;
    const u16 tp_width = (numcols * fontWidth);
    const u16 tp_height = (numrows * fontHeight);
    const u16 llx = (draw.width  - tp_width - 4) / 2;
    const u16 lly = ((draw.height - tp_height - 4) / 2) + (draw.height >> 5);

    /* Draw the textport border. */
    draw_setcolor(WHITE);
    draw_sboxi(llx - 2, lly - 2, tp_width + 4, tp_height + 4);
    draw_sboxi(llx - 1, lly - 1, tp_width + 2, tp_height + 2);

    /* Draw the textport inner border. */
    draw_setcolor(LOGO_START);
    draw_sboxi(llx - 1, lly - 2, tp_width + 3, tp_height + 3);

    /* Draw the interior textport region. */
    draw_setcolor(TP_IDX);
    draw_sboxfi(llx, lly, tp_width, tp_height);

    /* I suspect the default gamma for the VOF loaded onto
       the DG2 at boot has a very high gamma (which was
       typical on the older systems), because without
       gamma correction the image is way too dark. */
    draw_gammacorrection(2.41f);
}


/*
 * draw_SgiFont_string
 *   Draw a string of characters from indices within the "SgiFont".
 */
static void draw_SgiFont_string(const u8 *str, const u8 * const end)
{
    do {
        draw_character(&SgiFont, *str);
    } while (++str < end);
}


/*
 * draw_bootscreen_new
 */
static void draw_bootscreen_new(const bootscreen_new_t * const bs)
{
    /* Initialize the color map. */
    draw_mapcolor(   BLACK,     BLACK_R,     BLACK_G,     BLACK_B);
    draw_mapcolor(     RED,       RED_R,       RED_G,       RED_B);
    draw_mapcolor(   GREEN,     GREEN_R,     GREEN_G,     GREEN_B);
    draw_mapcolor(  YELLOW,    YELLOW_R,    YELLOW_G,    YELLOW_B);
    draw_mapcolor(    BLUE,      BLUE_R,      BLUE_G,      BLUE_B);
    draw_mapcolor( MAGENTA,   MAGENTA_R,   MAGENTA_G,   MAGENTA_B);
    draw_mapcolor(    CYAN,      CYAN_R,      CYAN_G,      CYAN_B);
    draw_mapcolor(   WHITE, WHITE_NEW_R, WHITE_NEW_G, WHITE_NEW_B);
    draw_mapcolor( SCR_IDX,   SCR_NEW_R,   SCR_NEW_G,   SCR_NEW_B);
    draw_mapcolor(  TP_IDX,    TP_NEW_R,    TP_NEW_G,    TP_NEW_B);
    draw_mapcolor( PNL_IDX,   PNL_NEW_R,   PNL_NEW_G,   PNL_NEW_B);
    u8 sgstr_b;
    switch (bs->base.info & BOOTSCREEN_SGSTR_COLOR) {
    default:
    case  BOOTSCREEN_SGSTR_COLOR_YELLOW:
        sgstr_b = SGSTR_B_YELLOW;
        break;
    case BOOTSCREEN_SGSTR_COLOR_WHITE:
        sgstr_b = SGSTR_B_WHITE;
        break;
    }
    draw_mapcolor(   SGSTR_IDX,    SGSTR_R,    SGSTR_G,    sgstr_b);
    draw_mapcolor(BOOTLOGO_IDX, BOOTLOGO_R, BOOTLOGO_G, BOOTLOGO_B);
    draw_mapcolor(  SHADOW_IDX,   SHADOW_R,   SHADOW_G,   SHADOW_B);

    /* Not used in drawing the bootscreen, but nevertheless part of
       textport initialization. Leaving them in just because... */
    draw_mapcolor(20,  85,  85, 213);
    draw_mapcolor(21, 128, 128, 255);
    draw_mapcolor(22,  85, 213, 213);
    draw_mapcolor(23, 128, 255, 255);
    draw_mapcolor(24,  85, 213,  85);
    draw_mapcolor(25, 128, 255, 128);
    draw_mapcolor(26, 213,  85, 213);
    draw_mapcolor(27, 255, 128, 255);
    draw_mapcolor(28, 213,  85,  85);
    draw_mapcolor(29, 255, 128, 128);
    draw_mapcolor(30, 194, 142, 142);
    draw_mapcolor(31, 142,  99,  99);
    draw_mapcolor(32, 113, 113, 198);
    draw_mapcolor(35,  42,  42,  42); /* DARKER GRAY   */
    draw_mapcolor(36,  85,  85,  85); /* DARK GRAY     */
    draw_mapcolor(37, 128, 128, 128); /* GRAY          */
    draw_mapcolor(38, 170, 170, 170); /* LIGHT GRAY    */
    draw_mapcolor(39, 213, 213, 213); /* LIGHTER GRAY  */
    draw_mapcolor(51,  85,  85,  85); /* DARK GRAY     */
    draw_mapcolor(52, 198, 113, 113); /* LIGHT RED     */
    draw_mapcolor(53, 113, 198, 113); /* LIGHT GREEN   */
    draw_mapcolor(54, 142, 142,  56); /* DARK YELLOW   */
    draw_mapcolor(55, 113, 113, 198); /* LIGHT BLUE    */
    draw_mapcolor(56, 142,  56, 142); /* LIGHT MAGENTA */
    draw_mapcolor(57,  56, 142,  56); /* DARK CYAN     */
    draw_mapcolor(58, 170, 170, 170); /* LIGHT GRAY    */

    /* Initialize the background gradient in the color map. */
    u8 i = BGND_IDX;
    u32 r = (BGND_R << 16), g = (BGND_G << 16), b = (BGND_B << 16);
    while (1) {
        draw_mapcolor(i, r >> 16, g >> 16, b >> 16);
        if (i == BGND_MAX_IDX) {
            break;
        }
        ++i;
        r += BGND_R_STEP;
        g += BGND_G_STEP;
        b += BGND_B_STEP;
    }

    /* Position the logo, its shadow, the "WELCOME TO" string, and
       the "SGI" string within the image. */
    s16 logo_x, logo_y, logo_shadow_x, logo_shadow_y,
        welcometo_x, welcometo_y, sgstr_x, sgstr_y;
    if (bs->logo_width <= 600) {
        if (draw.width <= 1050) {
            logo_x = 445;
            welcometo_x = 65;
        }
        else {
            logo_x = 530;
            welcometo_x = 150;
        }
        logo_y = 0;
        logo_shadow_x = 0;
        logo_shadow_y = 0;
        welcometo_y = 200;
        sgstr_x = 640;
        sgstr_y = 0;
    }
    else {
        logo_x = diffdiv2(draw.width, bs->logo_width) + 50;
        logo_y = diffdiv2(256, bs->logo_height);
        switch (bs->base.info & BOOTSCREEN_LOGO_SHADOW_OFFSET) {
        default:
        case BOOTSCREEN_LOGO_SHADOW_OFFSET_0_0:
            logo_shadow_x = 0;
            logo_shadow_y = 0;
            break;
        case BOOTSCREEN_LOGO_SHADOW_OFFSET_N7_11:
            logo_shadow_x = -7;
            logo_shadow_y = 11;
            break;
        case BOOTSCREEN_LOGO_SHADOW_OFFSET_N10_14:
            logo_shadow_x = -10;
            logo_shadow_y = 14;
            break;
        }
        welcometo_x = 150;
        welcometo_y = logo_y + bs->logo_height + 100;
        switch (bs->base.info & BOOTSCREEN_SGSTR) {
        default:
        case BOOTSCREEN_SGSTR_SGCS:
            sgstr_x = 580;
            break;
        case BOOTSCREEN_SGSTR_SGI:
            sgstr_x = 800;
            break;
        }
        sgstr_y = logo_y - 20;
    }

    /* Draw a screen covering gradient for the background. */
    draw_background(0, 0, draw.width, draw.height);

    /* Draw the logo shadow at a slight offset. */
    draw_setcolor(SHADOW_IDX);
    draw_spans(bs->shadow,
        logo_x + logo_shadow_x + 10,
        logo_y + logo_shadow_y + 66,
        bs->logo_width,
        bs->logo_height);

    /* Draw the appropriate Silicon Graphics string in the bottom right corner. */
    draw_cmov2i(sgstr_x + welcometo_x, sgstr_y + 50);
    draw_setcolor(SGSTR_IDX);
    switch (bs->base.info & BOOTSCREEN_SGSTR) {
    default:
    case BOOTSCREEN_SGSTR_SGCS:
        draw_SgiFont_string(
            SiliconGraphicsComputerSystems,
            &SiliconGraphicsComputerSystems[sizeof(SiliconGraphicsComputerSystems)]);
        break;
    case BOOTSCREEN_SGSTR_SGI:
        draw_SgiFont_string(
            SiliconGraphicslnc,
            &SiliconGraphicslnc[sizeof(SiliconGraphicslnc)]);
        break;
    }

    /* Draw the logo. */
    draw_setcolor(BOOTLOGO_IDX);
    draw_spans(bs->logo,
        logo_x,
        logo_y + 80,
        bs->logo_width,
        bs->logo_height);

    /* Draw the "WELCOME TO" string shadow at a slight offset. */
    draw_cmov2i(welcometo_x + 5, welcometo_y - 5);
    draw_setcolor(SHADOW_IDX);
    draw_string(WELCOME_TO, &ncenB18);

    /* Draw the "WELCOME TO" string. */
    draw_cmov2i(welcometo_x, welcometo_y);
    draw_setcolor(BOOTLOGO_IDX);
    draw_string(WELCOME_TO, &ncenB18);
}


/*
 * draw_write_bmp_header
 */
inline static void draw_write_bmp_header(FILE *fp)
{
    const bmp_header_t bmp_header = {
        {   (((u16)'B') | (((u16)'M') << 8)),
            (unsigned int)(sizeof(bmp_header_t) + draw.size),
            0,
            0,
            sizeof(bmp_header_t)
        },
        {   (unsigned int)sizeof(bmp_info_header_t),
            draw.width,
            draw.height,
            1,
            24,
            0,
            (unsigned int)draw.size,
            2835,
            2835,
            0,
            0
        }
    };
    fwrite(&bmp_header, 1, sizeof(bmp_header), fp);
}


/*
 * draw_write_bmp_file
 */
static s32 draw_write_bmp_file(const char *filename)
{
    FILE *fp = fopen(filename, "wb");
    if (!fp) {
        return -1;
    }
    draw_write_bmp_header(fp);
    fwrite(draw.image, 1, draw.size, fp);
    fflush(fp);
    fclose(fp);
    return 0;
}


/*
 * draw_bootscreen
 */
void draw_bootscreen(bootscreen_e bootscreen, const char *filename)
{
    const bootscreen_t * const bs = bootscreens[bootscreen];

    draw_init(bs->width, bs->height);

    switch (bs->info & BOOTSCREEN_TYPE) {
    case BOOTSCREEN_TYPE_VGX:
        draw_bootscreen_VGX();
        break;
    case BOOTSCREEN_TYPE_MG1:
        draw_bootscreen_MG1();
        break;
    case BOOTSCREEN_TYPE_RE:
        draw_bootscreen_RealityEngine();
        break;
    case BOOTSCREEN_TYPE_NEW:
#if 0
        const u8 *ptr = bs->logo;
        FILE *fp = fopen(filename, "w");
        for (s32 y = 0; y < bs->logo_height; ++y) {
            s32 x = 0, idx = 0;
            while (1) {
                x += ptr[idx++];
                if (x >= bs->logo_width) {
                    break;
                }
            }
            fprintf(fp, "    /* %3d - %2d */", y, idx);
            x = 0;
            while (1) {
                fprintf(fp, " 0x%02x,", ptr[x++]);
                if (x >= idx) {
                    break;
                }
            }
            fprintf(fp, "\n");
            ptr += idx;
        }
        fprintf(fp, "printed(%u) expected(%u)\n", (ptr - bs->logo), bs->logo_length);
        fflush(fp);
        fclose(fp);
#else
        draw_bootscreen_new((const bootscreen_new_t *)bs);
#endif
        break;
    default:
        return;
    }

    /* Write out the image to a file. */
    draw_write_bmp_file(filename);
}
