#import <AppKit/AppKit.h>
#import "ns-openpanel.h"

static int ns_openpanel_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 0;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

int ns_openpanel_run(const char *directory, char *out, int out_len)
{
    @autoreleasepool {
        NSOpenPanel *panel = [NSOpenPanel openPanel];
        [panel setCanChooseFiles:YES];
        [panel setCanChooseDirectories:NO];
        [panel setAllowsMultipleSelection:NO];
        if (directory && directory[0] != '\0') {
            [panel setDirectoryURL:[NSURL fileURLWithPath:[NSString stringWithUTF8String:directory]]];
        }
        if ([panel runModal] != NSModalResponseOK) {
            if (out && out_len > 0) {
                out[0] = '\0';
            }
            return 0;
        }
        return ns_openpanel_copy_nsstring(panel.URL.path, out, out_len);
    }
}
