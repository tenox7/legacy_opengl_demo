#ifndef _GL_COMPAT_GL_H
#define _GL_COMPAT_GL_H
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include_next <GL/gl.h>
#endif
#endif
