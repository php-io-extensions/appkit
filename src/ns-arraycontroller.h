#ifndef PHP_APPKIT_NS_ARRAYCONTROLLER_H
#define PHP_APPKIT_NS_ARRAYCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_arraycontroller_create(void);
uintptr_t ns_arraycontroller_wrap(void *controller);
void ns_arraycontroller_destroy(uintptr_t controller);
void *ns_arraycontroller_nsarraycontroller(uintptr_t controller);
void ns_arraycontroller_discard_editing(uintptr_t controller);
int ns_arraycontroller_commit_editing(uintptr_t controller);
int ns_arraycontroller_is_editing(uintptr_t controller);
void ns_arraycontroller_set_content(uintptr_t controller, void *content);
void *ns_arraycontroller_content(uintptr_t controller);
void ns_arraycontroller_set_editable(uintptr_t controller, int value);
int ns_arraycontroller_is_editable(uintptr_t controller);
int ns_arraycontroller_can_add(uintptr_t controller);
int ns_arraycontroller_can_remove(uintptr_t controller);
void ns_arraycontroller_prepare_content(uintptr_t controller);
void *ns_arraycontroller_new_object(uintptr_t controller);
int ns_arraycontroller_selected_objects_count(uintptr_t controller);
void *ns_arraycontroller_selected_object_at(uintptr_t controller, int index);
void ns_arraycontroller_rearrange_objects(uintptr_t controller);
void ns_arraycontroller_set_automatically_rearranges_objects(uintptr_t controller, int value);
int ns_arraycontroller_automatically_rearranges_objects(uintptr_t controller);
int ns_arraycontroller_automatic_rearrangement_key_paths_count(uintptr_t controller);
int ns_arraycontroller_automatic_rearrangement_key_path_at(uintptr_t controller, int index, char *out, int out_len);
void ns_arraycontroller_did_change_arrangement_criteria(uintptr_t controller);
void ns_arraycontroller_set_clears_filter_predicate_on_insertion(uintptr_t controller, int value);
int ns_arraycontroller_clears_filter_predicate_on_insertion(uintptr_t controller);
int ns_arraycontroller_arranged_objects_count(uintptr_t controller);
void *ns_arraycontroller_arranged_object_at(uintptr_t controller, int index);
void ns_arraycontroller_set_avoids_empty_selection(uintptr_t controller, int value);
int ns_arraycontroller_avoids_empty_selection(uintptr_t controller);
void ns_arraycontroller_set_preserves_selection(uintptr_t controller, int value);
int ns_arraycontroller_preserves_selection(uintptr_t controller);
void ns_arraycontroller_set_selects_inserted_objects(uintptr_t controller, int value);
int ns_arraycontroller_selects_inserted_objects(uintptr_t controller);
void ns_arraycontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value);
int ns_arraycontroller_always_uses_multiple_values_marker(uintptr_t controller);
int ns_arraycontroller_set_selection_index(uintptr_t controller, int index);
int ns_arraycontroller_selection_index(uintptr_t controller);
int ns_arraycontroller_set_selection_indexes(uintptr_t controller, const int *indexes, int count);
int ns_arraycontroller_selection_indexes_count(uintptr_t controller);
int ns_arraycontroller_selection_index_at_ordinal(uintptr_t controller, int ordinal);
int ns_arraycontroller_can_insert(uintptr_t controller);
int ns_arraycontroller_can_select_next(uintptr_t controller);
int ns_arraycontroller_can_select_previous(uintptr_t controller);
void ns_arraycontroller_insert_object_at_arranged_object_index(uintptr_t controller, void *object, int index);
void ns_arraycontroller_remove_object_at_arranged_object_index(uintptr_t controller, int index);
void ns_arraycontroller_add_object(uintptr_t controller, void *object);
void ns_arraycontroller_remove_object(uintptr_t controller, void *object);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ARRAYCONTROLLER_H */
