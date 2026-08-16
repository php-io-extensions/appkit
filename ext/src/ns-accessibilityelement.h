#ifndef PHP_APPKIT_NS_ACCESSIBILITYELEMENT_H
#define PHP_APPKIT_NS_ACCESSIBILITYELEMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_accessibilityelement_create(const char *role, double x, double y, double width, double height, const char *label, uintptr_t parent);
uintptr_t ns_accessibilityelement_wrap(void *element);
void ns_accessibilityelement_destroy(uintptr_t element);
void *ns_accessibilityelement_nsaccessibilityelement(uintptr_t element);
void ns_accessibilityelement_add_child(uintptr_t element, uintptr_t child);
void ns_accessibilityelement_set_frame_in_parent(uintptr_t element, double x, double y, double width, double height);
int ns_accessibilityelement_frame_in_parent(uintptr_t element, double *x, double *y, double *width, double *height);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ACCESSIBILITYELEMENT_H */
