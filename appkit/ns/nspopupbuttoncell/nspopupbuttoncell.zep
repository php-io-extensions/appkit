namespace AppKit\NS\NSPopUpButtonCell;

%{
#include "ns-popupbuttoncell.h"
#include <stdint.h>
}%


/**
 * NSPopUpButtonCell — cell used by NSPopUpButton.
 */
class NSPopUpButtonCell
{
    public static function createText(string value = "", bool pullsDown = false) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_popupbuttoncell_create_text(Z_STRVAL(value), pullsDown ? 1 : 0);
        }%
        return handle;
    }

    public static function wrap(int nsPopUpButtonCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_popupbuttoncell_wrap((void *)(uintptr_t) nsPopUpButtonCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_popupbuttoncell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsPopUpButtonCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_popupbuttoncell_nspopupbuttoncell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_popupbuttoncell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_popupbuttoncell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setMenu(int cell, int menu) -> void
    {
        %{
            ns_popupbuttoncell_set_menu((uintptr_t) cell, (uintptr_t) menu);
        }%
    }

    public static function getMenu(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_popupbuttoncell_get_menu((uintptr_t) cell);
        }%
        return handle;
    }

    public static function setPullsDown(int cell, bool flag) -> void
    {
        %{
            ns_popupbuttoncell_set_pulls_down((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function pullsDown(int cell) -> bool
    {
        bool result;
        %{
            result = ns_popupbuttoncell_pulls_down((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setAutoenablesItems(int cell, bool flag) -> void
    {
        %{
            ns_popupbuttoncell_set_autoenables_items((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function autoenablesItems(int cell) -> bool
    {
        bool result;
        %{
            result = ns_popupbuttoncell_autoenables_items((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setUsesItemFromMenu(int cell, bool flag) -> void
    {
        %{
            ns_popupbuttoncell_set_uses_item_from_menu((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function usesItemFromMenu(int cell) -> bool
    {
        bool result;
        %{
            result = ns_popupbuttoncell_uses_item_from_menu((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setAltersStateOfSelectedItem(int cell, bool flag) -> void
    {
        %{
            ns_popupbuttoncell_set_alters_state_of_selected_item((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function altersStateOfSelectedItem(int cell) -> bool
    {
        bool result;
        %{
            result = ns_popupbuttoncell_alters_state_of_selected_item((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function addItemWithTitle(int cell, string title) -> void
    {
        %{
            ns_popupbuttoncell_add_item_with_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function removeAllItems(int cell) -> void
    {
        %{
            ns_popupbuttoncell_remove_all_items((uintptr_t) cell);
        }%
    }

    public static function numberOfItems(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_popupbuttoncell_number_of_items((uintptr_t) cell);
        }%
        return value;
    }

    public static function selectItemAtIndex(int cell, int index) -> void
    {
        %{
            ns_popupbuttoncell_select_item_at_index((uintptr_t) cell, (int) index);
        }%
    }

    public static function indexOfSelectedItem(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_popupbuttoncell_index_of_selected_item((uintptr_t) cell);
        }%
        return value;
    }

    public static function titleOfSelectedItem(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_popupbuttoncell_title_of_selected_item((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setArrowPosition(int cell, int position) -> void
    {
        %{
            ns_popupbuttoncell_set_arrow_position((uintptr_t) cell, (int) position);
        }%
    }

    public static function getArrowPosition(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_popupbuttoncell_get_arrow_position((uintptr_t) cell);
        }%
        return value;
    }
}
