#ifndef PHP_APPKIT_NS_PASTEBOARDITEM_H
#define PHP_APPKIT_NS_PASTEBOARDITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pasteboarditem_create(void);
uintptr_t ns_pasteboarditem_wrap(void *item);
void ns_pasteboarditem_destroy(uintptr_t item);
void *ns_pasteboarditem_nspasteboarditem(uintptr_t item);
int ns_pasteboarditem_types_count(uintptr_t item);
int ns_pasteboarditem_type_at(uintptr_t item, int index, char *out, int out_len);
int ns_pasteboarditem_available_type_from_array(uintptr_t item, const char **types, int count, char *out, int out_len);
int ns_pasteboarditem_set_string(uintptr_t item, const char *string, const char *type);
int ns_pasteboarditem_string_for_type(uintptr_t item, const char *type, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PASTEBOARDITEM_H */
