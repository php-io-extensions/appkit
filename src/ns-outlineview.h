#ifndef PHP_APPKIT_NS_OUTLINEVIEW_H
#define PHP_APPKIT_NS_OUTLINEVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_outlineview_create(double x, double y, double width, double height);

void ns_outlineview_destroy(uintptr_t outline);

void ns_outlineview_clear(uintptr_t outline);

int ns_outlineview_add_root(uintptr_t outline, const char *title);

int ns_outlineview_add_child(uintptr_t outline, int parent_id, const char *title);

int ns_outlineview_item_count(uintptr_t outline);

int ns_outlineview_get_selected(uintptr_t outline);

void ns_outlineview_set_selected(uintptr_t outline, int item_id);

int ns_outlineview_poll_change(uintptr_t outline);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OUTLINEVIEW_H */
