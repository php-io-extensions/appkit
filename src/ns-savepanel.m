#import <AppKit/AppKit.h>
#import "ns-savepanel.h"

static int ns_savepanel_copy_nsstring(NSString *text, char *out, int out_len)
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

int ns_savepanel_run(const char *directory, const char *name, char *out, int out_len)
{
    @autoreleasepool {
        NSSavePanel *panel = [NSSavePanel savePanel];
        if (directory && directory[0] != '\0') {
            [panel setDirectoryURL:[NSURL fileURLWithPath:[NSString stringWithUTF8String:directory]]];
        }
        if (name && name[0] != '\0') {
            [panel setNameFieldStringValue:[NSString stringWithUTF8String:name]];
        }
        if ([panel runModal] != NSModalResponseOK) {
            if (out && out_len > 0) {
                out[0] = '\0';
            }
            return 0;
        }
        return ns_savepanel_copy_nsstring(panel.URL.path, out, out_len);
    }
}
