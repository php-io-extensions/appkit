namespace AppKit\NS\NSToolbarItemGroup;

%{
#include "ns-toolbaritemgroup.h"
#include <stdint.h>
}%

/** NSToolbarItemGroup — grouped toolbar items (macOS 10.5+, segmented factory 10.15+). */
class NSToolbarItemGroup
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritemgroup_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function groupWithTitles(string identifier, array titles, int selectionMode, var labels = null) -> int
    {
        int handle;
        %{
            zval *item;
            const char *ctitles[256];
            const char *clabels[256];
            int titleCount = 0;
            int labelCount = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(titles), item) {
                if (titleCount >= 256) {
                    break;
                }
                convert_to_string(item);
                ctitles[titleCount++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            if (labels && Z_TYPE_P(labels) == IS_ARRAY) {
                ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(labels), item) {
                    if (labelCount >= 256) {
                        break;
                    }
                    convert_to_string(item);
                    clabels[labelCount++] = Z_STRVAL_P(item);
                } ZEND_HASH_FOREACH_END();
            }
            handle = (zend_long) ns_toolbaritemgroup_group_with_titles(
                Z_STRVAL(identifier),
                ctitles,
                titleCount,
                (int) selectionMode,
                labelCount > 0 ? clabels : NULL,
                labelCount
            );
        }%
        return handle;
    }

    public static function wrap(int nsToolbarItemGroupPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritemgroup_wrap((void *)(uintptr_t) nsToolbarItemGroupPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_toolbaritemgroup_destroy((uintptr_t) item);
        }%
    }

    public static function nsToolbarItemGroup(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_toolbaritemgroup_nstoolbaritemgroup((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setSubitems(int item, array subitems) -> void
    {
        %{
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(subitems), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_toolbaritemgroup_set_subitems((uintptr_t) item, handles, count);
        }%
    }

    public static function subitemsCount(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritemgroup_subitems_count((uintptr_t) item);
        }%
        return value;
    }

    public static function subitemAt(int item, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritemgroup_subitem_at((uintptr_t) item, (int) index);
        }%
        return handle;
    }

    public static function setControlRepresentation(int item, int representation) -> void
    {
        %{
            ns_toolbaritemgroup_set_control_representation((uintptr_t) item, (int) representation);
        }%
    }

    public static function getControlRepresentation(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritemgroup_get_control_representation((uintptr_t) item);
        }%
        return value;
    }

    public static function setSelectionMode(int item, int mode) -> void
    {
        %{
            ns_toolbaritemgroup_set_selection_mode((uintptr_t) item, (int) mode);
        }%
    }

    public static function getSelectionMode(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritemgroup_get_selection_mode((uintptr_t) item);
        }%
        return value;
    }

    public static function setSelectedIndex(int item, int index) -> void
    {
        %{
            ns_toolbaritemgroup_set_selected_index((uintptr_t) item, (int) index);
        }%
    }

    public static function getSelectedIndex(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritemgroup_get_selected_index((uintptr_t) item);
        }%
        return value;
    }

    public static function setSelectedAtIndex(int item, int index, bool flag) -> void
    {
        %{
            ns_toolbaritemgroup_set_selected_at_index((uintptr_t) item, (int) index, flag ? 1 : 0);
        }%
    }

    public static function isSelectedAtIndex(int item, int index) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritemgroup_is_selected_at_index((uintptr_t) item, (int) index) == 1;
        }%
        return result;
    }
}
