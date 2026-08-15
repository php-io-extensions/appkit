#ifndef PHP_APPKIT_NS_TEXTSTORAGE_H
#define PHP_APPKIT_NS_TEXTSTORAGE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTSTORAGE_EDITED_ATTRIBUTES = 1,
    NS_TEXTSTORAGE_EDITED_CHARACTERS = 2
} ns_textstorage_edit_action;

uintptr_t ns_textstorage_create(const char *string);
uintptr_t ns_textstorage_wrap(void *storage);
void ns_textstorage_destroy(uintptr_t storage);
void *ns_textstorage_nstextstorage(uintptr_t storage);

void ns_textstorage_set_string(uintptr_t storage, const char *value);
int ns_textstorage_get_string(uintptr_t storage, char *out, int out_len);
void ns_textstorage_add_layout_manager(uintptr_t storage, uintptr_t manager);
void ns_textstorage_remove_layout_manager(uintptr_t storage, uintptr_t manager);
int ns_textstorage_layout_managers_count(uintptr_t storage);
int ns_textstorage_edited_mask(uintptr_t storage);
void ns_textstorage_get_edited_range(uintptr_t storage, int *location, int *length);
int ns_textstorage_change_in_length(uintptr_t storage);
void ns_textstorage_begin_editing(uintptr_t storage);
void ns_textstorage_end_editing(uintptr_t storage);
void ns_textstorage_process_editing(uintptr_t storage);
void ns_textstorage_set_fixes_attributes_lazily(uintptr_t storage, int flag);
int ns_textstorage_fixes_attributes_lazily(uintptr_t storage);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTSTORAGE_H */
