#ifndef PHP_APPKIT_NS_SHARINGSERVICEPICKER_H
#define PHP_APPKIT_NS_SHARINGSERVICEPICKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_sharingservicepicker_create(const char **items, int count);
uintptr_t ns_sharingservicepicker_wrap(void *picker);
void ns_sharingservicepicker_destroy(uintptr_t picker);
void *ns_sharingservicepicker_nssharingservicepicker(uintptr_t picker);
void ns_sharingservicepicker_show_relative_to_rect(uintptr_t picker, double x, double y, double w, double h, uintptr_t view, int preferred_edge);
void ns_sharingservicepicker_close(uintptr_t picker);
int ns_sharingservicepicker_poll_chosen_service(uintptr_t picker, char *title_out, int title_len);
uintptr_t ns_sharingservicepicker_standard_share_menu_item(uintptr_t picker);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SHARINGSERVICEPICKER_H */
