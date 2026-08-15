#ifndef PHP_APPKIT_NS_SPLITVIEW_H
#define PHP_APPKIT_NS_SPLITVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_splitview_create(double x, double y, double width, double height, int vertical);

void ns_splitview_destroy(uintptr_t split);

void ns_splitview_add_subview(uintptr_t split, uintptr_t child);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPLITVIEW_H */
