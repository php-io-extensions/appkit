#ifndef PHP_APPKIT_NS_SHARINGSERVICE_H
#define PHP_APPKIT_NS_SHARINGSERVICE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_sharingservice_named(const char *service_name);
uintptr_t ns_sharingservice_wrap(void *service);
void ns_sharingservice_destroy(uintptr_t service);
void *ns_sharingservice_nssharingservice(uintptr_t service);
int ns_sharingservice_title(uintptr_t service, char *out, int out_len);
int ns_sharingservice_menu_item_title(uintptr_t service, char *out, int out_len);
void ns_sharingservice_set_menu_item_title(uintptr_t service, const char *title);
int ns_sharingservice_subject(uintptr_t service, char *out, int out_len);
void ns_sharingservice_set_subject(uintptr_t service, const char *subject);
void ns_sharingservice_set_recipients(uintptr_t service, const char **items, int count);
int ns_sharingservice_recipients_count(uintptr_t service);
int ns_sharingservice_recipient_at(uintptr_t service, int index, char *out, int out_len);
int ns_sharingservice_can_perform_with_strings(uintptr_t service, const char **items, int count);
void ns_sharingservice_perform_with_strings(uintptr_t service, const char **items, int count);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SHARINGSERVICE_H */
