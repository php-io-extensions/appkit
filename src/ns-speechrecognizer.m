#import <AppKit/AppKit.h>
#import "ns-speechrecognizer.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSSpeechRecognizer *ns_speechrecognizer_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSpeechRecognizer class]] ? (NSSpeechRecognizer *)obj : nil;
}

static NSArray<NSString *> *ns_string_array_from_cstrings(const char **items, int count)
{
    if (!items || count <= 0) {
        return @[];
    }
    NSMutableArray<NSString *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    for (int i = 0; i < count; i++) {
        if (items[i]) {
            [arr addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return arr;
}

uintptr_t ns_speechrecognizer_create(void)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = [[NSSpeechRecognizer alloc] init];
        return obj ? ns_retain_obj(obj) : 0;
    }
}

uintptr_t ns_speechrecognizer_wrap(void *recognizer)
{
    if (!recognizer) {
        return 0;
    }
    @autoreleasepool {
        NSSpeechRecognizer *obj = (__bridge NSSpeechRecognizer *)recognizer;
        return [obj isKindOfClass:[NSSpeechRecognizer class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_speechrecognizer_destroy(uintptr_t recognizer)
{
    ns_release_handle(recognizer);
}

void *ns_speechrecognizer_nsspeechrecognizer(uintptr_t recognizer)
{
    NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_speechrecognizer_start_listening(uintptr_t recognizer)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            [obj startListening];
        }
    }
}

void ns_speechrecognizer_stop_listening(uintptr_t recognizer)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            [obj stopListening];
        }
    }
}

void ns_speechrecognizer_set_commands(uintptr_t recognizer, const char **commands, int count)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            obj.commands = ns_string_array_from_cstrings(commands, count);
        }
    }
}

int ns_speechrecognizer_commands_count(uintptr_t recognizer)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        return obj ? (int)obj.commands.count : 0;
    }
}

int ns_speechrecognizer_command_at(uintptr_t recognizer, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (!obj || index < 0 || index >= (int)obj.commands.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.commands[(NSUInteger)index], out, out_len);
    }
}

int ns_speechrecognizer_displayed_commands_title(uintptr_t recognizer, char *out, int out_len)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        return obj ? ns_copy_nsstring(obj.displayedCommandsTitle, out, out_len) : 0;
    }
}

void ns_speechrecognizer_set_displayed_commands_title(uintptr_t recognizer, const char *title)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            obj.displayedCommandsTitle = title ? [NSString stringWithUTF8String:title] : nil;
        }
    }
}

int ns_speechrecognizer_listens_in_foreground_only(uintptr_t recognizer)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        return obj && obj.listensInForegroundOnly ? 1 : 0;
    }
}

void ns_speechrecognizer_set_listens_in_foreground_only(uintptr_t recognizer, int flag)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            obj.listensInForegroundOnly = flag ? YES : NO;
        }
    }
}

int ns_speechrecognizer_blocks_other_recognizers(uintptr_t recognizer)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        return obj && obj.blocksOtherRecognizers ? 1 : 0;
    }
}

void ns_speechrecognizer_set_blocks_other_recognizers(uintptr_t recognizer, int flag)
{
    @autoreleasepool {
        NSSpeechRecognizer *obj = ns_speechrecognizer_from(recognizer);
        if (obj) {
            obj.blocksOtherRecognizers = flag ? YES : NO;
        }
    }
}
