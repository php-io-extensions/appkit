#ifndef PHP_APPKIT_NS_TABLEVIEWDIFFABLE_H
#define PHP_APPKIT_NS_TABLEVIEWDIFFABLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tableviewdiffable_create(uintptr_t table);
void ns_tableviewdiffable_destroy(uintptr_t source);
void ns_tableviewdiffable_set_item_title(uintptr_t source, const char *item_id, const char *title);
void ns_tableviewdiffable_apply(uintptr_t source, const char *section_id, const char **item_ids, int item_count, int animating);
int ns_tableviewdiffable_item_count(uintptr_t source);
int ns_tableviewdiffable_item_id_at(uintptr_t source, int index, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TABLEVIEWDIFFABLE_H */
