namespace AppKit\NS\NSTextParagraph;

%{
#include "ns-textparagraph.h"
#include <stdint.h>
}%


/**
 * NSTextParagraph — paragraph text element.
 */
class NSTextParagraph

{
    public static function create(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textparagraph_create(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextParagraphPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textparagraph_wrap((void *)(uintptr_t) nsTextParagraphPtr);
        }%
        return handle;
    }

    public static function destroy(int paragraph) -> void
    {
        %{
            ns_textparagraph_destroy((uintptr_t) paragraph);
        }%
    }

    public static function getAttributedString(int paragraph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textparagraph_get_attributed_string((uintptr_t) paragraph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function paragraphContentRangePtr(int paragraph) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textparagraph_paragraph_content_range_ptr((uintptr_t) paragraph);
        }%
        return ptr;
    }

    public static function paragraphSeparatorRangePtr(int paragraph) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textparagraph_paragraph_separator_range_ptr((uintptr_t) paragraph);
        }%
        return ptr;
    }
}
