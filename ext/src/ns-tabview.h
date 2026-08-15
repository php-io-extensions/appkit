#ifndef PHP_APPKIT_NS_TABVIEW_H
#define PHP_APPKIT_NS_TABVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tabview_create(double x, double y, double width, double height);

void ns_tabview_destroy(uintptr_t tabs);

void ns_tabview_add_tab(uintptr_t tabs, const char *title, uintptr_t child);

int ns_tabview_get_selected(uintptr_t tabs);

void ns_tabview_set_selected(uintptr_t tabs, int index);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABVIEW_H */
