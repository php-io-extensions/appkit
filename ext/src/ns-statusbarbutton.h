#ifndef PHP_APPKIT_NS_STATUSBARBUTTON_H
#define PHP_APPKIT_NS_STATUSBARBUTTON_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_statusbarbutton_wrap(void *button);
uintptr_t ns_statusbarbutton_from_status_item(uintptr_t item);
void ns_statusbarbutton_destroy(uintptr_t button);
void ns_statusbarbutton_set_title(uintptr_t button, const char *title);
int ns_statusbarbutton_get_title(uintptr_t button, char *out, int out_len);
void ns_statusbarbutton_set_appears_disabled(uintptr_t button, int flag);
int ns_statusbarbutton_appears_disabled(uintptr_t button);
void ns_statusbarbutton_set_image(uintptr_t button, uintptr_t image);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSBARBUTTON_H */
