namespace AppKit\NS\NSArrayController;

%{
#include "ns-arraycontroller.h"
#include <stdint.h>
}%

/**
 * NSArrayController — array Cocoa bindings controller with arranged objects and selection.
 */
class NSArrayController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_arraycontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsArrayControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_arraycontroller_wrap((void *)(uintptr_t) nsArrayControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_arraycontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsArrayController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_nsarraycontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function discardEditing(int controller) -> void
    {
        %{
            ns_arraycontroller_discard_editing((uintptr_t) controller);
        }%
    }

    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setContent(int controller, int contentPtr) -> void
    {
        %{
            ns_arraycontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        }%
    }

    public static function content(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_content((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setEditable(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function isEditable(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_is_editable((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canAdd(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_can_add((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canRemove(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_can_remove((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function prepareContent(int controller) -> void
    {
        %{
            ns_arraycontroller_prepare_content((uintptr_t) controller);
        }%
    }

    public static function newObject(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_new_object((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function selectedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_arraycontroller_selected_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_selected_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function rearrangeObjects(int controller) -> void
    {
        %{
            ns_arraycontroller_rearrange_objects((uintptr_t) controller);
        }%
    }

    public static function setAutomaticallyRearrangesObjects(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_automatically_rearranges_objects((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function automaticallyRearrangesObjects(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_automatically_rearranges_objects((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function automaticRearrangementKeyPathsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_arraycontroller_automatic_rearrangement_key_paths_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function automaticRearrangementKeyPathAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_arraycontroller_automatic_rearrangement_key_path_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function didChangeArrangementCriteria(int controller) -> void
    {
        %{
            ns_arraycontroller_did_change_arrangement_criteria((uintptr_t) controller);
        }%
    }

    public static function setClearsFilterPredicateOnInsertion(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_clears_filter_predicate_on_insertion((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function clearsFilterPredicateOnInsertion(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_clears_filter_predicate_on_insertion((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function arrangedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_arraycontroller_arranged_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function arrangedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_arranged_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function setAvoidsEmptySelection(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function avoidsEmptySelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setPreservesSelection(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function preservesSelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_preserves_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setSelectsInsertedObjects(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function selectsInsertedObjects(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setAlwaysUsesMultipleValuesMarker(int controller, bool value) -> void
    {
        %{
            ns_arraycontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function alwaysUsesMultipleValuesMarker(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setSelectionIndex(int controller, int index) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_set_selection_index((uintptr_t) controller, (int) index) == 1;
        }%
        return result;
    }

    public static function selectionIndex(int controller) -> int
    {
        int index;
        %{
            index = ns_arraycontroller_selection_index((uintptr_t) controller);
        }%
        return index;
    }

    public static function setSelectionIndexes(int controller, array indexes) -> bool
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
            result = ns_arraycontroller_set_selection_indexes((uintptr_t) controller, cindexes, count) == 1;
        }%
        return result;
    }

    public static function selectionIndexesCount(int controller) -> int
    {
        int count;
        %{
            count = ns_arraycontroller_selection_indexes_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectionIndexAtOrdinal(int controller, int ordinal) -> int
    {
        int index;
        %{
            index = ns_arraycontroller_selection_index_at_ordinal((uintptr_t) controller, (int) ordinal);
        }%
        return index;
    }

    public static function canInsert(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_can_insert((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canSelectNext(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_can_select_next((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canSelectPrevious(int controller) -> bool
    {
        bool result;
        %{
            result = ns_arraycontroller_can_select_previous((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function insertObjectAtArrangedObjectIndex(int controller, int objectPtr, int index) -> void
    {
        %{
            ns_arraycontroller_insert_object_at_arranged_object_index((uintptr_t) controller, (void *)(uintptr_t) objectPtr, (int) index);
        }%
    }

    public static function removeObjectAtArrangedObjectIndex(int controller, int index) -> void
    {
        %{
            ns_arraycontroller_remove_object_at_arranged_object_index((uintptr_t) controller, (int) index);
        }%
    }

    public static function addObject(int controller, int objectPtr) -> void
    {
        %{
            ns_arraycontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }

    public static function removeObject(int controller, int objectPtr) -> void
    {
        %{
            ns_arraycontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }
}
