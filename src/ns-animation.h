#ifndef PHP_APPKIT_NS_ANIMATION_H
#define PHP_APPKIT_NS_ANIMATION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_ANIMATION_CURVE_EASE_IN_OUT = 0,
    NS_ANIMATION_CURVE_EASE_IN = 1,
    NS_ANIMATION_CURVE_EASE_OUT = 2,
    NS_ANIMATION_CURVE_LINEAR = 3
} ns_animation_curve;

typedef enum {
    NS_ANIMATION_BLOCKING = 0,
    NS_ANIMATION_NONBLOCKING = 1,
    NS_ANIMATION_NONBLOCKING_THREADED = 2
} ns_animation_blocking_mode;

uintptr_t ns_animation_create(double duration, int curve);

uintptr_t ns_animation_wrap(void *animation);

void ns_animation_destroy(uintptr_t animation);

void *ns_animation_nsanimation(uintptr_t animation);

void ns_animation_start(uintptr_t animation);

void ns_animation_stop(uintptr_t animation);

int ns_animation_is_animating(uintptr_t animation);

void ns_animation_set_current_progress(uintptr_t animation, float progress);

float ns_animation_get_current_progress(uintptr_t animation);

void ns_animation_set_duration(uintptr_t animation, double duration);

double ns_animation_get_duration(uintptr_t animation);

void ns_animation_set_blocking_mode(uintptr_t animation, int mode);

int ns_animation_get_blocking_mode(uintptr_t animation);

void ns_animation_set_frame_rate(uintptr_t animation, float frameRate);

float ns_animation_get_frame_rate(uintptr_t animation);

void ns_animation_set_curve(uintptr_t animation, int curve);

int ns_animation_get_curve(uintptr_t animation);

float ns_animation_get_current_value(uintptr_t animation);

void ns_animation_add_progress_mark(uintptr_t animation, float mark);

void ns_animation_remove_progress_mark(uintptr_t animation, float mark);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ANIMATION_H */
