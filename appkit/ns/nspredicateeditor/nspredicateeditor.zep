namespace AppKit\NS\NSPredicateEditor;

%{
#include "ns-predicateeditor.h"
#include <stdint.h>
}%


/**
 * NSPredicateEditor rule-based predicate UI.
 */
class NSPredicateEditor
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_predicateeditor_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int editor) -> void
    {
        %{
            ns_predicateeditor_destroy((uintptr_t) editor);
        }%
    }
    public static function setEditable(int editor, bool flag) -> void
    {
        %{
            ns_predicateeditor_set_editable((uintptr_t) editor, flag ? 1 : 0);
        }%
    }
    public static function isEditable(int editor) -> bool
    {
        bool result;
        %{
            result = ns_predicateeditor_is_editable((uintptr_t) editor) == 1;
        }%
        return result;
    }
    public static function numberOfRows(int editor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_predicateeditor_number_of_rows((uintptr_t) editor);
        }%
        return value;
    }
    public static function addRow(int editor) -> void
    {
        %{
            ns_predicateeditor_add_row((uintptr_t) editor);
        }%
    }
    public static function removeRowAt(int editor, int index) -> void
    {
        %{
            ns_predicateeditor_remove_row_at((uintptr_t) editor, (int) index);
        }%
    }
    public static function setNestingMode(int editor, int mode) -> void
    {
        %{
            ns_predicateeditor_set_nesting_mode((uintptr_t) editor, (int) mode);
        }%
    }
    public static function getNestingMode(int editor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_predicateeditor_get_nesting_mode((uintptr_t) editor);
        }%
        return value;
    }
    public static function setCanRemoveAllRows(int editor, bool flag) -> void
    {
        %{
            ns_predicateeditor_set_can_remove_all_rows((uintptr_t) editor, flag ? 1 : 0);
        }%
    }
    public static function canRemoveAllRows(int editor) -> bool
    {
        bool result;
        %{
            result = ns_predicateeditor_can_remove_all_rows((uintptr_t) editor) == 1;
        }%
        return result;
    }
}
