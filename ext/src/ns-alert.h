#ifndef PHP_APPKIT_NS_ALERT_H
#define PHP_APPKIT_NS_ALERT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_alert_create(void);

void ns_alert_destroy(uintptr_t alert);

void ns_alert_set_message(uintptr_t alert, const char *text);

void ns_alert_set_info(uintptr_t alert, const char *text);

void ns_alert_add_button(uintptr_t alert, const char *title);

int ns_alert_run_modal(uintptr_t alert);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ALERT_H */
