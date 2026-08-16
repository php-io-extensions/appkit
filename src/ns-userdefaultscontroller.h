#ifndef PHP_APPKIT_NS_USERDEFAULTSCONTROLLER_H
#define PHP_APPKIT_NS_USERDEFAULTSCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_userdefaultscontroller_shared(void);
uintptr_t ns_userdefaultscontroller_create(void);
uintptr_t ns_userdefaultscontroller_create_with_initial_values(uintptr_t dictionary);
uintptr_t ns_userdefaultscontroller_wrap(void *controller);
void ns_userdefaultscontroller_destroy(uintptr_t controller);
void *ns_userdefaultscontroller_nsuserdefaultscontroller(uintptr_t controller);
void ns_userdefaultscontroller_discard_editing(uintptr_t controller);
int ns_userdefaultscontroller_commit_editing(uintptr_t controller);
int ns_userdefaultscontroller_is_editing(uintptr_t controller);

void *ns_userdefaultscontroller_defaults(uintptr_t controller);
void ns_userdefaultscontroller_set_initial_values(uintptr_t controller, uintptr_t dictionary);
uintptr_t ns_userdefaultscontroller_initial_values(uintptr_t controller);
void ns_userdefaultscontroller_set_applies_immediately(uintptr_t controller, int value);
int ns_userdefaultscontroller_applies_immediately(uintptr_t controller);
int ns_userdefaultscontroller_has_unapplied_changes(uintptr_t controller);
void *ns_userdefaultscontroller_values(uintptr_t controller);
void ns_userdefaultscontroller_revert(uintptr_t controller);
void ns_userdefaultscontroller_save(uintptr_t controller);
void ns_userdefaultscontroller_revert_to_initial_values(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_USERDEFAULTSCONTROLLER_H */
