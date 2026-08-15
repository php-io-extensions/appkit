namespace AppKit\NS\NSFontDescriptor;

%{
#include "ns-fontdescriptor.h"
#include <stdint.h>
}%

/**
 * NSFontDescriptor — font attribute queries and matching.
 */
class NSFontDescriptor
{
    public static function wrap(int nsFontDescriptorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_wrap((void *)(uintptr_t) nsFontDescriptorPtr);
        }%
        return handle;
    }

    public static function destroy(int descriptor) -> void
    {
        %{
            ns_fontdescriptor_destroy((uintptr_t) descriptor);
        }%
    }

    public static function withName(string name, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_name(Z_STRVAL(name), (double) size);
        }%
        return handle;
    }

    public static function preferredForTextStyle(int styleKind) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_preferred_for_text_style((int) styleKind);
        }%
        return handle;
    }

    public static function postscriptName(int descriptor) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontdescriptor_postscript_name((uintptr_t) descriptor, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function pointSize(int descriptor) -> double
    {
        double value;
        %{
            value = ns_fontdescriptor_point_size((uintptr_t) descriptor);
        }%
        return value;
    }

    public static function symbolicTraits(int descriptor) -> int
    {
        int value;
        %{
            value = (zend_long) ns_fontdescriptor_symbolic_traits((uintptr_t) descriptor);
        }%
        return value;
    }

    public static function requiresFontAssetRequest(int descriptor) -> bool
    {
        bool result;
        %{
            result = ns_fontdescriptor_requires_font_asset_request((uintptr_t) descriptor) == 1;
        }%
        return result;
    }

    public static function withSymbolicTraits(int descriptor, int traits) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_symbolic_traits((uintptr_t) descriptor, (unsigned) traits);
        }%
        return handle;
    }

    public static function withSize(int descriptor, float size) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_size((uintptr_t) descriptor, (double) size);
        }%
        return handle;
    }

    public static function withFamily(int descriptor, string family) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_family((uintptr_t) descriptor, Z_STRVAL(family));
        }%
        return handle;
    }

    public static function withFace(int descriptor, string face) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_face((uintptr_t) descriptor, Z_STRVAL(face));
        }%
        return handle;
    }

    public static function withDesign(int descriptor, int designKind) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_with_design((uintptr_t) descriptor, (int) designKind);
        }%
        return handle;
    }

    public static function matchingCount(int descriptor) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontdescriptor_matching_count((uintptr_t) descriptor);
        }%
        return count;
    }

    public static function matchingAt(int descriptor, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_matching_at((uintptr_t) descriptor, (int) index);
        }%
        return handle;
    }

    public static function matchingFirst(int descriptor) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontdescriptor_matching_first((uintptr_t) descriptor);
        }%
        return handle;
    }

    public static function nsFontDescriptor(int descriptor) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_fontdescriptor_nsfontdescriptor((uintptr_t) descriptor);
        }%
        return ptr;
    }
}
