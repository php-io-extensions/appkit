namespace AppKit\NS\NSAdaptiveImageGlyph;

%{
#include "ns-adaptiveimageglyph.h"
#include <stdint.h>
}%


/**
 * NSAdaptiveImageGlyph — adaptive image glyph (Genmoji).
 */
class NSAdaptiveImageGlyph

{
    public static function createWithImageContent(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_adaptiveimageglyph_create_with_image_content(Z_STRVAL(data), (size_t) Z_STRLEN(data));
        }%
        return handle;
    }

    public static function wrap(int nsAdaptiveImageGlyphPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_adaptiveimageglyph_wrap((void *)(uintptr_t) nsAdaptiveImageGlyphPtr);
        }%
        return handle;
    }

    public static function destroy(int glyph) -> void
    {
        %{
            ns_adaptiveimageglyph_destroy((uintptr_t) glyph);
        }%
    }

    public static function contentIdentifier(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function contentDescription(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_description((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function contentTypeIdentifier(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_type_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
