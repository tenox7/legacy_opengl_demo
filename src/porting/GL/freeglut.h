#ifndef _GL_COMPAT_FREEGLUT_H
#define _GL_COMPAT_FREEGLUT_H
#ifdef __APPLE__
#include "glut.h"
#define FREEGLUT 1
#ifndef GLUT_KEY_SHIFT_L
#define GLUT_KEY_SHIFT_L 0x0070
#define GLUT_KEY_SHIFT_R 0x0071
#define GLUT_KEY_CTRL_L  0x0072
#define GLUT_KEY_CTRL_R  0x0073
#define GLUT_KEY_ALT_L   0x0074
#define GLUT_KEY_ALT_R   0x0075
#endif
static inline int glutBitmapHeight(void* font) { (void)font; return 13; }
#else
#include_next <GL/freeglut.h>
#endif
#endif
