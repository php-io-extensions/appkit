#ifndef PHP_APPKIT_NS_TOOLBARITEM_H
#define PHP_APPKIT_NS_TOOLBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_toolbaritem_create(const char *identifier);
uintptr_t ns_toolbaritem_wrap(void *item);
void ns_toolbaritem_destroy(uintptr_t item);
void *ns_toolbaritem_nstoolbaritem(uintptr_t item);
int ns_toolbaritem_get_item_identifier(uintptr_t item, char *out, int out_len);
void ns_toolbaritem_set_label(uintptr_t item, const char *label);
int ns_toolbaritem_get_label(uintptr_t item, char *out, int out_len);
void ns_toolbaritem_set_palette_label(uintptr_t item, const char *label);
int ns_toolbaritem_get_palette_label(uintptr_t item, char *out, int out_len);
void ns_toolbaritem_set_tool_tip(uintptr_t item, const char *tip);
int ns_toolbaritem_get_tool_tip(uintptr_t item, char *out, int out_len);
void ns_toolbaritem_set_tag(uintptr_t item, int tag);
int ns_toolbaritem_get_tag(uintptr_t item);
void ns_toolbaritem_set_enabled(uintptr_t item, int flag);
int ns_toolbaritem_is_enabled(uintptr_t item);
void ns_toolbaritem_set_title(uintptr_t item, const char *title);
int ns_toolbaritem_get_title(uintptr_t item, char *out, int out_len);
void ns_toolbaritem_set_bordered(uintptr_t item, int flag);
int ns_toolbaritem_is_bordered(uintptr_t item);
void ns_toolbaritem_set_navigational(uintptr_t item, int flag);
int ns_toolbaritem_is_navigational(uintptr_t item);
void ns_toolbaritem_set_hidden(uintptr_t item, int flag);
int ns_toolbaritem_is_hidden(uintptr_t item);
void ns_toolbaritem_set_visibility_priority(uintptr_t item, int priority);
int ns_toolbaritem_get_visibility_priority(uintptr_t item);
void ns_toolbaritem_set_autovalidates(uintptr_t item, int flag);
int ns_toolbaritem_autovalidates(uintptr_t item);
int ns_toolbaritem_is_visible(uintptr_t item);
void ns_toolbaritem_set_image(uintptr_t item, uintptr_t image);
void ns_toolbaritem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_toolbaritem_get_view(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOOLBARITEM_H */
