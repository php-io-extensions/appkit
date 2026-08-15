#ifndef PHP_APPKIT_NS_TEXTCONTENTMANAGER_H
#define PHP_APPKIT_NS_TEXTCONTENTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcontentmanager_create(void);
uintptr_t ns_textcontentmanager_wrap(void *manager);
void ns_textcontentmanager_destroy(uintptr_t manager);
void *ns_textcontentmanager_nstextcontentmanager(uintptr_t manager);

void ns_textcontentmanager_add_text_layout_manager(uintptr_t manager, uintptr_t layout_manager);
void ns_textcontentmanager_remove_text_layout_manager(uintptr_t manager, uintptr_t layout_manager);
int ns_textcontentmanager_text_layout_managers_count(uintptr_t manager);
int ns_textcontentmanager_has_editing_transaction(uintptr_t manager);
int ns_textcontentmanager_automatically_synchronizes_text_layout_managers(uintptr_t manager);
void ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers(uintptr_t manager, int flag);
int ns_textcontentmanager_automatically_synchronizes_to_backing_store(uintptr_t manager);
void ns_textcontentmanager_set_automatically_synchronizes_to_backing_store(uintptr_t manager, int flag);
uintptr_t ns_textcontentmanager_document_range_ptr(uintptr_t manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTENTMANAGER_H */
