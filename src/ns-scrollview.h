#ifndef PHP_APPKIT_NS_SCROLLVIEW_H
#define PHP_APPKIT_NS_SCROLLVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrollview_create(double x, double y, double width, double height);

void ns_scrollview_destroy(uintptr_t scroll);

void ns_scrollview_set_document_view(uintptr_t scroll, uintptr_t child);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCROLLVIEW_H */
