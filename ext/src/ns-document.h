#ifndef PHP_APPKIT_NS_DOCUMENT_H
#define PHP_APPKIT_NS_DOCUMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_document_create(void);
uintptr_t ns_document_wrap(void *document);
void ns_document_destroy(uintptr_t document);
void *ns_document_nsdocument(uintptr_t document);
uintptr_t ns_document_init_with_type(const char *type_name);
uintptr_t ns_document_init_with_contents_of_url(const char *url, const char *type_name);
int ns_document_get_file_type(uintptr_t document, char *out, int out_len);
void ns_document_set_file_type(uintptr_t document, const char *type_name);
int ns_document_get_file_url(uintptr_t document, char *out, int out_len);
void ns_document_set_file_url(uintptr_t document, const char *url);
int ns_document_get_display_name(uintptr_t document, char *out, int out_len);
void ns_document_set_display_name(uintptr_t document, const char *name);
int ns_document_is_document_edited(uintptr_t document);
int ns_document_has_unautosaved_changes(uintptr_t document);
int ns_document_is_draft(uintptr_t document);
void ns_document_set_draft(uintptr_t document, int draft);
int ns_document_is_entire_file_loaded(uintptr_t document);
void ns_document_update_change_count(uintptr_t document, unsigned change_type);
void ns_document_close(uintptr_t document);
void ns_document_make_window_controllers(uintptr_t document);
void ns_document_show_windows(uintptr_t document);
int ns_document_window_controllers_count(uintptr_t document);
uintptr_t ns_document_window_controller_at(uintptr_t document, int index);
void ns_document_add_window_controller(uintptr_t document, uintptr_t window_controller);
void ns_document_remove_window_controller(uintptr_t document, uintptr_t window_controller);
int ns_document_read_from_url(uintptr_t document, const char *url, const char *type_name);
int ns_document_write_to_url(uintptr_t document, const char *url, const char *type_name);
int ns_document_revert_to_contents_of_url(uintptr_t document, const char *url, const char *type_name);
int ns_document_get_window_nib_name(uintptr_t document, char *out, int out_len);
int ns_document_get_autosaving_file_type(uintptr_t document, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DOCUMENT_H */
