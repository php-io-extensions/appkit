namespace AppKit\NS\NSMenuItem;

%{
#include "ns-menuitem.h"
#include "ns-menu.h"
#include <stdint.h>
}%

/**
 * NSMenuItem — full menu item bind (title, state, submenu, custom view, etc.).
 * add() remains a convenience alias for NSMenu::addItem.
 */
class NSMenuItem
{
    public static function create(string title, string keyEquivalent = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menuitem_create(Z_STRVAL(title), Z_STRVAL(keyEquivalent));
        }%
        return handle;
    }

    public static function separator() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menuitem_separator();
        }%
        return handle;
    }

    public static function sectionHeader(string title) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menuitem_section_header(Z_STRVAL(title));
        }%
        return handle;
    }

    public static function wrap(int nsMenuItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menuitem_wrap((void *)(uintptr_t) nsMenuItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_menuitem_destroy((uintptr_t) item);
        }%
    }

    public static function nsMenuItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_menuitem_nsmenuitem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function setTitle(int item, string title) -> void
    {
        %{
            ns_menuitem_set_title((uintptr_t) item, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_title((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSubtitle(int item, string subtitle) -> void
    {
        %{
            ns_menuitem_set_subtitle((uintptr_t) item, Z_STRVAL(subtitle));
        }%
    }

    public static function getSubtitle(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_subtitle((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setKeyEquivalent(int item, string key) -> void
    {
        %{
            ns_menuitem_set_key_equivalent((uintptr_t) item, Z_STRVAL(key));
        }%
    }

    public static function getKeyEquivalent(int item) -> string
    {
        %{
            char buf[64];
            buf[0] = '\0';
            if (ns_menuitem_get_key_equivalent((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setEnabled(int item, bool flag) -> void
    {
        %{
            ns_menuitem_set_enabled((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isEnabled(int item) -> bool
    {
        bool result;
        %{
            result = ns_menuitem_is_enabled((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setHidden(int item, bool flag) -> void
    {
        %{
            ns_menuitem_set_hidden((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isHidden(int item) -> bool
    {
        bool result;
        %{
            result = ns_menuitem_is_hidden((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setState(int item, int state) -> void
    {
        %{
            ns_menuitem_set_state((uintptr_t) item, (int) state);
        }%
    }

    public static function getState(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_menuitem_get_state((uintptr_t) item);
        }%
        return value;
    }

    public static function setTag(int item, int tag) -> void
    {
        %{
            ns_menuitem_set_tag((uintptr_t) item, (int) tag);
        }%
    }

    public static function getTag(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_menuitem_get_tag((uintptr_t) item);
        }%
        return value;
    }

    public static function setToolTip(int item, string tip) -> void
    {
        %{
            ns_menuitem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        }%
    }

    public static function getToolTip(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setIndentationLevel(int item, int level) -> void
    {
        %{
            ns_menuitem_set_indentation_level((uintptr_t) item, (int) level);
        }%
    }

    public static function getIndentationLevel(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_menuitem_get_indentation_level((uintptr_t) item);
        }%
        return value;
    }

    public static function setRepresentedObject(int item, string token) -> void
    {
        %{
            ns_menuitem_set_represented_object((uintptr_t) item, Z_STRVAL(token));
        }%
    }

    public static function getRepresentedObject(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_menuitem_get_represented_object((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setView(int item, int view) -> void
    {
        %{
            ns_menuitem_set_view((uintptr_t) item, (uintptr_t) view);
        }%
    }

    public static function view(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_menuitem_view((uintptr_t) item);
        }%
        return handle;
    }

    public static function isSeparator(int item) -> bool
    {
        bool result;
        %{
            result = ns_menuitem_is_separator((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function isSectionHeader(int item) -> bool
    {
        bool result;
        %{
            result = ns_menuitem_is_section_header((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function hasSubmenu(int item) -> bool
    {
        bool result;
        %{
            result = ns_menuitem_has_submenu((uintptr_t) item) == 1;
        }%
        return result;
    }

    /** Convenience alias for NSMenu::addItem. */
    public static function add(string menuTitle, string itemTitle, string keyEquivalent, string actionId) -> bool
    {
        bool result;
        %{
            result = ns_menu_add_item(
                Z_STRVAL(menuTitle),
                Z_STRVAL(itemTitle),
                Z_STRVAL(keyEquivalent),
                Z_STRVAL(actionId)
            ) == 1;
        }%
        return result;
    }
}
