#ifndef PHP_APPKIT_NS_PASTEBOARD_H
#define PHP_APPKIT_NS_PASTEBOARD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pasteboard_general(void);
uintptr_t ns_pasteboard_with_name(const char *name);
uintptr_t ns_pasteboard_with_unique_name(void);
uintptr_t ns_pasteboard_wrap(void *pasteboard);
void ns_pasteboard_destroy(uintptr_t pasteboard);
void *ns_pasteboard_nspasteboard(uintptr_t pasteboard);
int ns_pasteboard_name(uintptr_t pasteboard, char *out, int out_len);
long long ns_pasteboard_change_count(uintptr_t pasteboard);
long long ns_pasteboard_clear_contents(uintptr_t pasteboard);
int ns_pasteboard_write_strings(uintptr_t pasteboard, const char **items, int count, const char *type);
int ns_pasteboard_string_for_type(uintptr_t pasteboard, const char *type, char *out, int out_len);
int ns_pasteboard_set_string(uintptr_t pasteboard, const char *string, const char *type);
int ns_pasteboard_types_count(uintptr_t pasteboard);
int ns_pasteboard_type_at(uintptr_t pasteboard, int index, char *out, int out_len);
int ns_pasteboard_can_read_types(uintptr_t pasteboard, const char **types, int count);
int ns_pasteboard_items_count(uintptr_t pasteboard);
uintptr_t ns_pasteboard_item_at(uintptr_t pasteboard, int index);
int ns_pasteboard_access_behavior(uintptr_t pasteboard);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PASTEBOARD_H */
