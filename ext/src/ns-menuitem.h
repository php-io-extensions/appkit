#ifndef PHP_APPKIT_NS_MENUITEM_H
#define PHP_APPKIT_NS_MENUITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_menuitem_create(const char *title, const char *key_equivalent);
uintptr_t ns_menuitem_separator(void);
uintptr_t ns_menuitem_section_header(const char *title);
uintptr_t ns_menuitem_wrap(void *item);
void ns_menuitem_destroy(uintptr_t item);
void *ns_menuitem_nsmenuitem(uintptr_t item);
void ns_menuitem_set_title(uintptr_t item, const char *title);
int ns_menuitem_get_title(uintptr_t item, char *out, int out_len);
void ns_menuitem_set_subtitle(uintptr_t item, const char *subtitle);
int ns_menuitem_get_subtitle(uintptr_t item, char *out, int out_len);
void ns_menuitem_set_key_equivalent(uintptr_t item, const char *key);
int ns_menuitem_get_key_equivalent(uintptr_t item, char *out, int out_len);
void ns_menuitem_set_enabled(uintptr_t item, int flag);
int ns_menuitem_is_enabled(uintptr_t item);
void ns_menuitem_set_hidden(uintptr_t item, int flag);
int ns_menuitem_is_hidden(uintptr_t item);
void ns_menuitem_set_state(uintptr_t item, int state);
int ns_menuitem_get_state(uintptr_t item);
void ns_menuitem_set_tag(uintptr_t item, int tag);
int ns_menuitem_get_tag(uintptr_t item);
void ns_menuitem_set_tool_tip(uintptr_t item, const char *tip);
int ns_menuitem_get_tool_tip(uintptr_t item, char *out, int out_len);
void ns_menuitem_set_indentation_level(uintptr_t item, int level);
int ns_menuitem_get_indentation_level(uintptr_t item);
void ns_menuitem_set_represented_object(uintptr_t item, const char *token);
int ns_menuitem_get_represented_object(uintptr_t item, char *out, int out_len);
void ns_menuitem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_menuitem_view(uintptr_t item);
int ns_menuitem_is_separator(uintptr_t item);
int ns_menuitem_is_section_header(uintptr_t item);
int ns_menuitem_has_submenu(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_MENUITEM_H */
