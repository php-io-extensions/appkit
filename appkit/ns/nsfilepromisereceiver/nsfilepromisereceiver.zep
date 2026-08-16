namespace AppKit\NS\NSFilePromiseReceiver;

%{
#include "ns-filepromisereceiver.h"
#include <stdint.h>
}%

/** NSFilePromiseReceiver — promised file drag destination. */
class NSFilePromiseReceiver
{
    public static function readableDraggedTypes() -> array
    {
        array out = [];
        %{
            int count = ns_filepromisereceiver_readable_dragged_types_count();
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_readable_dragged_type_at(i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function wrap(int nsFilePromiseReceiverPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_filepromisereceiver_wrap((void *)(uintptr_t) nsFilePromiseReceiverPtr);
        }%
        return handle;
    }

    public static function destroy(int receiver) -> void
    {
        %{
            ns_filepromisereceiver_destroy((uintptr_t) receiver);
        }%
    }

    public static function nsFilePromiseReceiver(int receiver) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_filepromisereceiver_nsfilepromisereceiver((uintptr_t) receiver);
        }%
        return ptr;
    }

    public static function fileTypes(int receiver) -> array
    {
        array out = [];
        %{
            int count = ns_filepromisereceiver_file_types_count((uintptr_t) receiver);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_file_type_at((uintptr_t) receiver, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function fileNames(int receiver) -> array
    {
        array out = [];
        %{
            int count = ns_filepromisereceiver_file_names_count((uintptr_t) receiver);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_filepromisereceiver_file_name_at((uintptr_t) receiver, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function receiveAtDestination(int receiver, string destinationDir) -> void
    {
        %{
            ns_filepromisereceiver_receive_at_destination((uintptr_t) receiver, Z_STRVAL(destinationDir));
        }%
    }

    public static function pollReceivedFile(int receiver) -> array
    {
        array out = [];
        %{
            char url[4096];
            int errorFlag = 0;
            url[0] = '\0';
            if (ns_filepromisereceiver_poll_received_file((uintptr_t) receiver, url, (int) sizeof(url), &errorFlag)) {
                add_assoc_string(&out, "url", url);
                add_assoc_bool(&out, "error", errorFlag ? 1 : 0);
            }
        }%
        return out;
    }
}
