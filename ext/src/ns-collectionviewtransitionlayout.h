#ifndef PHP_APPKIT_NS_COLLECTIONVIEWTRANSITIONLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWTRANSITIONLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionviewtransitionlayout_create(uintptr_t current_layout, uintptr_t next_layout);
uintptr_t ns_collectionviewtransitionlayout_wrap(void *layout);
void ns_collectionviewtransitionlayout_destroy(uintptr_t layout);
void *ns_collectionviewtransitionlayout_nscollectionviewtransitionlayout(uintptr_t layout);
void ns_collectionviewtransitionlayout_set_progress(uintptr_t layout, double progress);
double ns_collectionviewtransitionlayout_get_progress(uintptr_t layout);
uintptr_t ns_collectionviewtransitionlayout_current_layout(uintptr_t layout);
uintptr_t ns_collectionviewtransitionlayout_next_layout(uintptr_t layout);
void ns_collectionviewtransitionlayout_update_value(uintptr_t layout, const char *key, double value);
double ns_collectionviewtransitionlayout_value_for_key(uintptr_t layout, const char *key);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWTRANSITIONLAYOUT_H */
