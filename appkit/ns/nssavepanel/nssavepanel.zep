namespace AppKit\NS\NSSavePanel;

%{
#include "ns-savepanel.h"
}%

/**
 * NSSavePanel file save dialog (modal).
 */
class NSSavePanel
{
    public static function runModal(string directory = "", string name = "") -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_savepanel_run(Z_STRVAL(directory), Z_STRVAL(name), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
