#ifndef PHP_APPKIT_NS_STEPPER_H
#define PHP_APPKIT_NS_STEPPER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_stepper_create(double x, double y, double width, double height, double min, double max);

void ns_stepper_destroy(uintptr_t stepper);

void ns_stepper_set_value(uintptr_t stepper, double value);

double ns_stepper_get_value(uintptr_t stepper);

int ns_stepper_poll_change(uintptr_t stepper);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STEPPER_H */
