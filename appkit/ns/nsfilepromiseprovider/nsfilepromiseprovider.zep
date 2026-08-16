namespace AppKit\NS\NSFilePromiseProvider;

%{
#include "ns-filepromiseprovider.h"
#include <stdint.h>
}%

/** NSFilePromiseProvider — promised file drag source. */
class NSFilePromiseProvider
{
    public static function create(string fileType) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_filepromiseprovider_create(Z_STRVAL(fileType));
        }%
        return handle;
    }

    public static function wrap(int nsFilePromiseProviderPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_filepromiseprovider_wrap((void *)(uintptr_t) nsFilePromiseProviderPtr);
        }%
        return handle;
    }

    public static function destroy(int provider) -> void
    {
        %{
            ns_filepromiseprovider_destroy((uintptr_t) provider);
        }%
    }

    public static function nsFilePromiseProvider(int provider) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_filepromiseprovider_nsfilepromiseprovider((uintptr_t) provider);
        }%
        return ptr;
    }

    public static function setFileType(int provider, string fileType) -> void
    {
        %{
            ns_filepromiseprovider_set_file_type((uintptr_t) provider, Z_STRVAL(fileType));
        }%
    }

    public static function getFileType(int provider) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_filepromiseprovider_file_type((uintptr_t) provider, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setUserInfoTag(int provider, int tag) -> void
    {
        %{
            ns_filepromiseprovider_set_user_info_tag((uintptr_t) provider, (long long) tag);
        }%
    }

    public static function getUserInfoTag(int provider) -> int
    {
        int value;
        %{
            value = (zend_long) ns_filepromiseprovider_user_info_tag((uintptr_t) provider);
        }%
        return value;
    }

    public static function setFileName(int provider, string fileName) -> void
    {
        %{
            ns_filepromiseprovider_set_file_name((uintptr_t) provider, Z_STRVAL(fileName));
        }%
    }

    public static function pollWriteRequest(int provider) -> array
    {
        array out = [];
        %{
            char fileType[4096];
            char url[4096];
            fileType[0] = '\0';
            url[0] = '\0';
            if (ns_filepromiseprovider_poll_write_request((uintptr_t) provider, fileType, (int) sizeof(fileType), url, (int) sizeof(url))) {
                add_assoc_string(&out, "fileType", fileType);
                add_assoc_string(&out, "url", url);
            }
        }%
        return out;
    }

    public static function completeWrite(int provider, bool success) -> void
    {
        %{
            ns_filepromiseprovider_complete_write((uintptr_t) provider, success ? 1 : 0);
        }%
    }
}
