namespace AppKit\NS\NSToolbarItem;

%{
#include "ns-toolbaritem.h"
#include <stdint.h>
}%

/** NSToolbarItem — base toolbar item bind. */
class NSToolbarItem
{
    public static function create(string identifier) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritem_create(Z_STRVAL(identifier));
        }%
        return handle;
    }

    public static function wrap(int nsToolbarItemPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritem_wrap((void *)(uintptr_t) nsToolbarItemPtr);
        }%
        return handle;
    }

    public static function destroy(int item) -> void
    {
        %{
            ns_toolbaritem_destroy((uintptr_t) item);
        }%
    }

    public static function nsToolbarItem(int item) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_toolbaritem_nstoolbaritem((uintptr_t) item);
        }%
        return ptr;
    }

    public static function getItemIdentifier(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_item_identifier((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setLabel(int item, string label) -> void
    {
        %{
            ns_toolbaritem_set_label((uintptr_t) item, Z_STRVAL(label));
        }%
    }

    public static function getLabel(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPaletteLabel(int item, string label) -> void
    {
        %{
            ns_toolbaritem_set_palette_label((uintptr_t) item, Z_STRVAL(label));
        }%
    }

    public static function getPaletteLabel(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_palette_label((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setToolTip(int item, string tip) -> void
    {
        %{
            ns_toolbaritem_set_tool_tip((uintptr_t) item, Z_STRVAL(tip));
        }%
    }

    public static function getToolTip(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_tool_tip((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTag(int item, int tag) -> void
    {
        %{
            ns_toolbaritem_set_tag((uintptr_t) item, (int) tag);
        }%
    }

    public static function getTag(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritem_get_tag((uintptr_t) item);
        }%
        return value;
    }

    public static function setEnabled(int item, bool flag) -> void
    {
        %{
            ns_toolbaritem_set_enabled((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isEnabled(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_is_enabled((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setTitle(int item, string title) -> void
    {
        %{
            ns_toolbaritem_set_title((uintptr_t) item, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int item) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_toolbaritem_get_title((uintptr_t) item, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setBordered(int item, bool flag) -> void
    {
        %{
            ns_toolbaritem_set_bordered((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isBordered(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_is_bordered((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setNavigational(int item, bool flag) -> void
    {
        %{
            ns_toolbaritem_set_navigational((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isNavigational(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_is_navigational((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setHidden(int item, bool flag) -> void
    {
        %{
            ns_toolbaritem_set_hidden((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function isHidden(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_is_hidden((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setVisibilityPriority(int item, int priority) -> void
    {
        %{
            ns_toolbaritem_set_visibility_priority((uintptr_t) item, (int) priority);
        }%
    }

    public static function getVisibilityPriority(int item) -> int
    {
        int value;
        %{
            value = (zend_long) ns_toolbaritem_get_visibility_priority((uintptr_t) item);
        }%
        return value;
    }

    public static function setAutovalidates(int item, bool flag) -> void
    {
        %{
            ns_toolbaritem_set_autovalidates((uintptr_t) item, flag ? 1 : 0);
        }%
    }

    public static function autovalidates(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_autovalidates((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function isVisible(int item) -> bool
    {
        bool result;
        %{
            result = ns_toolbaritem_is_visible((uintptr_t) item) == 1;
        }%
        return result;
    }

    public static function setImage(int item, int image) -> void
    {
        %{
            ns_toolbaritem_set_image((uintptr_t) item, (uintptr_t) image);
        }%
    }

    public static function setView(int item, int view) -> void
    {
        %{
            ns_toolbaritem_set_view((uintptr_t) item, (uintptr_t) view);
        }%
    }

    public static function getView(int item) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_toolbaritem_get_view((uintptr_t) item);
        }%
        return handle;
    }
}
