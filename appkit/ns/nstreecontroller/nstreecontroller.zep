namespace AppKit\NS\NSTreeController;

%{
#include "ns-treecontroller.h"
#include <stdint.h>
}%

/**
 * NSTreeController — hierarchical Cocoa bindings controller with index-path selection.
 */
class NSTreeController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_treecontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsTreeControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_treecontroller_wrap((void *)(uintptr_t) nsTreeControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_treecontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsTreeController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_treecontroller_nstreecontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function discardEditing(int controller) -> void
    {
        %{
            ns_treecontroller_discard_editing((uintptr_t) controller);
        }%
    }

    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function rearrangeObjects(int controller) -> void
    {
        %{
            ns_treecontroller_rearrange_objects((uintptr_t) controller);
        }%
    }

    public static function arrangedObjectsRootNode(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_treecontroller_arranged_objects_root_node((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setChildrenKeyPath(int controller, string path) -> void
    {
        %{
            ns_treecontroller_set_children_key_path((uintptr_t) controller, Z_STRVAL(path));
        }%
    }

    public static function childrenKeyPath(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_children_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setCountKeyPath(int controller, string path) -> void
    {
        %{
            ns_treecontroller_set_count_key_path((uintptr_t) controller, Z_STRVAL(path));
        }%
    }

    public static function countKeyPath(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_count_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setLeafKeyPath(int controller, string path) -> void
    {
        %{
            ns_treecontroller_set_leaf_key_path((uintptr_t) controller, Z_STRVAL(path));
        }%
    }

    public static function leafKeyPath(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_leaf_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setContent(int controller, int contentPtr) -> void
    {
        %{
            ns_treecontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        }%
    }

    public static function content(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_treecontroller_content((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function canInsert(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_can_insert((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canInsertChild(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_can_insert_child((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canAddChild(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_can_add_child((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setAvoidsEmptySelection(int controller, bool value) -> void
    {
        %{
            ns_treecontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function avoidsEmptySelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setPreservesSelection(int controller, bool value) -> void
    {
        %{
            ns_treecontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function preservesSelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_preserves_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setSelectsInsertedObjects(int controller, bool value) -> void
    {
        %{
            ns_treecontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function selectsInsertedObjects(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setAlwaysUsesMultipleValuesMarker(int controller, bool value) -> void
    {
        %{
            ns_treecontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function alwaysUsesMultipleValuesMarker(int controller) -> bool
    {
        bool result;
        %{
            result = ns_treecontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function selectedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_treecontroller_selected_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_treecontroller_selected_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function selectedNodesCount(int controller) -> int
    {
        int count;
        %{
            count = ns_treecontroller_selected_nodes_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectedNodeAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_treecontroller_selected_node_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function setSelectionIndexPath(int controller, array indexes) -> bool
    {
        bool result;
        %{
            zval *item;
            int cindexes[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                cindexes[count++] = (int) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            result = ns_treecontroller_set_selection_index_path((uintptr_t) controller, cindexes, count) == 1;
        }%
        return result;
    }

    public static function selectionIndexPathLength(int controller) -> int
    {
        int length;
        %{
            length = ns_treecontroller_selection_index_path_length((uintptr_t) controller);
        }%
        return length;
    }

    public static function selectionIndexPathComponentAt(int controller, int index) -> int
    {
        int component;
        %{
            component = ns_treecontroller_selection_index_path_component_at((uintptr_t) controller, (int) index);
        }%
        return component;
    }

    public static function insertObjectAtArrangedObjectIndexPath(int controller, int objectPtr, array indexes) -> void
    {
        %{
            zval *item;
            int cindexes[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                cindexes[count++] = (int) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_treecontroller_insert_object_at_arranged_object_index_path((uintptr_t) controller, (void *)(uintptr_t) objectPtr, cindexes, count);
        }%
    }

    public static function removeObjectAtArrangedObjectIndexPath(int controller, array indexes) -> void
    {
        %{
            zval *item;
            int cindexes[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                cindexes[count++] = (int) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_treecontroller_remove_object_at_arranged_object_index_path((uintptr_t) controller, cindexes, count);
        }%
    }
}
