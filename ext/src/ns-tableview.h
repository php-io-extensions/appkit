#ifndef PHP_APPKIT_NS_TABLEVIEW_H
#define PHP_APPKIT_NS_TABLEVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tableview_create(double x, double y, double width, double height);

void ns_tableview_destroy(uintptr_t table);

void ns_tableview_clear_rows(uintptr_t table);

void ns_tableview_add_row(uintptr_t table, const char *value);

int ns_tableview_row_count(uintptr_t table);

int ns_tableview_get_selected(uintptr_t table);

void ns_tableview_set_selected(uintptr_t table, int row);

int ns_tableview_poll_change(uintptr_t table);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEVIEW_H */
