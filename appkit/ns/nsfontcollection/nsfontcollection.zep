namespace AppKit\NS\NSFontCollection;

%{
#include "ns-fontcollection.h"
#include <stdint.h>
}%

/**
 * NSFontCollection — named and query-based font lists.
 * NSMutableFontCollection mutation APIs are exposed on the same class (see OKF).
 */
class NSFontCollection
{
    public static function wrap(int nsFontCollectionPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_wrap((void *)(uintptr_t) nsFontCollectionPtr);
        }%
        return handle;
    }

    public static function destroy(int collection) -> void
    {
        %{
            ns_fontcollection_destroy((uintptr_t) collection);
        }%
    }

    public static function withDescriptor(int descriptor) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_with_descriptor((uintptr_t) descriptor);
        }%
        return handle;
    }

    public static function withAllAvailable() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_with_all_available();
        }%
        return handle;
    }

    public static function withName(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_with_name(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function withNameVisibility(string name, int visibility) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_with_name_visibility(Z_STRVAL(name), (unsigned) visibility);
        }%
        return handle;
    }

    public static function show(int collection, string name, int visibility) -> bool
    {
        bool result;
        %{
            result = ns_fontcollection_show((uintptr_t) collection, Z_STRVAL(name), (unsigned) visibility) == 1;
        }%
        return result;
    }

    public static function hide(string name, int visibility) -> bool
    {
        bool result;
        %{
            result = ns_fontcollection_hide(Z_STRVAL(name), (unsigned) visibility) == 1;
        }%
        return result;
    }

    public static function rename(string oldName, int visibility, string newName) -> bool
    {
        bool result;
        %{
            result = ns_fontcollection_rename(Z_STRVAL(oldName), (unsigned) visibility, Z_STRVAL(newName)) == 1;
        }%
        return result;
    }

    public static function allNamesCount() -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontcollection_all_names_count();
        }%
        return count;
    }

    public static function allNameAt(int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontcollection_all_name_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function queryDescriptorsCount(int collection) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontcollection_query_descriptors_count((uintptr_t) collection);
        }%
        return count;
    }

    public static function queryDescriptorAt(int collection, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_query_descriptor_at((uintptr_t) collection, (int) index);
        }%
        return handle;
    }

    public static function exclusionDescriptorsCount(int collection) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontcollection_exclusion_descriptors_count((uintptr_t) collection);
        }%
        return count;
    }

    public static function exclusionDescriptorAt(int collection, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_exclusion_descriptor_at((uintptr_t) collection, (int) index);
        }%
        return handle;
    }

    public static function matchingDescriptorsCount(int collection) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontcollection_matching_descriptors_count((uintptr_t) collection);
        }%
        return count;
    }

    public static function matchingDescriptorAt(int collection, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_matching_descriptor_at((uintptr_t) collection, (int) index);
        }%
        return handle;
    }

    public static function matchingDescriptorsForFamilyCount(int collection, string family) -> int
    {
        int count;
        %{
            count = (zend_long) ns_fontcollection_matching_descriptors_for_family_count((uintptr_t) collection, Z_STRVAL(family));
        }%
        return count;
    }

    public static function matchingDescriptorForFamilyAt(int collection, string family, int index) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_matching_descriptor_for_family_at((uintptr_t) collection, Z_STRVAL(family), (int) index);
        }%
        return handle;
    }

    public static function mutableWithDescriptor(int descriptor) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_mutable_with_descriptor((uintptr_t) descriptor);
        }%
        return handle;
    }

    public static function mutableWithAllAvailable() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_mutable_with_all_available();
        }%
        return handle;
    }

    public static function mutableWithName(string name) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_mutable_with_name(Z_STRVAL(name));
        }%
        return handle;
    }

    public static function mutableWithNameVisibility(string name, int visibility) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_fontcollection_mutable_with_name_visibility(Z_STRVAL(name), (unsigned) visibility);
        }%
        return handle;
    }

    public static function addQueryForDescriptor(int collection, int descriptor) -> void
    {
        %{
            ns_fontcollection_add_query_for_descriptor((uintptr_t) collection, (uintptr_t) descriptor);
        }%
    }

    public static function removeQueryForDescriptor(int collection, int descriptor) -> void
    {
        %{
            ns_fontcollection_remove_query_for_descriptor((uintptr_t) collection, (uintptr_t) descriptor);
        }%
    }

    public static function nsFontCollection(int collection) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_fontcollection_nsfontcollection((uintptr_t) collection);
        }%
        return ptr;
    }
}
