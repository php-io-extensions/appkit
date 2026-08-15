#ifndef PHP_APPKIT_NS_CONTROLLER_H
#define PHP_APPKIT_NS_CONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_controller_create(void);
uintptr_t ns_controller_wrap(void *controller);
void ns_controller_destroy(uintptr_t controller);
void *ns_controller_nscontroller(uintptr_t controller);
void ns_controller_discard_editing(uintptr_t controller);
int ns_controller_commit_editing(uintptr_t controller);
int ns_controller_is_editing(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CONTROLLER_H */
