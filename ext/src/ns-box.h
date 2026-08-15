#ifndef PHP_APPKIT_NS_BOX_H
#define PHP_APPKIT_NS_BOX_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_box_create(double x, double y, double width, double height, const char *title);

void ns_box_destroy(uintptr_t box);

void ns_box_set_title(uintptr_t box, const char *title);

void ns_box_add_subview(uintptr_t box, uintptr_t child);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BOX_H */
