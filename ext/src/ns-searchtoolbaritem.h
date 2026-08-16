#ifndef PHP_APPKIT_NS_SEARCHTOOLBARITEM_H
#define PHP_APPKIT_NS_SEARCHTOOLBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_searchtoolbaritem_create(const char *identifier);
uintptr_t ns_searchtoolbaritem_wrap(void *item);
void ns_searchtoolbaritem_destroy(uintptr_t item);
void *ns_searchtoolbaritem_nssearchtoolbaritem(uintptr_t item);
void ns_searchtoolbaritem_set_search_field(uintptr_t item, uintptr_t searchField);
uintptr_t ns_searchtoolbaritem_get_search_field(uintptr_t item);
void ns_searchtoolbaritem_set_resigns_first_responder_with_cancel(uintptr_t item, int flag);
int ns_searchtoolbaritem_resigns_first_responder_with_cancel(uintptr_t item);
void ns_searchtoolbaritem_set_preferred_width_for_search_field(uintptr_t item, double width);
double ns_searchtoolbaritem_preferred_width_for_search_field(uintptr_t item);
void ns_searchtoolbaritem_begin_search_interaction(uintptr_t item);
void ns_searchtoolbaritem_end_search_interaction(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHTOOLBARITEM_H */
