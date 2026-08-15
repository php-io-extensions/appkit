#ifndef PHP_APPKIT_NS_MAGNIFICATIONGESTURERECOGNIZER_H
#define PHP_APPKIT_NS_MAGNIFICATIONGESTURERECOGNIZER_H

#include <stdint.h>
#include "ns-gesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_magnificationgesturerecognizer_create(void);

double ns_magnificationgesturerecognizer_magnification(uintptr_t recognizer);

void ns_magnificationgesturerecognizer_set_magnification(uintptr_t recognizer, double magnification);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MAGNIFICATIONGESTURERECOGNIZER_H */
