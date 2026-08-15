#ifndef PHP_APPKIT_NS_COLLECTIONVIEWDIFFABLE_H
#define PHP_APPKIT_NS_COLLECTIONVIEWDIFFABLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionviewdiffable_create(uintptr_t collection);
void ns_collectionviewdiffable_destroy(uintptr_t source);
void ns_collectionviewdiffable_set_item_title(uintptr_t source, const char *item_id, const char *title);
void ns_collectionviewdiffable_apply(uintptr_t source, const char *section_id, const char **item_ids, int item_count, int animating);
int ns_collectionviewdiffable_item_count(uintptr_t source);
int ns_collectionviewdiffable_item_id_at(uintptr_t source, int index, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWDIFFABLE_H */
