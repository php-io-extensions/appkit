#ifndef PHP_APPKIT_NS_PANGESTURERECOGNIZER_H
#define PHP_APPKIT_NS_PANGESTURERECOGNIZER_H

#include <stdint.h>
#include "ns-gesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pangesturerecognizer_create(void);

void ns_pangesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask);

unsigned ns_pangesturerecognizer_button_mask(uintptr_t recognizer);

int ns_pangesturerecognizer_translation_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y);

void ns_pangesturerecognizer_set_translation_in_view(uintptr_t recognizer, uintptr_t view, double x, double y);

int ns_pangesturerecognizer_velocity_in_view(uintptr_t recognizer, uintptr_t view, double *x, double *y);

void ns_pangesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count);

int ns_pangesturerecognizer_number_of_touches_required(uintptr_t recognizer);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PANGESTURERECOGNIZER_H */
