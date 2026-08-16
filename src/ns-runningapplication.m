#import <AppKit/AppKit.h>
#import "ns-runningapplication.h"
#import "ns-image.h"

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

static NSRunningApplication *ns_runningapplication_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSRunningApplication class]] ? (NSRunningApplication *)obj : nil;
}

uintptr_t ns_runningapplication_current(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSRunningApplication currentApplication]);
    }
}

uintptr_t ns_runningapplication_wrap(void *application)
{
    if (!application) {
        return 0;
    }
    @autoreleasepool {
        NSRunningApplication *obj = (__bridge NSRunningApplication *)application;
        return [obj isKindOfClass:[NSRunningApplication class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_runningapplication_destroy(uintptr_t application)
{
    ns_release_handle(application);
}

void *ns_runningapplication_nsrunningapplication(uintptr_t application)
{
    NSRunningApplication *obj = ns_runningapplication_from(application);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_runningapplication_with_process_identifier(pid_t pid)
{
    @autoreleasepool {
        NSRunningApplication *obj = [NSRunningApplication runningApplicationWithProcessIdentifier:pid];
        return obj ? ns_retain_obj(obj) : 0;
    }
}

int ns_runningapplication_with_bundle_identifier_count(const char *bundle_id)
{
    @autoreleasepool {
        if (!bundle_id) {
            return 0;
        }
        return (int)[NSRunningApplication runningApplicationsWithBundleIdentifier:[NSString stringWithUTF8String:bundle_id]].count;
    }
}

uintptr_t ns_runningapplication_with_bundle_identifier_at(const char *bundle_id, int index)
{
    @autoreleasepool {
        if (!bundle_id || index < 0) {
            return 0;
        }
        NSArray<NSRunningApplication *> *apps = [NSRunningApplication runningApplicationsWithBundleIdentifier:[NSString stringWithUTF8String:bundle_id]];
        if ((NSUInteger)index >= apps.count) {
            return 0;
        }
        return ns_retain_obj(apps[(NSUInteger)index]);
    }
}

void ns_runningapplication_terminate_automatically_terminable_applications(void)
{
    @autoreleasepool {
        [NSRunningApplication terminateAutomaticallyTerminableApplications];
    }
}

int ns_runningapplication_is_terminated(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.terminated ? 1 : 0;
    }
}

int ns_runningapplication_is_finished_launching(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.finishedLaunching ? 1 : 0;
    }
}

int ns_runningapplication_is_hidden(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.hidden ? 1 : 0;
    }
}

int ns_runningapplication_is_active(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.active ? 1 : 0;
    }
}

int ns_runningapplication_owns_menu_bar(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.ownsMenuBar ? 1 : 0;
    }
}

int ns_runningapplication_activation_policy(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? (int)obj.activationPolicy : (int)NSApplicationActivationPolicyProhibited;
    }
}

int ns_runningapplication_process_identifier(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? (int)obj.processIdentifier : -1;
    }
}

int ns_runningapplication_localized_name(uintptr_t application, char *out, int out_len)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? ns_copy_nsstring(obj.localizedName, out, out_len) : 0;
    }
}

int ns_runningapplication_bundle_identifier(uintptr_t application, char *out, int out_len)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? ns_copy_nsstring(obj.bundleIdentifier, out, out_len) : 0;
    }
}

int ns_runningapplication_bundle_url(uintptr_t application, char *out, int out_len)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? ns_copy_nsstring(obj.bundleURL.absoluteString, out, out_len) : 0;
    }
}

int ns_runningapplication_executable_url(uintptr_t application, char *out, int out_len)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj ? ns_copy_nsstring(obj.executableURL.absoluteString, out, out_len) : 0;
    }
}

uintptr_t ns_runningapplication_icon(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && obj.icon ? ns_image_wrap((__bridge void *)obj.icon) : 0;
    }
}

int ns_runningapplication_hide(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && [obj hide] ? 1 : 0;
    }
}

int ns_runningapplication_unhide(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && [obj unhide] ? 1 : 0;
    }
}

int ns_runningapplication_activate_with_options(uintptr_t application, unsigned options)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && [obj activateWithOptions:(NSApplicationActivationOptions)options] ? 1 : 0;
    }
}

int ns_runningapplication_terminate(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && [obj terminate] ? 1 : 0;
    }
}

int ns_runningapplication_force_terminate(uintptr_t application)
{
    @autoreleasepool {
        NSRunningApplication *obj = ns_runningapplication_from(application);
        return obj && [obj forceTerminate] ? 1 : 0;
    }
}
