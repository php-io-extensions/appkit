#ifndef PHP_APPKIT_NS_SCRUBBERPROPORTIONALLAYOUT_H
#define PHP_APPKIT_NS_SCRUBBERPROPORTIONALLAYOUT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_scrubberproportionallayout_create(int numberOfVisibleItems);
uintptr_t ns_scrubberproportionallayout_wrap(void *layout);
void ns_scrubberproportionallayout_destroy(uintptr_t layout);
void *ns_scrubberproportionallayout_nsscrubberproportionallayout(uintptr_t layout);
void ns_scrubberproportionallayout_set_number_of_visible_items(uintptr_t layout, int count);
int ns_scrubberproportionallayout_get_number_of_visible_items(uintptr_t layout);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SCRUBBERPROPORTIONALLAYOUT_H */
