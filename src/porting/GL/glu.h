#ifndef _GL_COMPAT_GLU_H
#define _GL_COMPAT_GLU_H
#ifdef __APPLE__
#include <OpenGL/glu.h>
#else
#include_next <GL/glu.h>
#endif
#endif
