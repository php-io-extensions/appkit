namespace AppKit\NS\NSTextContainer;

%{
#include "ns-textcontainer.h"
#include <stdint.h>
}%


/**
 * NSTextContainer — region where text is laid out.
 */
class NSTextContainer
{
    public static function create(float width, float height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontainer_create((double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsTextContainerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontainer_wrap((void *)(uintptr_t) nsTextContainerPtr);
        }%
        return handle;
    }

    public static function destroy(int container) -> void
    {
        %{
            ns_textcontainer_destroy((uintptr_t) container);
        }%
    }

    public static function nsTextContainer(int container) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcontainer_nstextcontainer((uintptr_t) container);
        }%
        return ptr;
    }

    public static function setSize(int container, float width, float height) -> void
    {
        %{
            ns_textcontainer_set_size((uintptr_t) container, (double) width, (double) height);
        }%
    }

    /**
     * @return array [width, height]
     */
    public static function getSize(int container) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            ns_textcontainer_get_size((uintptr_t) container, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function setLineBreakMode(int container, int mode) -> void
    {
        %{
            ns_textcontainer_set_line_break_mode((uintptr_t) container, (int) mode);
        }%
    }

    public static function getLineBreakMode(int container) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontainer_get_line_break_mode((uintptr_t) container);
        }%
        return value;
    }

    public static function setLineFragmentPadding(int container, float padding) -> void
    {
        %{
            ns_textcontainer_set_line_fragment_padding((uintptr_t) container, (double) padding);
        }%
    }

    public static function getLineFragmentPadding(int container) -> float
    {
        double value;
        %{
            value = ns_textcontainer_get_line_fragment_padding((uintptr_t) container);
        }%
        return (float) value;
    }

    public static function setMaximumNumberOfLines(int container, int lines) -> void
    {
        %{
            ns_textcontainer_set_maximum_number_of_lines((uintptr_t) container, (int) lines);
        }%
    }

    public static function getMaximumNumberOfLines(int container) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontainer_get_maximum_number_of_lines((uintptr_t) container);
        }%
        return value;
    }

    public static function setWidthTracksTextView(int container, bool flag) -> void
    {
        %{
            ns_textcontainer_set_width_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        }%
    }

    public static function widthTracksTextView(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_width_tracks_text_view((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function setHeightTracksTextView(int container, bool flag) -> void
    {
        %{
            ns_textcontainer_set_height_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        }%
    }

    public static function heightTracksTextView(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_height_tracks_text_view((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function isSimpleRectangularTextContainer(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_is_simple_rectangular((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function replaceLayoutManager(int container, int layoutManager) -> void
    {
        %{
            ns_textcontainer_replace_layout_manager((uintptr_t) container, (uintptr_t) layoutManager);
        }%
    }
}
