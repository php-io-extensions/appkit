#ifndef PHP_APPKIT_NS_PRESSGESTURERECOGNIZER_H
#define PHP_APPKIT_NS_PRESSGESTURERECOGNIZER_H

#include <stdint.h>
#include "ns-gesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pressgesturerecognizer_create(void);

void ns_pressgesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask);

unsigned ns_pressgesturerecognizer_button_mask(uintptr_t recognizer);

void ns_pressgesturerecognizer_set_minimum_press_duration(uintptr_t recognizer, double seconds);

double ns_pressgesturerecognizer_minimum_press_duration(uintptr_t recognizer);

void ns_pressgesturerecognizer_set_allowable_movement(uintptr_t recognizer, double points);

double ns_pressgesturerecognizer_allowable_movement(uintptr_t recognizer);

void ns_pressgesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count);

int ns_pressgesturerecognizer_number_of_touches_required(uintptr_t recognizer);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRESSGESTURERECOGNIZER_H */
