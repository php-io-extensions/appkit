#ifndef PHP_APPKIT_NS_TOOLBAR_H
#define PHP_APPKIT_NS_TOOLBAR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_toolbar_create(void);

void ns_toolbar_destroy(uintptr_t toolbar);

void ns_toolbar_add_item(uintptr_t toolbar, const char *title, const char *action_id);

int ns_toolbar_install(uintptr_t toolbar, uintptr_t window);

int ns_toolbar_poll_action(uintptr_t toolbar, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBAR_H */
