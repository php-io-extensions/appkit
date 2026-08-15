#ifndef PHP_APPKIT_NS_POPUPBUTTONCELL_H
#define PHP_APPKIT_NS_POPUPBUTTONCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_popupbuttoncell_create_text(const char *string, int pulls_down);
uintptr_t ns_popupbuttoncell_wrap(void *cell);
void ns_popupbuttoncell_destroy(uintptr_t cell);
void *ns_popupbuttoncell_nspopupbuttoncell(uintptr_t cell);

void ns_popupbuttoncell_set_title(uintptr_t cell, const char *title);
int ns_popupbuttoncell_get_title(uintptr_t cell, char *out, int out_len);
void ns_popupbuttoncell_set_menu(uintptr_t cell, uintptr_t menu);
uintptr_t ns_popupbuttoncell_get_menu(uintptr_t cell);
void ns_popupbuttoncell_set_pulls_down(uintptr_t cell, int flag);
int ns_popupbuttoncell_pulls_down(uintptr_t cell);
void ns_popupbuttoncell_set_autoenables_items(uintptr_t cell, int flag);
int ns_popupbuttoncell_autoenables_items(uintptr_t cell);
void ns_popupbuttoncell_set_uses_item_from_menu(uintptr_t cell, int flag);
int ns_popupbuttoncell_uses_item_from_menu(uintptr_t cell);
void ns_popupbuttoncell_set_alters_state_of_selected_item(uintptr_t cell, int flag);
int ns_popupbuttoncell_alters_state_of_selected_item(uintptr_t cell);
void ns_popupbuttoncell_add_item_with_title(uintptr_t cell, const char *title);
void ns_popupbuttoncell_remove_all_items(uintptr_t cell);
int ns_popupbuttoncell_number_of_items(uintptr_t cell);
void ns_popupbuttoncell_select_item_at_index(uintptr_t cell, int index);
int ns_popupbuttoncell_index_of_selected_item(uintptr_t cell);
int ns_popupbuttoncell_title_of_selected_item(uintptr_t cell, char *out, int out_len);
void ns_popupbuttoncell_set_arrow_position(uintptr_t cell, int position);
int ns_popupbuttoncell_get_arrow_position(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_POPUPBUTTONCELL_H */
