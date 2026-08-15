namespace AppKit\NS\NSSearchFieldCell;

%{
#include "ns-searchfieldcell.h"
#include <stdint.h>
}%


/**
 * NSSearchFieldCell — cell used by NSSearchField.
 */
class NSSearchFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsSearchFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_wrap((void *)(uintptr_t) nsSearchFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_searchfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsSearchFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_searchfieldcell_nssearchfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_searchfieldcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_searchfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_searchfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setRecentSearches(int cell, array searches) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(searches), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_searchfieldcell_set_recent_searches((uintptr_t) cell, cnames, count);
        }%
    }

    public static function getRecentSearches(int cell) -> array
    {
        array out = [];
        %{
            int count = ns_searchfieldcell_recent_searches_count((uintptr_t) cell);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfieldcell_recent_search_at((uintptr_t) cell, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setRecentsAutosaveName(int cell, string name) -> void
    {
        %{
            ns_searchfieldcell_set_recents_autosave_name((uintptr_t) cell, Z_STRVAL(name));
        }%
    }

    public static function getRecentsAutosaveName(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_recents_autosave_name((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSendsWholeSearchString(int cell, bool flag) -> void
    {
        %{
            ns_searchfieldcell_set_sends_whole_search_string((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function sendsWholeSearchString(int cell) -> bool
    {
        bool result;
        %{
            result = ns_searchfieldcell_sends_whole_search_string((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setMaximumRecents(int cell, int maximum) -> void
    {
        %{
            ns_searchfieldcell_set_maximum_recents((uintptr_t) cell, (int) maximum);
        }%
    }

    public static function maximumRecents(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_searchfieldcell_maximum_recents((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSendsSearchStringImmediately(int cell, bool flag) -> void
    {
        %{
            ns_searchfieldcell_set_sends_search_string_immediately((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function sendsSearchStringImmediately(int cell) -> bool
    {
        bool result;
        %{
            result = ns_searchfieldcell_sends_search_string_immediately((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function searchButtonCell(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_search_button_cell((uintptr_t) cell);
        }%
        return handle;
    }

    public static function cancelButtonCell(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_cancel_button_cell((uintptr_t) cell);
        }%
        return handle;
    }

    public static function resetSearchButtonCell(int cell) -> void
    {
        %{
            ns_searchfieldcell_reset_search_button_cell((uintptr_t) cell);
        }%
    }

    public static function resetCancelButtonCell(int cell) -> void
    {
        %{
            ns_searchfieldcell_reset_cancel_button_cell((uintptr_t) cell);
        }%
    }

    public static function setSearchMenuTemplate(int cell, int menu) -> void
    {
        %{
            ns_searchfieldcell_set_search_menu_template((uintptr_t) cell, (uintptr_t) menu);
        }%
    }

    public static function searchMenuTemplate(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_search_menu_template((uintptr_t) cell);
        }%
        return handle;
    }
}
