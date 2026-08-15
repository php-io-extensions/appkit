#ifndef PHP_APPKIT_NS_COLORWELL_H
#define PHP_APPKIT_NS_COLORWELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorwell_create(double x, double y, double width, double height);

void ns_colorwell_destroy(uintptr_t well);

void ns_colorwell_set_rgba(uintptr_t well, int r, int g, int b, int a);

int ns_colorwell_get_rgba(uintptr_t well, int *r, int *g, int *b, int *a);

int ns_colorwell_poll_change(uintptr_t well);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORWELL_H */
