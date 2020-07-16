#ifndef __BOOTSCREEN_H__
#define __BOOTSCREEN_H__

typedef enum {
    VGX,
    MG1_ENTRY,
    MG1_EXPRESS,
    REALITY_ENGINE,
    REALITY_ENGINE_NEW,
    INDIGO,
    INDIGO2,
    INDY,
    POWERINDIGO2,
    INDIGO2R10K,
    OCTANE,
    O2,
    FUEL,
    INFINITE_PERFORMANCE,
    INFINITE_REALITY,
    TEZRO,
    ULTIMATE_VISION,
    NUM_BOOTSCREENS
} bootscreen_e;

extern void draw_bootscreen(bootscreen_e bootscreen, const char *filename);

#endif /* __BOOTSCREEN_H__ */
