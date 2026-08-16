namespace AppKit\NS\NSDockTile;

%{
#include "ns-docktile.h"
#include <stdint.h>
}%


/**
 * NSDockTile — application or mini-window dock tile.
 */
class NSDockTile
{
    public static function applicationDockTile() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_application();
        }%
        return handle;
    }

    public static function wrap(int nsDockTilePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_wrap((void *)(uintptr_t) nsDockTilePtr);
        }%
        return handle;
    }

    public static function destroy(int tile) -> void
    {
        %{
            ns_docktile_destroy((uintptr_t) tile);
        }%
    }

    public static function nsDockTile(int tile) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_docktile_nsdocktile((uintptr_t) tile);
        }%
        return ptr;
    }

    public static function getSize(int tile) -> array
    {
        array size;
        %{
            double w = 0.0, h = 0.0;
            ns_docktile_size((uintptr_t) tile, &w, &h);
            array_init(&size);
            add_index_double(&size, 0, w);
            add_index_double(&size, 1, h);
        }%
        return size;
    }

    public static function setContentView(int tile, int view) -> void
    {
        %{
            ns_docktile_set_content_view((uintptr_t) tile, (uintptr_t) view);
        }%
    }

    public static function contentView(int tile) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_content_view((uintptr_t) tile);
        }%
        return handle;
    }

    public static function display(int tile) -> void
    {
        %{
            ns_docktile_display((uintptr_t) tile);
        }%
    }

    public static function setShowsApplicationBadge(int tile, bool flag) -> void
    {
        %{
            ns_docktile_set_shows_application_badge((uintptr_t) tile, flag ? 1 : 0);
        }%
    }

    public static function showsApplicationBadge(int tile) -> bool
    {
        bool result;
        %{
            result = ns_docktile_shows_application_badge((uintptr_t) tile) == 1;
        }%
        return result;
    }

    public static function setBadgeLabel(int tile, string label) -> void
    {
        %{
            ns_docktile_set_badge_label((uintptr_t) tile, Z_STRVAL(label));
        }%
    }

    public static function badgeLabel(int tile) -> string
    {
        string label;
        %{
            char buf[512];
            if (ns_docktile_badge_label((uintptr_t) tile, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&label, buf);
            } else {
                ZVAL_EMPTY_STRING(&label);
            }
        }%
        return label;
    }

    public static function owner(int tile) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_docktile_owner((uintptr_t) tile);
        }%
        return ptr;
    }
}
