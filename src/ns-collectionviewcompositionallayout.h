#ifndef PHP_APPKIT_NS_COLLECTIONVIEWCOMPOSITIONALLAYOUT_H
#define PHP_APPKIT_NS_COLLECTIONVIEWCOMPOSITIONALLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_collectionviewcompositionallayout_create_list(double item_height);
uintptr_t ns_collectionviewcompositionallayout_create_grid(int columns, double item_height);
uintptr_t ns_collectionviewcompositionallayout_wrap(void *layout);
void ns_collectionviewcompositionallayout_destroy(uintptr_t layout);
void *ns_collectionviewcompositionallayout_nscollectionviewcompositionallayout(uintptr_t layout);
void ns_collectionviewcompositionallayout_set_scroll_direction(uintptr_t layout, int direction);
int ns_collectionviewcompositionallayout_get_scroll_direction(uintptr_t layout);
void ns_collectionviewcompositionallayout_set_inter_section_spacing(uintptr_t layout, double spacing);
double ns_collectionviewcompositionallayout_get_inter_section_spacing(uintptr_t layout);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLLECTIONVIEWCOMPOSITIONALLAYOUT_H */
