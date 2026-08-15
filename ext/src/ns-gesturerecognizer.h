#ifndef PHP_APPKIT_NS_GESTURERECOGNIZER_H
#define PHP_APPKIT_NS_GESTURERECOGNIZER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** initWithTarget:nil action:NULL. Caller owns until ns_gesturerecognizer_destroy. */
uintptr_t ns_gesturerecognizer_create(void);

uintptr_t ns_gesturerecognizer_wrap(void *recognizer);

void ns_gesturerecognizer_destroy(uintptr_t recognizer);

void *ns_gesturerecognizer_nsgesturerecognizer(uintptr_t recognizer);

void ns_gesturerecognizer_set_enabled(uintptr_t recognizer, int enabled);

int ns_gesturerecognizer_is_enabled(uintptr_t recognizer);

/** NSGestureRecognizerState integer. */
int ns_gesturerecognizer_state(uintptr_t recognizer);

int ns_gesturerecognizer_add_to_view(uintptr_t recognizer, uintptr_t view);

void ns_gesturerecognizer_remove_from_view(uintptr_t recognizer, uintptr_t view);

int ns_gesturerecognizer_location_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y);

/** Internal — retain any NSGestureRecognizer subclass (id as void*). */
uintptr_t ns_gesturerecognizer_retain_obj(void *object);

/** Internal — unwrap handle (returns retained id as void*, or NULL). */
void *ns_gesturerecognizer_from_obj(uintptr_t handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GESTURERECOGNIZER_H */
