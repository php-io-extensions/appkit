#ifndef PHP_APPKIT_NS_VIEWANIMATION_H
#define PHP_APPKIT_NS_VIEWANIMATION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_VIEW_ANIMATION_EFFECT_FADE_IN = 0,
    NS_VIEW_ANIMATION_EFFECT_FADE_OUT = 1
} ns_viewanimation_effect;

/** Target is NSView* or NSWindow* borrowed from view/window handles (0 = invalid). */
uintptr_t ns_viewanimation_create_fade(uintptr_t targetHandle, int isWindow, int effect, double duration);

uintptr_t ns_viewanimation_create_frame(uintptr_t targetHandle, int isWindow, double startX, double startY, double startW, double startH, double endX, double endY, double endW, double endH, double duration);

uintptr_t ns_viewanimation_wrap(void *animation);

void ns_viewanimation_destroy(uintptr_t animation);

void *ns_viewanimation_nsviewanimation(uintptr_t animation);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VIEWANIMATION_H */
