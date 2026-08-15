#ifndef PHP_APPKIT_NS_COLLECTIONVIEW_H
#define PHP_APPKIT_NS_COLLECTIONVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionview_create(double x, double y, double width, double height);

void ns_collectionview_destroy(uintptr_t collection);

void ns_collectionview_clear(uintptr_t collection);

void ns_collectionview_add_item(uintptr_t collection, const char *title);

int ns_collectionview_item_count(uintptr_t collection);

int ns_collectionview_get_selected(uintptr_t collection);

void ns_collectionview_set_selected(uintptr_t collection, int index);

int ns_collectionview_poll_change(uintptr_t collection);

void ns_collectionview_set_layout(uintptr_t collection, uintptr_t layout);

uintptr_t ns_collectionview_get_layout(uintptr_t collection);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEW_H */
