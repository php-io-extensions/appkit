#ifndef PHP_APPKIT_NS_TOUCHBAR_H
#define PHP_APPKIT_NS_TOUCHBAR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_touchbar_create(void);
uintptr_t ns_touchbar_wrap(void *bar);
void ns_touchbar_destroy(uintptr_t bar);
void *ns_touchbar_nstouchbar(uintptr_t bar);

void ns_touchbar_set_customization_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_customization_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_default_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_default_item_identifiers_count(uintptr_t bar);
int ns_touchbar_default_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_customization_allowed_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_customization_allowed_item_identifiers_count(uintptr_t bar);
int ns_touchbar_customization_allowed_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_customization_required_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_customization_required_item_identifiers_count(uintptr_t bar);
int ns_touchbar_customization_required_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_principal_item_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_principal_item_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_escape_key_replacement_item_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_escape_key_replacement_item_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_template_items(uintptr_t bar, const uintptr_t *items, int count);
int ns_touchbar_item_identifiers_count(uintptr_t bar);
int ns_touchbar_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
uintptr_t ns_touchbar_item_for_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_is_visible(uintptr_t bar);
void ns_touchbar_assign_to_responder(uintptr_t bar, uintptr_t responder);
uintptr_t ns_touchbar_from_responder(uintptr_t responder);
void ns_touchbar_set_automatic_customize_menu_item_enabled(int enabled);
int ns_touchbar_is_automatic_customize_menu_item_enabled(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOUCHBAR_H */
