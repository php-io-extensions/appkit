#ifndef PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionviewlayout_create(void);
uintptr_t ns_collectionviewlayout_wrap(void *layout);
void ns_collectionviewlayout_destroy(uintptr_t layout);
void *ns_collectionviewlayout_nscollectionviewlayout(uintptr_t layout);
void ns_collectionviewlayout_invalidate(uintptr_t layout);
uintptr_t ns_collectionviewlayout_collection_view(uintptr_t layout);
double ns_collectionviewlayout_content_width(uintptr_t layout);
double ns_collectionviewlayout_content_height(uintptr_t layout);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWLAYOUT_H */
