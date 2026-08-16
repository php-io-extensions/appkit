#ifndef PHP_APPKIT_NS_DICTIONARYCONTROLLER_H
#define PHP_APPKIT_NS_DICTIONARYCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_dictionarycontroller_create(void);
uintptr_t ns_dictionarycontroller_wrap(void *controller);
void ns_dictionarycontroller_destroy(uintptr_t controller);
void *ns_dictionarycontroller_nsdictionarycontroller(uintptr_t controller);
void ns_dictionarycontroller_discard_editing(uintptr_t controller);
int ns_dictionarycontroller_commit_editing(uintptr_t controller);
int ns_dictionarycontroller_is_editing(uintptr_t controller);

void ns_dictionarycontroller_rearrange_objects(uintptr_t controller);
void ns_dictionarycontroller_set_automatically_rearranges_objects(uintptr_t controller, int value);
int ns_dictionarycontroller_automatically_rearranges_objects(uintptr_t controller);
int ns_dictionarycontroller_automatic_rearrangement_key_paths_count(uintptr_t controller);
int ns_dictionarycontroller_automatic_rearrangement_key_path_at(uintptr_t controller, int index, char *out, int out_len);
void ns_dictionarycontroller_did_change_arrangement_criteria(uintptr_t controller);
void ns_dictionarycontroller_set_clears_filter_predicate_on_insertion(uintptr_t controller, int value);
int ns_dictionarycontroller_clears_filter_predicate_on_insertion(uintptr_t controller);
int ns_dictionarycontroller_arranged_objects_count(uintptr_t controller);
void *ns_dictionarycontroller_arranged_object_at(uintptr_t controller, int index);

void ns_dictionarycontroller_set_avoids_empty_selection(uintptr_t controller, int value);
int ns_dictionarycontroller_avoids_empty_selection(uintptr_t controller);
void ns_dictionarycontroller_set_preserves_selection(uintptr_t controller, int value);
int ns_dictionarycontroller_preserves_selection(uintptr_t controller);
void ns_dictionarycontroller_set_selects_inserted_objects(uintptr_t controller, int value);
int ns_dictionarycontroller_selects_inserted_objects(uintptr_t controller);
void ns_dictionarycontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value);
int ns_dictionarycontroller_always_uses_multiple_values_marker(uintptr_t controller);

int ns_dictionarycontroller_set_selection_index(uintptr_t controller, int index);
int ns_dictionarycontroller_selection_index(uintptr_t controller);
int ns_dictionarycontroller_set_selection_indexes(uintptr_t controller, const int *indexes, int count);
int ns_dictionarycontroller_selection_indexes_count(uintptr_t controller);
int ns_dictionarycontroller_selection_index_at_ordinal(uintptr_t controller, int ordinal);

int ns_dictionarycontroller_can_insert(uintptr_t controller);
int ns_dictionarycontroller_can_select_next(uintptr_t controller);
int ns_dictionarycontroller_can_select_previous(uintptr_t controller);
void ns_dictionarycontroller_insert_object_at_arranged_object_index(uintptr_t controller, void *object, int index);
void ns_dictionarycontroller_remove_object_at_arranged_object_index(uintptr_t controller, int index);
void ns_dictionarycontroller_add_object(uintptr_t controller, void *object);
void ns_dictionarycontroller_remove_object(uintptr_t controller, void *object);

void ns_dictionarycontroller_set_content(uintptr_t controller, void *content);
void *ns_dictionarycontroller_content(uintptr_t controller);
void ns_dictionarycontroller_set_editable(uintptr_t controller, int value);
int ns_dictionarycontroller_is_editable(uintptr_t controller);
int ns_dictionarycontroller_can_add(uintptr_t controller);
int ns_dictionarycontroller_can_remove(uintptr_t controller);
void ns_dictionarycontroller_prepare_content(uintptr_t controller);
void *ns_dictionarycontroller_new_object(uintptr_t controller);
int ns_dictionarycontroller_selected_objects_count(uintptr_t controller);
void *ns_dictionarycontroller_selected_object_at(uintptr_t controller, int index);

void ns_dictionarycontroller_set_initial_key(uintptr_t controller, const char *key);
int ns_dictionarycontroller_initial_key(uintptr_t controller, char *out, int out_len);
void ns_dictionarycontroller_set_initial_value(uintptr_t controller, void *value);
void *ns_dictionarycontroller_initial_value(uintptr_t controller);

void ns_dictionarycontroller_set_included_keys(uintptr_t controller, const char **items, int count);
int ns_dictionarycontroller_included_keys_count(uintptr_t controller);
int ns_dictionarycontroller_included_key_at(uintptr_t controller, int index, char *out, int out_len);
void ns_dictionarycontroller_set_excluded_keys(uintptr_t controller, const char **items, int count);
int ns_dictionarycontroller_excluded_keys_count(uintptr_t controller);
int ns_dictionarycontroller_excluded_key_at(uintptr_t controller, int index, char *out, int out_len);

void ns_dictionarycontroller_set_localized_key_dictionary(uintptr_t controller, uintptr_t dictionary);
uintptr_t ns_dictionarycontroller_localized_key_dictionary(uintptr_t controller);
void ns_dictionarycontroller_set_localized_key_table(uintptr_t controller, const char *table);
int ns_dictionarycontroller_localized_key_table(uintptr_t controller, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DICTIONARYCONTROLLER_H */
