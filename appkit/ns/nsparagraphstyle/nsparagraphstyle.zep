namespace AppKit\NS\NSParagraphStyle;

%{
#include "ns-paragraphstyle.h"
#include <stdint.h>
}%


/**
 * NSParagraphStyle / NSMutableParagraphStyle — paragraph attributes.
 */
class NSParagraphStyle

{
    public static function defaultParagraphStyle() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_default();
        }%
        return handle;
    }

    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_create();
        }%
        return handle;
    }

    public static function wrap(int nsParagraphStylePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_wrap((void *)(uintptr_t) nsParagraphStylePtr);
        }%
        return handle;
    }

    public static function destroy(int style) -> void
    {
        %{
            ns_paragraphstyle_destroy((uintptr_t) style);
        }%
    }

    public static function getLineSpacing(int style) -> float
    {
        double value;
        %{
            value = ns_paragraphstyle_line_spacing((uintptr_t) style);
        }%
        return (float) value;
    }

    public static function setLineSpacing(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_line_spacing((uintptr_t) style, (double) value);
        }%
    }

    public static function getLineBreakMode(int style) -> int
    {
        int value;
        %{
            value = (zend_long) ns_paragraphstyle_line_break_mode((uintptr_t) style);
        }%
        return value;
    }

    public static function setLineBreakMode(int style, int mode) -> void
    {
        %{
            ns_paragraphstyle_set_line_break_mode((uintptr_t) style, (int) mode);
        }%
    }

    public static function getAlignment(int style) -> int
    {
        int value;
        %{
            value = (zend_long) ns_paragraphstyle_alignment((uintptr_t) style);
        }%
        return value;
    }

    public static function setAlignment(int style, int alignment) -> void
    {
        %{
            ns_paragraphstyle_set_alignment((uintptr_t) style, (int) alignment);
        }%
    }

    public static function setParagraphStyle(int style, int sourceStyle) -> void
    {
        %{
            ns_paragraphstyle_set_paragraph_style((uintptr_t) style, (uintptr_t) sourceStyle);
        }%
    }

    public static function setHeadIndent(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_head_indent((uintptr_t) style, (double) value);
        }%
    }

    public static function getHeadIndent(int style) -> float
    {
        double value;
        %{
            value = ns_paragraphstyle_head_indent((uintptr_t) style);
        }%
        return (float) value;
    }

    public static function setHyphenationFactor(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_hyphenation_factor((uintptr_t) style, (float) value);
        }%
    }

    public static function getHyphenationFactor(int style) -> float
    {
        float value;
        %{
            value = ns_paragraphstyle_hyphenation_factor((uintptr_t) style);
        }%
        return value;
    }
}
