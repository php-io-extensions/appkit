namespace AppKit\NS\NSPersistentDocument;

%{
#include "ns-persistentdocument.h"
#include <stdint.h>
}%


/**
 * NSPersistentDocument Core Data document subclass.
 */
class NSPersistentDocument
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_persistentdocument_create();
        }%
        return handle;
    }
    public static function wrap(int nsPersistentDocumentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_persistentdocument_wrap((void *)(uintptr_t) nsPersistentDocumentPtr);
        }%
        return handle;
    }
    public static function destroy(int document) -> void
    {
        %{
            ns_persistentdocument_destroy((uintptr_t) document);
        }%
    }
    public static function nsPersistentDocument(int document) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_nspersistentdocument((uintptr_t) document);
        }%
        return ptr;
    }
    public static function managedObjectContext(int document) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_managed_object_context((uintptr_t) document);
        }%
        return ptr;
    }
    public static function managedObjectModel(int document) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_persistentdocument_managed_object_model((uintptr_t) document);
        }%
        return ptr;
    }
    public static function persistentStoreTypeForFileType(int document, string fileType) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_persistentdocument_persistent_store_type_for_file_type((uintptr_t) document, Z_STRVAL(fileType), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
    public static function readFromURL(int document, string url, string typeName) -> bool
    {
        bool result;
        %{
            result = ns_persistentdocument_read_from_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        }%
        return result;
    }
    public static function writeToURL(int document, string url, string typeName, int saveOperation, string originalURL = "") -> bool
    {
        bool result;
        %{
            const char *original = Z_STRLEN(originalURL) > 0 ? Z_STRVAL(originalURL) : NULL;
            result = ns_persistentdocument_write_to_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName), (unsigned) saveOperation, original) == 1;
        }%
        return result;
    }
    public static function revertToContentsOfURL(int document, string url, string typeName) -> bool
    {
        bool result;
        %{
            result = ns_persistentdocument_revert_to_contents_of_url((uintptr_t) document, Z_STRVAL(url), Z_STRVAL(typeName)) == 1;
        }%
        return result;
    }
}
