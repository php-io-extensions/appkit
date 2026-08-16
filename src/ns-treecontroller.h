#ifndef PHP_APPKIT_NS_TREECONTROLLER_H
#define PHP_APPKIT_NS_TREECONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_treecontroller_create(void);
uintptr_t ns_treecontroller_wrap(void *controller);
void ns_treecontroller_destroy(uintptr_t controller);
void *ns_treecontroller_nstreecontroller(uintptr_t controller);
void ns_treecontroller_discard_editing(uintptr_t controller);
int ns_treecontroller_commit_editing(uintptr_t controller);
int ns_treecontroller_is_editing(uintptr_t controller);
void ns_treecontroller_rearrange_objects(uintptr_t controller);
void *ns_treecontroller_arranged_objects_root_node(uintptr_t controller);
void ns_treecontroller_set_children_key_path(uintptr_t controller, const char *path);
int ns_treecontroller_children_key_path(uintptr_t controller, char *out, int out_len);
void ns_treecontroller_set_count_key_path(uintptr_t controller, const char *path);
int ns_treecontroller_count_key_path(uintptr_t controller, char *out, int out_len);
void ns_treecontroller_set_leaf_key_path(uintptr_t controller, const char *path);
int ns_treecontroller_leaf_key_path(uintptr_t controller, char *out, int out_len);
void ns_treecontroller_set_content(uintptr_t controller, void *content);
void *ns_treecontroller_content(uintptr_t controller);
int ns_treecontroller_can_insert(uintptr_t controller);
int ns_treecontroller_can_insert_child(uintptr_t controller);
int ns_treecontroller_can_add_child(uintptr_t controller);
void ns_treecontroller_set_avoids_empty_selection(uintptr_t controller, int value);
int ns_treecontroller_avoids_empty_selection(uintptr_t controller);
void ns_treecontroller_set_preserves_selection(uintptr_t controller, int value);
int ns_treecontroller_preserves_selection(uintptr_t controller);
void ns_treecontroller_set_selects_inserted_objects(uintptr_t controller, int value);
int ns_treecontroller_selects_inserted_objects(uintptr_t controller);
void ns_treecontroller_set_always_uses_multiple_values_marker(uintptr_t controller, int value);
int ns_treecontroller_always_uses_multiple_values_marker(uintptr_t controller);
int ns_treecontroller_selected_objects_count(uintptr_t controller);
void *ns_treecontroller_selected_object_at(uintptr_t controller, int index);
int ns_treecontroller_selected_nodes_count(uintptr_t controller);
void *ns_treecontroller_selected_node_at(uintptr_t controller, int index);
int ns_treecontroller_set_selection_index_path(uintptr_t controller, const int *indexes, int count);
int ns_treecontroller_selection_index_path_length(uintptr_t controller);
int ns_treecontroller_selection_index_path_component_at(uintptr_t controller, int index);
void ns_treecontroller_insert_object_at_arranged_object_index_path(uintptr_t controller, void *object, const int *indexes, int count);
void ns_treecontroller_remove_object_at_arranged_object_index_path(uintptr_t controller, const int *indexes, int count);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TREECONTROLLER_H */
