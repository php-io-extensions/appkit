#ifndef PHP_APPKIT_NS_SHARINGSERVICEPICKERTOOLBARITEM_H
#define PHP_APPKIT_NS_SHARINGSERVICEPICKERTOOLBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_sharingservicepickertoolbaritem_create(const char *identifier);
uintptr_t ns_sharingservicepickertoolbaritem_wrap(void *item);
void ns_sharingservicepickertoolbaritem_destroy(uintptr_t item);
void *ns_sharingservicepickertoolbaritem_nssharingservicepickertoolbaritem(uintptr_t item);
void ns_sharingservicepickertoolbaritem_set_share_strings(uintptr_t item, const char **items, int count);
int ns_sharingservicepickertoolbaritem_share_strings_count(uintptr_t item);
int ns_sharingservicepickertoolbaritem_share_string_at(uintptr_t item, int index, char *out, int out_len);
int ns_sharingservicepickertoolbaritem_poll_share_request(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SHARINGSERVICEPICKERTOOLBARITEM_H */
