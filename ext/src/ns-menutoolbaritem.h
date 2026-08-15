#ifndef PHP_APPKIT_NS_MENUTOOLBARITEM_H
#define PHP_APPKIT_NS_MENUTOOLBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_menutoolbaritem_create(const char *identifier);
uintptr_t ns_menutoolbaritem_wrap(void *item);
void ns_menutoolbaritem_destroy(uintptr_t item);
void *ns_menutoolbaritem_nsmenutoolbaritem(uintptr_t item);
void ns_menutoolbaritem_set_shows_indicator(uintptr_t item, int flag);
int ns_menutoolbaritem_shows_indicator(uintptr_t item);
void ns_menutoolbaritem_set_label(uintptr_t item, const char *label);
int ns_menutoolbaritem_get_label(uintptr_t item, char *out, int out_len);
void ns_menutoolbaritem_set_tool_tip(uintptr_t item, const char *tip);
int ns_menutoolbaritem_get_tool_tip(uintptr_t item, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MENUTOOLBARITEM_H */
