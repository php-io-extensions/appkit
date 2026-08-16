#import <AppKit/AppKit.h>
#import "ns-storyboardsegue.h"

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

static NSStoryboardSegue *ns_storyboardsegue_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSStoryboardSegue class]] ? (NSStoryboardSegue *)obj : nil;
}

uintptr_t ns_storyboardsegue_create(const char *identifier, void *source_controller, void *destination_controller)
{
    @autoreleasepool {
        if (!identifier) {
            return 0;
        }
        id source = source_controller ? (__bridge id)source_controller : nil;
        id destination = destination_controller ? (__bridge id)destination_controller : nil;
        NSStoryboardSegue *segue = [[NSStoryboardSegue alloc] initWithIdentifier:[NSString stringWithUTF8String:identifier]
                                                                          source:source
                                                                     destination:destination];
        return segue ? ns_retain_obj(segue) : 0;
    }
}

uintptr_t ns_storyboardsegue_wrap(void *segue)
{
    if (!segue) {
        return 0;
    }
    @autoreleasepool {
        NSStoryboardSegue *obj = (__bridge NSStoryboardSegue *)segue;
        return [obj isKindOfClass:[NSStoryboardSegue class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_storyboardsegue_destroy(uintptr_t segue)
{
    ns_release_handle(segue);
}

void *ns_storyboardsegue_nsstoryboardsegue(uintptr_t segue)
{
    NSStoryboardSegue *obj = ns_storyboardsegue_from(segue);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_storyboardsegue_identifier(uintptr_t segue, char *out, int out_len)
{
    @autoreleasepool {
        NSStoryboardSegue *obj = ns_storyboardsegue_from(segue);
        return ns_copy_nsstring(obj.identifier, out, out_len);
    }
}

void *ns_storyboardsegue_source_controller(uintptr_t segue)
{
    NSStoryboardSegue *obj = ns_storyboardsegue_from(segue);
    return obj && obj.sourceController ? (__bridge void *)obj.sourceController : NULL;
}

void *ns_storyboardsegue_destination_controller(uintptr_t segue)
{
    NSStoryboardSegue *obj = ns_storyboardsegue_from(segue);
    return obj && obj.destinationController ? (__bridge void *)obj.destinationController : NULL;
}

void ns_storyboardsegue_perform(uintptr_t segue)
{
    @autoreleasepool {
        NSStoryboardSegue *obj = ns_storyboardsegue_from(segue);
        if (obj) {
            [obj perform];
        }
    }
}
