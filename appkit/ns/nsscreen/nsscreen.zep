namespace AppKit\NS\NSScreen;

%{
#include "ns-screen.h"
#include <stdint.h>
}%

/**
 * NSScreen — display geometry and backing scale.
 */
class NSScreen
{
    /**
     * @return int Opaque screen handle, or 0
     */
    public static function wrap(int nsScreenPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_screen_wrap((void *)(uintptr_t) nsScreenPtr);
        }%
        return handle;
    }

    public static function destroy(int screen) -> void
    {
        %{
            ns_screen_destroy((uintptr_t) screen);
        }%
    }

    /**
     * @return int Opaque main screen handle, or 0
     */
    public static function mainScreen() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_screen_main();
        }%
        return handle;
    }

    /**
     * @return int Opaque deepest screen handle, or 0
     */
    public static function deepestScreen() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_screen_deepest();
        }%
        return handle;
    }

    public static function screensCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_screen_screens_count();
        }%
        return count;
    }

    /**
     * @return int Opaque screen handle at index, or 0
     */
    public static function screenAt(int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_screen_screens_at((int) index);
        }%
        return handle;
    }

    public static function screensHaveSeparateSpaces() -> bool
    {
        bool result;
        %{
            result = ns_screen_screens_have_separate_spaces() == 1;
        }%
        return result;
    }

    /**
     * Global screen frame as [x, y, width, height], or empty array.
     */
    public static function frame(int screen) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_screen_frame((uintptr_t) screen, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    /**
     * visibleFrame as [x, y, width, height], or empty array.
     */
    public static function visibleFrame(int screen) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            if (ns_screen_visible_frame((uintptr_t) screen, &x, &y, &w, &h)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        }%
        return out;
    }

    public static function backingScaleFactor(int screen) -> double
    {
        double value;
        %{
            value = ns_screen_backing_scale_factor((uintptr_t) screen);
        }%
        return value;
    }

    public static function localizedName(int screen) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_screen_localized_name((uintptr_t) screen, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function depth(int screen) -> int
    {
        int value;
        %{
            value = (zend_long) ns_screen_depth((uintptr_t) screen);
        }%
        return value;
    }

    /**
     * @return int Borrowed NSScreen pointer, or 0
     */
    public static function nsScreen(int screen) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_screen_nsscreen((uintptr_t) screen);
        }%
        return ptr;
    }
}
