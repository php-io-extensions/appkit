#ifndef PHP_APPKIT_NS_BROWSER_H
#define PHP_APPKIT_NS_BROWSER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_browser_create(double x, double y, double width, double height);
void ns_browser_destroy(uintptr_t browser);
void ns_browser_set_path(uintptr_t browser, const char *path);
int ns_browser_get_path(uintptr_t browser, char *out, int out_len);
void ns_browser_set_max_visible_columns(uintptr_t browser, int count);
int ns_browser_get_max_visible_columns(uintptr_t browser);
int ns_browser_last_column(uintptr_t browser);
void ns_browser_reload_column(uintptr_t browser, int column);
void ns_browser_set_takes_title_from_previous_column(uintptr_t browser, int flag);
int ns_browser_takes_title_from_previous_column(uintptr_t browser);
int ns_browser_selected_row_in_column(uintptr_t browser, int column);
void ns_browser_select_row_in_column(uintptr_t browser, int row, int column);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BROWSER_H */
