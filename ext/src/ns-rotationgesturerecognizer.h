#ifndef PHP_APPKIT_NS_ROTATIONGESTURERECOGNIZER_H
#define PHP_APPKIT_NS_ROTATIONGESTURERECOGNIZER_H

#include <stdint.h>
#include "ns-gesturerecognizer.h"

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_rotationgesturerecognizer_create(void);

double ns_rotationgesturerecognizer_rotation(uintptr_t recognizer);

double ns_rotationgesturerecognizer_rotation_in_degrees(uintptr_t recognizer);

void ns_rotationgesturerecognizer_set_rotation(uintptr_t recognizer, double radians);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ROTATIONGESTURERECOGNIZER_H */
