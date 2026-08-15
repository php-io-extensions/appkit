#ifndef PHP_APPKIT_NS_STATUSITEM_H
#define PHP_APPKIT_NS_STATUSITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_statusitem_create(const char *title);

uintptr_t ns_statusitem_wrap_native(void *item);

void *ns_statusitem_nsstatusitem(uintptr_t item);

void ns_statusitem_destroy(uintptr_t item);

void ns_statusitem_set_title(uintptr_t item, const char *title);

int ns_statusitem_poll_click(uintptr_t item);

/** View-box wrap of the status item's NSStatusBarButton. Caller owns until ns_view_destroy. */
uintptr_t ns_statusitem_button(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STATUSITEM_H */
