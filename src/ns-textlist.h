#ifndef PHP_APPKIT_NS_TEXTLIST_H
#define PHP_APPKIT_NS_TEXTLIST_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlist_create(const char *marker_format, int options, int starting_item_number);
uintptr_t ns_textlist_wrap(void *list);
void ns_textlist_destroy(uintptr_t list);
void *ns_textlist_nstextlist(uintptr_t list);

int ns_textlist_marker_for_item_number(uintptr_t list, int item_number, char *out, int out_len);
int ns_textlist_is_ordered(uintptr_t list);
void ns_textlist_set_starting_item_number(uintptr_t list, int number);
int ns_textlist_get_starting_item_number(uintptr_t list);
int ns_textlist_get_marker_format(uintptr_t list, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLIST_H */
