namespace AppKit\NS\NSTextElement;

%{
#include "ns-textelement.h"
#include <stdint.h>
}%


/**
 * NSTextElement — TextKit 2 content element.
 */
class NSTextElement

{
    public static function wrap(int nsTextElementPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textelement_wrap((void *)(uintptr_t) nsTextElementPtr);
        }%
        return handle;
    }

    public static function destroy(int element) -> void
    {
        %{
            ns_textelement_destroy((uintptr_t) element);
        }%
    }

    public static function isRepresentedElement(int element) -> bool
    {
        bool result;
        %{
            result = ns_textelement_is_represented_element((uintptr_t) element) == 1;
        }%
        return result;
    }

    public static function childElementsCount(int element) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textelement_child_elements_count((uintptr_t) element);
        }%
        return value;
    }

    public static function elementRangePtr(int element) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textelement_element_range_ptr((uintptr_t) element);
        }%
        return ptr;
    }

    public static function textContentManager(int element) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textelement_text_content_manager((uintptr_t) element);
        }%
        return handle;
    }
}
