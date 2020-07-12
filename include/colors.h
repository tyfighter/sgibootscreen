#ifndef __COLORS_H__
#define __COLORS_H__

#define BLACK     0
#define BLACK_R   0
#define BLACK_G   0
#define BLACK_B   0

#define RED       1
#define RED_R     255
#define RED_G     0
#define RED_B     0

#define GREEN     2
#define GREEN_R   0
#define GREEN_G   255
#define GREEN_B   0

#define YELLOW    3
#define YELLOW_R  255
#define YELLOW_G  255
#define YELLOW_B  0

#define BLUE      4
#define BLUE_R    0
#define BLUE_G    0
#define BLUE_B    255

#define MAGENTA   5
#define MAGENTA_R 255
#define MAGENTA_G 0
#define MAGENTA_B 255

#define CYAN          6
#define CYAN_R        0
#define CYAN_G        255
#define CYAN_B        255

#define WHITE         7
#define WHITE_VGX_R   255
#define WHITE_VGX_G   255
#define WHITE_VGX_B   255
#define WHITE_MG1_R   255
#define WHITE_MG1_G   255
#define WHITE_MG1_B   255
#define WHITE_RE_R    255
#define WHITE_RE_G    255
#define WHITE_RE_B    255
#define WHITE_NEW_R   240
#define WHITE_NEW_G   240
#define WHITE_NEW_B   240

/* Screen */
#define SCR_IDX            8
#define SCR_VGX_R          98
#define SCR_VGX_G          87
#define SCR_VGX_B          176
#define SCR_MG1_R          127
#define SCR_MG1_G          158
#define SCR_MG1_B          191
#define SCR_RE_R           64 // The bane of my existence
#define SCR_RE_G           0  // ...
#define SCR_RE_B           64 // ...
#define SCR_NEW_R          127
#define SCR_NEW_G          158
#define SCR_NEW_B          191

/* Textport */
#define TP_IDX             9
#define TP_VGX_R           0
#define TP_VGX_G           0
#define TP_VGX_B           0
#define TP_MG1_R           96
#define TP_MG1_G           96
#define TP_MG1_B           112
#define TP_RE_R            0
#define TP_RE_G            0
#define TP_RE_B            0
#define TP_NEW_R           96
#define TP_NEW_G           96
#define TP_NEW_B           112

/* Boot panel */
#define PNL_IDX            10
/* Doesn't exist on VGX */
#define PNL_MG1_R          96
#define PNL_MG1_G          96
#define PNL_MG1_B          112
#define PNL_RE_R           0
#define PNL_RE_G           0
#define PNL_RE_B           0
#define PNL_NEW_R          96
#define PNL_NEW_G          96
#define PNL_NEW_B          112

/* Log */
#define LOG_IDX            11
/* Doesn't exist on VGX */
#define LOG_MG1_R          96
#define LOG_MG1_G          96
#define LOG_MG1_B          112
#define LOG_RE_R           0
#define LOG_RE_G           0
#define LOG_RE_B           0

/* ??? (index 12) */
#define IDX_12             12
#define IDX_12_RE_R        200
#define IDX_12_RE_G        200
#define IDX_12_RE_B        200

/* Logo gradient start */
#define LOGO_START         16
#define LOGO_START_VGX_R   255
#define LOGO_START_VGX_G   0
#define LOGO_START_VGX_B   200
#define LOGO_START_MG1_R   64
#define LOGO_START_MG1_G   64
#define LOGO_START_MG1_B   192
#define LOGO_START_RE_R    96
#define LOGO_START_RE_G    96
#define LOGO_START_RE_B    112
#define LOGO_START_NEW_R   64
#define LOGO_START_NEW_G   64
#define LOGO_START_NEW_B   192

/* Logo gradient step */
#define LOGO_STEP_VGX_R    0xA7777 /* (255 -  98)/15 */
#define LOGO_STEP_VGX_G    0x5CCCC /* (  0 -  87)/15 */
#define LOGO_STEP_VGX_B    0x19999 /* (200 - 176)/15 */
#define LOGO_STEP_MG1_R    0x43333 /* ( 64 - 127)/15 */
#define LOGO_STEP_MG1_G    0x64444 /* ( 64 - 158)/15 */
#define LOGO_STEP_MG1_B    0x01111 /* (192 - 191)/15 */
#define LOGO_STEP_RE_R     0x22222 /* ( 96 -  64)/15 */
#define LOGO_STEP_RE_G     0x66666 /* ( 96 -   0)/15 */
#define LOGO_STEP_RE_B     0x33333 /* (112 -  64)/15 */

/* Logo gradient end */
#define LOGO_END           31
#define LOGO_END_VGX_R     98
#define LOGO_END_VGX_G     87
#define LOGO_END_VGX_B     176
#define LOGO_END_MG1_R     127
#define LOGO_END_MG1_G     158
#define LOGO_END_MG1_B     191
#define LOGO_END_RE_R      64 // The bane of my existence
#define LOGO_END_RE_G      0  // ...
#define LOGO_END_RE_B      64 // ...

/* The "Silicon Graphics" string is yellow on
   older systems, and white on newer ones. */
#define SGSTR_IDX          48
#define SGSTR_R            255
#define SGSTR_G            255
#define SGSTR_B_YELLOW     0
#define SGSTR_B_WHITE      255

/* Logos are deep purple. */
#define BOOTLOGO_IDX       49
#define BOOTLOGO_R         75
#define BOOTLOGO_G         0
#define BOOTLOGO_B         131

/* Shadows are a muted blue. */
#define SHADOW_IDX         50
#define SHADOW_R           95
#define SHADOW_G           95
#define SHADOW_B           146

/* The background is a muted blue gradient
   starting dark at the bottom of the
   image and brightening upwards. */
#define BGND_IDX          96
#define BGND_MAX_IDX      255
#define BGND_R            95
#define BGND_G            95
#define BGND_B            143
#define BGND_R_STEP       33177 /* 33177/65535 ~= 0.50625 */
#define BGND_G_STEP       47104 /* 47104/65535 ~= 0.71876 */
#define BGND_B_STEP       45875 /* 45875/65535 ~= 0.70001 */

#endif /* __COLORS_H__ */
