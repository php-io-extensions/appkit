#ifndef PHP_APPKIT_NS_SLIDER_H
#define PHP_APPKIT_NS_SLIDER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_slider_create(double x, double y, double width, double height, double min, double max);

void ns_slider_destroy(uintptr_t slider);

void ns_slider_set_value(uintptr_t slider, double value);

double ns_slider_get_value(uintptr_t slider);

int ns_slider_poll_change(uintptr_t slider);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SLIDER_H */
