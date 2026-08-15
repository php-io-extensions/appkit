namespace AppKit\NS\NSGlyphGenerator;

%{
#include "ns-glyphgenerator.h"
#include <stdint.h>
}%


/**
 * NSGlyphGenerator — shared glyph generator (deprecated).
 */
class NSGlyphGenerator

{
    public static function sharedGlyphGenerator() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_glyphgenerator_shared_glyph_generator();
        }%
        return handle;
    }

    public static function wrap(int nsGlyphGeneratorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_glyphgenerator_wrap((void *)(uintptr_t) nsGlyphGeneratorPtr);
        }%
        return handle;
    }

    public static function destroy(int generator) -> void
    {
        %{
            ns_glyphgenerator_destroy((uintptr_t) generator);
        }%
    }
}
