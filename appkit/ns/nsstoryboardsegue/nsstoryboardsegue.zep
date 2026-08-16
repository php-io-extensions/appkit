namespace AppKit\NS\NSStoryboardSegue;

%{
#include "ns-storyboardsegue.h"
#include <stdint.h>
}%

/** NSStoryboardSegue — storyboard transition between controllers. */
class NSStoryboardSegue
{
    public static function create(string identifier, int sourceControllerPtr, int destinationControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboardsegue_create(
                Z_STRVAL(identifier),
                (void *)(uintptr_t) sourceControllerPtr,
                (void *)(uintptr_t) destinationControllerPtr
            );
        }%
        return handle;
    }

    public static function wrap(int nsStoryboardSeguePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_storyboardsegue_wrap((void *)(uintptr_t) nsStoryboardSeguePtr);
        }%
        return handle;
    }

    public static function destroy(int segue) -> void
    {
        %{
            ns_storyboardsegue_destroy((uintptr_t) segue);
        }%
    }

    public static function nsStoryboardSegue(int segue) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_nsstoryboardsegue((uintptr_t) segue);
        }%
        return ptr;
    }

    public static function getIdentifier(int segue) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_storyboardsegue_identifier((uintptr_t) segue, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function getSourceController(int segue) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_source_controller((uintptr_t) segue);
        }%
        return ptr;
    }

    public static function getDestinationController(int segue) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_storyboardsegue_destination_controller((uintptr_t) segue);
        }%
        return ptr;
    }

    public static function perform(int segue) -> void
    {
        %{
            ns_storyboardsegue_perform((uintptr_t) segue);
        }%
    }
}
