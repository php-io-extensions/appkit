#ifndef PHP_APPKIT_NS_STACKVIEW_H
#define PHP_APPKIT_NS_STACKVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_stackview_create(double x, double y, double width, double height, int vertical);

void ns_stackview_destroy(uintptr_t stack);

void ns_stackview_set_spacing(uintptr_t stack, double spacing);

void ns_stackview_add_arranged_subview(uintptr_t stack, uintptr_t child);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STACKVIEW_H */
