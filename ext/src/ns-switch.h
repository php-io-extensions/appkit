#ifndef PHP_APPKIT_NS_SWITCH_H
#define PHP_APPKIT_NS_SWITCH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_switch_create(double x, double y, double width, double height);

void ns_switch_destroy(uintptr_t toggle);

void ns_switch_set_on(uintptr_t toggle, int on);

int ns_switch_is_on(uintptr_t toggle);

int ns_switch_poll_change(uintptr_t toggle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SWITCH_H */
