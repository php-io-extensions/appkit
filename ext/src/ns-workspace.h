#ifndef PHP_APPKIT_NS_WORKSPACE_H
#define PHP_APPKIT_NS_WORKSPACE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_workspace_shared(void);
uintptr_t ns_workspace_wrap(void *workspace);
void ns_workspace_destroy(uintptr_t workspace);
void *ns_workspace_nsworkspace(uintptr_t workspace);
int ns_workspace_open_url(uintptr_t workspace, const char *url);
int ns_workspace_select_file(uintptr_t workspace, const char *full_path, const char *root_path);
int ns_workspace_show_search_results(uintptr_t workspace, const char *query);
int ns_workspace_is_file_package(uintptr_t workspace, const char *path);
uintptr_t ns_workspace_icon_for_file(uintptr_t workspace, const char *path);
void ns_workspace_hide_other_applications(uintptr_t workspace);
int ns_workspace_url_for_application_with_bundle_id(uintptr_t workspace, const char *bundle_id, char *out, int out_len);
int ns_workspace_url_for_application_to_open_url(uintptr_t workspace, const char *url, char *out, int out_len);
int ns_workspace_frontmost_application_name(uintptr_t workspace, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_WORKSPACE_H */
