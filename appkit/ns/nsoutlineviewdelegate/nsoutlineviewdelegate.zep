namespace AppKit\NS\NSOutlineViewDelegate;

%{
#include "ns-protocol.h"
#include <stdint.h>
}%

class NSOutlineViewDelegate
{
    public static function attach(int handle) -> bool
    {
        bool result;
        %{
            result = ns_protocol_attach((uintptr_t) handle, "NSOutlineViewDelegate") == 1;
        }%
        return result;
    }

    public static function poll() -> array
    {
        %{
            char protocol[128];
            char selector[256];
            char arg1[4096];
            uintptr_t sender = 0;
            long long arg0 = 0;
            protocol[0] = selector[0] = arg1[0] = '\0';
            zval event;
            array_init(&event);
            if (ns_protocol_poll("NSOutlineViewDelegate", protocol, (int) sizeof(protocol), selector, (int) sizeof(selector), &sender, &arg0, arg1, (int) sizeof(arg1))) {
                add_assoc_string(&event, "protocol", protocol);
                add_assoc_string(&event, "selector", selector);
                add_assoc_long(&event, "sender", (zend_long) sender);
                add_assoc_long(&event, "arg0", (zend_long) arg0);
                add_assoc_string(&event, "arg1", arg1);
            }
            RETURN_ZVAL(&event, 0, 0);
        }%
        return [];
    }
}
