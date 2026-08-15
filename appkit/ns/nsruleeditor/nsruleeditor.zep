namespace AppKit\NS\NSRuleEditor;

%{
#include "ns-ruleeditor.h"
#include <stdint.h>
}%


/**
 * NSRuleEditor row-based criteria editor.
 */
class NSRuleEditor
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_ruleeditor_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }
    public static function destroy(int editor) -> void
    {
        %{
            ns_ruleeditor_destroy((uintptr_t) editor);
        }%
    }
    public static function setEditable(int editor, bool flag) -> void
    {
        %{
            ns_ruleeditor_set_editable((uintptr_t) editor, flag ? 1 : 0);
        }%
    }
    public static function isEditable(int editor) -> bool
    {
        bool result;
        %{
            result = ns_ruleeditor_is_editable((uintptr_t) editor) == 1;
        }%
        return result;
    }
    public static function numberOfRows(int editor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_ruleeditor_number_of_rows((uintptr_t) editor);
        }%
        return value;
    }
    public static function addRow(int editor) -> void
    {
        %{
            ns_ruleeditor_add_row((uintptr_t) editor);
        }%
    }
    public static function removeRowAt(int editor, int index) -> void
    {
        %{
            ns_ruleeditor_remove_row_at((uintptr_t) editor, (int) index);
        }%
    }
    public static function setNestingMode(int editor, int mode) -> void
    {
        %{
            ns_ruleeditor_set_nesting_mode((uintptr_t) editor, (int) mode);
        }%
    }
    public static function getNestingMode(int editor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_ruleeditor_get_nesting_mode((uintptr_t) editor);
        }%
        return value;
    }
    public static function setCanRemoveAllRows(int editor, bool flag) -> void
    {
        %{
            ns_ruleeditor_set_can_remove_all_rows((uintptr_t) editor, flag ? 1 : 0);
        }%
    }
    public static function canRemoveAllRows(int editor) -> bool
    {
        bool result;
        %{
            result = ns_ruleeditor_can_remove_all_rows((uintptr_t) editor) == 1;
        }%
        return result;
    }
}
