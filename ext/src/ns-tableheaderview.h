#ifndef PHP_APPKIT_NS_TABLEHEADERVIEW_H
#define PHP_APPKIT_NS_TABLEHEADERVIEW_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tableheaderview_create(double x, double y, double width, double height);
uintptr_t ns_tableheaderview_wrap(void *view);
void ns_tableheaderview_destroy(uintptr_t header);
void ns_tableheaderview_set_table_view(uintptr_t header, uintptr_t table);
uintptr_t ns_tableheaderview_table_view(uintptr_t header);
double ns_tableheaderview_header_height(uintptr_t header);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEHEADERVIEW_H */
