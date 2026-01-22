#ifndef _GL_COMPAT_GLUT_H
#define _GL_COMPAT_GLUT_H
#ifdef __APPLE__
#include <GLUT/glut.h>
#include <stdlib.h>
#include <CoreFoundation/CoreFoundation.h>

static inline void glutMainLoopEvent(void) {
    CFRunLoopRunInMode(kCFRunLoopDefaultMode, 0.001, true);
}

static inline void glutLeaveMainLoop(void) {
    exit(0);
}

static inline void glutSetOption(int opt, int val) {
    (void)opt; (void)val;
}

#ifndef GLUT_ACTION_ON_WINDOW_CLOSE
#define GLUT_ACTION_ON_WINDOW_CLOSE 0x01F9
#define GLUT_ACTION_GLUTMAINLOOP_RETURNS 0x0001
#endif

#else
#include_next <GL/glut.h>
#endif
#endif
