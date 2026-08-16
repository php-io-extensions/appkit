#ifndef PHP_APPKIT_NS_RUNNINGAPPLICATION_H
#define PHP_APPKIT_NS_RUNNINGAPPLICATION_H

#include <stdint.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_runningapplication_current(void);
uintptr_t ns_runningapplication_wrap(void *application);
void ns_runningapplication_destroy(uintptr_t application);
void *ns_runningapplication_nsrunningapplication(uintptr_t application);
uintptr_t ns_runningapplication_with_process_identifier(pid_t pid);
int ns_runningapplication_with_bundle_identifier_count(const char *bundle_id);
uintptr_t ns_runningapplication_with_bundle_identifier_at(const char *bundle_id, int index);
void ns_runningapplication_terminate_automatically_terminable_applications(void);
int ns_runningapplication_is_terminated(uintptr_t application);
int ns_runningapplication_is_finished_launching(uintptr_t application);
int ns_runningapplication_is_hidden(uintptr_t application);
int ns_runningapplication_is_active(uintptr_t application);
int ns_runningapplication_owns_menu_bar(uintptr_t application);
int ns_runningapplication_activation_policy(uintptr_t application);
int ns_runningapplication_process_identifier(uintptr_t application);
int ns_runningapplication_localized_name(uintptr_t application, char *out, int out_len);
int ns_runningapplication_bundle_identifier(uintptr_t application, char *out, int out_len);
int ns_runningapplication_bundle_url(uintptr_t application, char *out, int out_len);
int ns_runningapplication_executable_url(uintptr_t application, char *out, int out_len);
uintptr_t ns_runningapplication_icon(uintptr_t application);
int ns_runningapplication_hide(uintptr_t application);
int ns_runningapplication_unhide(uintptr_t application);
int ns_runningapplication_activate_with_options(uintptr_t application, unsigned options);
int ns_runningapplication_terminate(uintptr_t application);
int ns_runningapplication_force_terminate(uintptr_t application);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_RUNNINGAPPLICATION_H */
