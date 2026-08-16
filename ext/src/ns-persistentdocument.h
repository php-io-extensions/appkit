#ifndef PHP_APPKIT_NS_PERSISTENTDOCUMENT_H
#define PHP_APPKIT_NS_PERSISTENTDOCUMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_persistentdocument_create(void);
uintptr_t ns_persistentdocument_wrap(void *document);
void ns_persistentdocument_destroy(uintptr_t document);
void *ns_persistentdocument_nspersistentdocument(uintptr_t document);
void *ns_persistentdocument_managed_object_context(uintptr_t document);
void *ns_persistentdocument_managed_object_model(uintptr_t document);
int ns_persistentdocument_persistent_store_type_for_file_type(uintptr_t document, const char *file_type, char *out, int out_len);
int ns_persistentdocument_read_from_url(uintptr_t document, const char *url, const char *type_name);
int ns_persistentdocument_write_to_url(uintptr_t document, const char *url, const char *type_name, unsigned save_operation, const char *original_url);
int ns_persistentdocument_revert_to_contents_of_url(uintptr_t document, const char *url, const char *type_name);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PERSISTENTDOCUMENT_H */
