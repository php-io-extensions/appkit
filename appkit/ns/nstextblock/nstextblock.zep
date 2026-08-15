namespace AppKit\NS\NSTextBlock;

%{
#include "ns-textblock.h"
#include <stdint.h>
}%


/**
 * NSTextBlock — base text block layout object.
 */
class NSTextBlock

{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textblock_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextBlockPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textblock_wrap((void *)(uintptr_t) nsTextBlockPtr);
        }%
        return handle;
    }

    public static function destroy(int block) -> void
    {
        %{
            ns_textblock_destroy((uintptr_t) block);
        }%
    }

    public static function setContentWidth(int block, float width, int valueType) -> void
    {
        %{
            ns_textblock_set_content_width((uintptr_t) block, (double) width, (int) valueType);
        }%
    }

    public static function getContentWidth(int block) -> float
    {
        double value;
        %{
            value = ns_textblock_content_width((uintptr_t) block);
        }%
        return (float) value;
    }

    public static function setVerticalAlignment(int block, int alignment) -> void
    {
        %{
            ns_textblock_set_vertical_alignment((uintptr_t) block, (int) alignment);
        }%
    }

    public static function getVerticalAlignment(int block) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textblock_get_vertical_alignment((uintptr_t) block);
        }%
        return value;
    }

    public static function setBackgroundColor(int block, int colorHandle) -> void
    {
        %{
            ns_textblock_set_background_color((uintptr_t) block, (uintptr_t) colorHandle);
        }%
    }

    public static function setValue(int block, float val, int valueType, int dimension) -> void
    {
        %{
            ns_textblock_set_value((uintptr_t) block, (double) val, (int) valueType, (int) dimension);
        }%
    }

    public static function getValue(int block, int dimension) -> float
    {
        double value;
        %{
            value = ns_textblock_value_for_dimension((uintptr_t) block, (int) dimension);
        }%
        return (float) value;
    }

    public static function setLayerWidth(int block, float val, int valueType, int layer, int edge = -1) -> void
    {
        %{
            ns_textblock_set_width((uintptr_t) block, (double) val, (int) valueType, (int) layer, (int) edge);
        }%
    }
}
