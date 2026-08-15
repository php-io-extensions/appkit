#ifndef PHP_APPKIT_NS_SHADOW_H
#define PHP_APPKIT_NS_SHADOW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_shadow_create(void);

uintptr_t ns_shadow_wrap(void *shadow);

void ns_shadow_destroy(uintptr_t shadow);

void *ns_shadow_nsshadow(uintptr_t shadow);

void ns_shadow_set_offset(uintptr_t shadow, double width, double height);

void ns_shadow_get_offset(uintptr_t shadow, double *width, double *height);

void ns_shadow_set_blur_radius(uintptr_t shadow, double radius);

double ns_shadow_get_blur_radius(uintptr_t shadow);

void ns_shadow_set_color(uintptr_t shadow, uintptr_t color);

uintptr_t ns_shadow_get_color(uintptr_t shadow);

void ns_shadow_set(uintptr_t shadow);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SHADOW_H */
