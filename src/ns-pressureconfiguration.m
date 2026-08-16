#import <AppKit/AppKit.h>
#import "ns-pressureconfiguration.h"
#import "ns-view.h"

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

static id ns_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static NSPressureConfiguration *ns_pressureconfiguration_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSPressureConfiguration class]] ? (NSPressureConfiguration *)obj : nil;
}

uintptr_t ns_pressureconfiguration_create(int behavior)
{
    @autoreleasepool {
        return ns_retain_obj([[NSPressureConfiguration alloc] initWithPressureBehavior:(NSPressureBehavior)behavior]);
    }
}

uintptr_t ns_pressureconfiguration_wrap(void *configuration)
{
    if (!configuration) {
        return 0;
    }
    @autoreleasepool {
        NSPressureConfiguration *obj = (__bridge NSPressureConfiguration *)configuration;
        return [obj isKindOfClass:[NSPressureConfiguration class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pressureconfiguration_destroy(uintptr_t configuration)
{
    ns_release_handle(configuration);
}

void *ns_pressureconfiguration_nspressureconfiguration(uintptr_t configuration)
{
    NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_pressureconfiguration_pressure_behavior(uintptr_t configuration)
{
    @autoreleasepool {
        NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
        return obj ? (int)obj.pressureBehavior : 0;
    }
}

void ns_pressureconfiguration_set(uintptr_t configuration)
{
    @autoreleasepool {
        NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
        if (obj) {
            [obj set];
        }
    }
}

void ns_view_set_pressure_configuration(uintptr_t view, uintptr_t configuration)
{
    @autoreleasepool {
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        NSPressureConfiguration *cfg = ns_pressureconfiguration_from(configuration);
        if (v) {
            v.pressureConfiguration = cfg;
        }
    }
}

uintptr_t ns_view_pressure_configuration(uintptr_t view)
{
    @autoreleasepool {
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        return v && v.pressureConfiguration ? ns_retain_obj(v.pressureConfiguration) : 0;
    }
}
