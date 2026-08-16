#ifndef PHP_APPKIT_NS_DRAGGINGITEM_H
#define PHP_APPKIT_NS_DRAGGINGITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_draggingitem_create_with_string(const char *string);
uintptr_t ns_draggingitem_wrap(void *item);
void ns_draggingitem_destroy(uintptr_t item);
void *ns_draggingitem_nsdraggingitem(uintptr_t item);
void *ns_draggingitem_item(uintptr_t item);
void ns_draggingitem_get_dragging_frame(uintptr_t item, double *x, double *y, double *w, double *h);
void ns_draggingitem_set_dragging_frame(uintptr_t item, double x, double y, double w, double h);
void ns_draggingitem_set_dragging_frame_contents(uintptr_t item, double x, double y, double w, double h, void *contents);
int ns_draggingitem_image_components_count(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DRAGGINGITEM_H */
