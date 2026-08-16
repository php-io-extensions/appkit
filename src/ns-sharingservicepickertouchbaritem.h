#ifndef PHP_APPKIT_NS_SHARINGSERVICEPICKERTOUCHBARITEM_H
#define PHP_APPKIT_NS_SHARINGSERVICEPICKERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_sharingservicepickertouchbaritem_create(const char *identifier);
uintptr_t ns_sharingservicepickertouchbaritem_wrap(void *item);
void ns_sharingservicepickertouchbaritem_destroy(uintptr_t item);
void *ns_sharingservicepickertouchbaritem_nssharingservicepickertouchbaritem(uintptr_t item);
void ns_sharingservicepickertouchbaritem_set_enabled(uintptr_t item, int flag);
int ns_sharingservicepickertouchbaritem_is_enabled(uintptr_t item);
void ns_sharingservicepickertouchbaritem_set_button_title(uintptr_t item, const char *title);
int ns_sharingservicepickertouchbaritem_get_button_title(uintptr_t item, char *out, int out_len);
void ns_sharingservicepickertouchbaritem_set_button_image(uintptr_t item, uintptr_t image);
void ns_sharingservicepickertouchbaritem_set_share_strings(uintptr_t item, const char **items, int count);
int ns_sharingservicepickertouchbaritem_share_strings_count(uintptr_t item);
int ns_sharingservicepickertouchbaritem_share_string_at(uintptr_t item, int index, char *out, int out_len);
int ns_sharingservicepickertouchbaritem_poll_share_request(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SHARINGSERVICEPICKERTOUCHBARITEM_H */
