#ifndef PHP_APPKIT_NS_SEARCHFIELDCELL_H
#define PHP_APPKIT_NS_SEARCHFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_searchfieldcell_create_text(const char *string);
uintptr_t ns_searchfieldcell_wrap(void *cell);
void ns_searchfieldcell_destroy(uintptr_t cell);
void *ns_searchfieldcell_nssearchfieldcell(uintptr_t cell);

void ns_searchfieldcell_set_title(uintptr_t cell, const char *title);
int ns_searchfieldcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_string(uintptr_t cell, const char *value);
int ns_searchfieldcell_get_string(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder);
int ns_searchfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);

void ns_searchfieldcell_set_recent_searches(uintptr_t cell, const char **items, int count);
int ns_searchfieldcell_recent_searches_count(uintptr_t cell);
int ns_searchfieldcell_recent_search_at(uintptr_t cell, int index, char *out, int out_len);
void ns_searchfieldcell_set_recents_autosave_name(uintptr_t cell, const char *name);
int ns_searchfieldcell_get_recents_autosave_name(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_sends_whole_search_string(uintptr_t cell, int flag);
int ns_searchfieldcell_sends_whole_search_string(uintptr_t cell);
void ns_searchfieldcell_set_maximum_recents(uintptr_t cell, int maximum);
int ns_searchfieldcell_maximum_recents(uintptr_t cell);
void ns_searchfieldcell_set_sends_search_string_immediately(uintptr_t cell, int flag);
int ns_searchfieldcell_sends_search_string_immediately(uintptr_t cell);

uintptr_t ns_searchfieldcell_search_button_cell(uintptr_t cell);
uintptr_t ns_searchfieldcell_cancel_button_cell(uintptr_t cell);
void ns_searchfieldcell_reset_search_button_cell(uintptr_t cell);
void ns_searchfieldcell_reset_cancel_button_cell(uintptr_t cell);
void ns_searchfieldcell_set_search_menu_template(uintptr_t cell, uintptr_t menu);
uintptr_t ns_searchfieldcell_search_menu_template(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELDCELL_H */
