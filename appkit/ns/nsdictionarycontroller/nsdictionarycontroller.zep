namespace AppKit\NS\NSDictionaryController;

%{
#include "ns-dictionarycontroller.h"
#include <stdint.h>
}%

/**
 * NSDictionaryController — Cocoa bindings controller for dictionary content.
 */
class NSDictionaryController
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionarycontroller_create();
        }%
        return handle;
    }

    public static function wrap(int nsDictionaryControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionarycontroller_wrap((void *)(uintptr_t) nsDictionaryControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_dictionarycontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsDictionaryController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_nsdictionarycontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function discardEditing(int controller) -> void
    {
        %{
            ns_dictionarycontroller_discard_editing((uintptr_t) controller);
        }%
    }

    public static function commitEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_commit_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function isEditing(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_is_editing((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function rearrangeObjects(int controller) -> void
    {
        %{
            ns_dictionarycontroller_rearrange_objects((uintptr_t) controller);
        }%
    }

    public static function setAutomaticallyRearrangesObjects(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_automatically_rearranges_objects((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function automaticallyRearrangesObjects(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_automatically_rearranges_objects((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function automaticRearrangementKeyPathsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_automatic_rearrangement_key_paths_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function automaticRearrangementKeyPathAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_automatic_rearrangement_key_path_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function didChangeArrangementCriteria(int controller) -> void
    {
        %{
            ns_dictionarycontroller_did_change_arrangement_criteria((uintptr_t) controller);
        }%
    }

    public static function setClearsFilterPredicateOnInsertion(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_clears_filter_predicate_on_insertion((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function clearsFilterPredicateOnInsertion(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_clears_filter_predicate_on_insertion((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function arrangedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_arranged_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function arrangedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_arranged_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function setAvoidsEmptySelection(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function avoidsEmptySelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setPreservesSelection(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function preservesSelection(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_preserves_selection((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setSelectsInsertedObjects(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function selectsInsertedObjects(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setAlwaysUsesMultipleValuesMarker(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function alwaysUsesMultipleValuesMarker(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function setSelectionIndex(int controller, int index) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_set_selection_index((uintptr_t) controller, (int) index) == 1;
        }%
        return result;
    }

    public static function selectionIndex(int controller) -> int
    {
        int index;
        %{
            index = ns_dictionarycontroller_selection_index((uintptr_t) controller);
        }%
        return index;
    }

    public static function setSelectionIndexes(int controller, array indexes) -> bool
    {
        bool result;
        %{
            int count = (int) zend_hash_num_elements(Z_ARRVAL(indexes));
            if (count <= 0) {
                result = ns_dictionarycontroller_set_selection_indexes((uintptr_t) controller, NULL, 0) == 1;
            } else {
                int *buf = (int *) ecalloc((size_t) count, sizeof(int));
                int n = 0;
                zval *item;
                ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                    if (Z_TYPE_P(item) == IS_LONG) {
                        buf[n++] = (int) Z_LVAL_P(item);
                    } else if (Z_TYPE_P(item) == IS_DOUBLE) {
                        buf[n++] = (int) Z_DVAL_P(item);
                    } else {
                        convert_to_long(item);
                        buf[n++] = (int) Z_LVAL_P(item);
                    }
                } ZEND_HASH_FOREACH_END();
                result = ns_dictionarycontroller_set_selection_indexes((uintptr_t) controller, buf, n) == 1;
                efree(buf);
            }
        }%
        return result;
    }

    public static function selectionIndexesCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_selection_indexes_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectionIndexAtOrdinal(int controller, int ordinal) -> int
    {
        int index;
        %{
            index = ns_dictionarycontroller_selection_index_at_ordinal((uintptr_t) controller, (int) ordinal);
        }%
        return index;
    }

    public static function canInsert(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_can_insert((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canSelectNext(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_can_select_next((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canSelectPrevious(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_can_select_previous((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function insertObjectAtArrangedObjectIndex(int controller, int objectPtr, int index) -> void
    {
        %{
            ns_dictionarycontroller_insert_object_at_arranged_object_index((uintptr_t) controller, (void *)(uintptr_t) objectPtr, (int) index);
        }%
    }

    public static function removeObjectAtArrangedObjectIndex(int controller, int index) -> void
    {
        %{
            ns_dictionarycontroller_remove_object_at_arranged_object_index((uintptr_t) controller, (int) index);
        }%
    }

    public static function addObject(int controller, int objectPtr) -> void
    {
        %{
            ns_dictionarycontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }

    public static function removeObject(int controller, int objectPtr) -> void
    {
        %{
            ns_dictionarycontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        }%
    }

    public static function setContent(int controller, int contentPtr) -> void
    {
        %{
            ns_dictionarycontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        }%
    }

    public static function content(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_content((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setEditable(int controller, bool value) -> void
    {
        %{
            ns_dictionarycontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        }%
    }

    public static function isEditable(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_is_editable((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canAdd(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_can_add((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function canRemove(int controller) -> bool
    {
        bool result;
        %{
            result = ns_dictionarycontroller_can_remove((uintptr_t) controller) == 1;
        }%
        return result;
    }

    public static function prepareContent(int controller) -> void
    {
        %{
            ns_dictionarycontroller_prepare_content((uintptr_t) controller);
        }%
    }

    public static function newObject(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_new_object((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function selectedObjectsCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_selected_objects_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function selectedObjectAt(int controller, int index) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_selected_object_at((uintptr_t) controller, (int) index);
        }%
        return ptr;
    }

    public static function setInitialKey(int controller, string key) -> void
    {
        %{
            ns_dictionarycontroller_set_initial_key((uintptr_t) controller, Z_STRVAL(key));
        }%
    }

    public static function initialKey(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_initial_key((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setInitialValue(int controller, int valuePtr) -> void
    {
        %{
            ns_dictionarycontroller_set_initial_value((uintptr_t) controller, (void *)(uintptr_t) valuePtr);
        }%
    }

    public static function initialValue(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_initial_value((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function setIncludedKeys(int controller, array keys) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(keys), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_dictionarycontroller_set_included_keys((uintptr_t) controller, cnames, count);
        }%
    }

    public static function includedKeysCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_included_keys_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function includedKeyAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_included_key_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setExcludedKeys(int controller, array keys) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(keys), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_dictionarycontroller_set_excluded_keys((uintptr_t) controller, cnames, count);
        }%
    }

    public static function excludedKeysCount(int controller) -> int
    {
        int count;
        %{
            count = ns_dictionarycontroller_excluded_keys_count((uintptr_t) controller);
        }%
        return count;
    }

    public static function excludedKeyAt(int controller, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_excluded_key_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setLocalizedKeyDictionary(int controller, int dictionaryHandle) -> void
    {
        %{
            ns_dictionarycontroller_set_localized_key_dictionary((uintptr_t) controller, (uintptr_t) dictionaryHandle);
        }%
    }

    public static function localizedKeyDictionary(int controller) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionarycontroller_localized_key_dictionary((uintptr_t) controller);
        }%
        return handle;
    }

    public static function setLocalizedKeyTable(int controller, string table) -> void
    {
        %{
            ns_dictionarycontroller_set_localized_key_table((uintptr_t) controller, Z_STRVAL(table));
        }%
    }

    public static function localizedKeyTable(int controller) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_localized_key_table((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
