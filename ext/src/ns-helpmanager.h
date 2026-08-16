#ifndef PHP_APPKIT_NS_HELPMANAGER_H
#define PHP_APPKIT_NS_HELPMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_helpmanager_shared(void);
void ns_helpmanager_destroy(uintptr_t manager);
void *ns_helpmanager_nshelpmanager(uintptr_t manager);
int ns_helpmanager_is_context_help_mode_active(void);
void ns_helpmanager_set_context_help_mode_active(int active);
void ns_helpmanager_set_context_help_for_object(uintptr_t object_ptr, const char *help_text);
void ns_helpmanager_remove_context_help_for_object(uintptr_t object_ptr);
int ns_helpmanager_context_help_for_object(uintptr_t object_ptr, char *out, int out_len);
int ns_helpmanager_show_context_help_for_object(uintptr_t object_ptr, double x, double y);
void ns_helpmanager_open_help_anchor(const char *anchor, const char *book);
void ns_helpmanager_find_string(const char *query, const char *book);
int ns_helpmanager_register_books_in_bundle_path(const char *bundle_path);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_HELPMANAGER_H */
