#ifndef PHP_APPKIT_NS_DOCUMENTCONTROLLER_H
#define PHP_APPKIT_NS_DOCUMENTCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_documentcontroller_shared(void);
uintptr_t ns_documentcontroller_create(void);
uintptr_t ns_documentcontroller_wrap(void *controller);
void ns_documentcontroller_destroy(uintptr_t controller);
void *ns_documentcontroller_nsdocumentcontroller(uintptr_t controller);
int ns_documentcontroller_documents_count(uintptr_t controller);
uintptr_t ns_documentcontroller_document_at(uintptr_t controller, int index);
uintptr_t ns_documentcontroller_current_document(uintptr_t controller);
int ns_documentcontroller_current_directory(uintptr_t controller, char *out, int out_len);
uintptr_t ns_documentcontroller_document_for_url(uintptr_t controller, const char *url);
uintptr_t ns_documentcontroller_document_for_window(uintptr_t controller, uintptr_t window);
void ns_documentcontroller_add_document(uintptr_t controller, uintptr_t document);
void ns_documentcontroller_remove_document(uintptr_t controller, uintptr_t document);
int ns_documentcontroller_default_type(uintptr_t controller, char *out, int out_len);
uintptr_t ns_documentcontroller_open_untitled_document_and_display(uintptr_t controller, int display_document);
int ns_documentcontroller_has_edited_documents(uintptr_t controller);
int ns_documentcontroller_document_class_names_count(uintptr_t controller);
int ns_documentcontroller_document_class_name_at(uintptr_t controller, int index, char *out, int out_len);
int ns_documentcontroller_display_name_for_type(uintptr_t controller, const char *type_name, char *out, int out_len);
int ns_documentcontroller_recent_document_urls_count(uintptr_t controller);
int ns_documentcontroller_recent_document_url_at(uintptr_t controller, int index, char *out, int out_len);
void ns_documentcontroller_note_new_recent_document(uintptr_t controller, uintptr_t document);
void ns_documentcontroller_note_new_recent_document_url(uintptr_t controller, const char *url);
void ns_documentcontroller_clear_recent_documents(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DOCUMENTCONTROLLER_H */
