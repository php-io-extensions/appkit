#ifndef PHP_APPKIT_NS_TABLEROWVIEW_H
#define PHP_APPKIT_NS_TABLEROWVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tablerowview_create(double x, double y, double width, double height);
uintptr_t ns_tablerowview_wrap(void *view);
void ns_tablerowview_destroy(uintptr_t row);
void ns_tablerowview_set_emphasized(uintptr_t row, int flag);
int ns_tablerowview_is_emphasized(uintptr_t row);
void ns_tablerowview_set_selected(uintptr_t row, int flag);
int ns_tablerowview_is_selected(uintptr_t row);
void ns_tablerowview_set_group_row_style(uintptr_t row, int flag);
int ns_tablerowview_is_group_row_style(uintptr_t row);
void ns_tablerowview_set_floating(uintptr_t row, int flag);
int ns_tablerowview_is_floating(uintptr_t row);
int ns_tablerowview_interior_background_style(uintptr_t row);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEROWVIEW_H */
