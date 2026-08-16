#ifndef PHP_APPKIT_NS_SCRUBBERFLOWLAYOUT_H
#define PHP_APPKIT_NS_SCRUBBERFLOWLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberflowlayout_create(void);
uintptr_t ns_scrubberflowlayout_wrap(void *layout);
void ns_scrubberflowlayout_destroy(uintptr_t layout);
void *ns_scrubberflowlayout_nsscrubberflowlayout(uintptr_t layout);
void ns_scrubberflowlayout_set_item_spacing(uintptr_t layout, double spacing);
double ns_scrubberflowlayout_get_item_spacing(uintptr_t layout);
void ns_scrubberflowlayout_set_item_size(uintptr_t layout, double width, double height);
int ns_scrubberflowlayout_get_item_size(uintptr_t layout, double *width, double *height);
void ns_scrubberflowlayout_invalidate_items_at_indexes(uintptr_t layout, const int *indexes, int count);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERFLOWLAYOUT_H */
