#ifndef PHP_APPKIT_NS_CLICKGESTURERECOGNIZER_H
#define PHP_APPKIT_NS_CLICKGESTURERECOGNIZER_H

#include <stdint.h>
#include "ns-gesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_clickgesturerecognizer_create(void);

void ns_clickgesturerecognizer_set_button_mask(uintptr_t recognizer, unsigned mask);

unsigned ns_clickgesturerecognizer_button_mask(uintptr_t recognizer);

void ns_clickgesturerecognizer_set_number_of_clicks_required(uintptr_t recognizer, int count);

int ns_clickgesturerecognizer_number_of_clicks_required(uintptr_t recognizer);

void ns_clickgesturerecognizer_set_number_of_touches_required(uintptr_t recognizer, int count);

int ns_clickgesturerecognizer_number_of_touches_required(uintptr_t recognizer);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CLICKGESTURERECOGNIZER_H */
