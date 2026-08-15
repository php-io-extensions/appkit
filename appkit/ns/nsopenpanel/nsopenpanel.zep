namespace AppKit\NS\NSOpenPanel;

%{
#include "ns-openpanel.h"
}%

/**
 * NSOpenPanel file picker (modal).
 */
class NSOpenPanel
{
    public static function runModal(string directory = "") -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_openpanel_run(Z_STRVAL(directory), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
