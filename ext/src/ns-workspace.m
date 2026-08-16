#import <AppKit/AppKit.h>
#import "ns-workspace.h"
#import "ns-image.h"
#import "ns-runningapplication.h"

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

static NSWorkspace *ns_workspace_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSWorkspace class]] ? (NSWorkspace *)obj : nil;
}

uintptr_t ns_workspace_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSWorkspace sharedWorkspace]);
    }
}

uintptr_t ns_workspace_wrap(void *workspace)
{
    if (!workspace) {
        return 0;
    }
    @autoreleasepool {
        NSWorkspace *obj = (__bridge NSWorkspace *)workspace;
        return [obj isKindOfClass:[NSWorkspace class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_workspace_destroy(uintptr_t workspace)
{
    ns_release_handle(workspace);
}

void *ns_workspace_nsworkspace(uintptr_t workspace)
{
    NSWorkspace *obj = ns_workspace_from(workspace);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_workspace_open_url(uintptr_t workspace, const char *url)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !url) {
            return 0;
        }
        NSURL *parsed = [NSURL URLWithString:[NSString stringWithUTF8String:url]];
        if (!parsed) {
            parsed = [NSURL fileURLWithPath:[NSString stringWithUTF8String:url]];
        }
        return parsed && [obj openURL:parsed] ? 1 : 0;
    }
}

int ns_workspace_select_file(uintptr_t workspace, const char *full_path, const char *root_path)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj) {
            return 0;
        }
        NSString *full = full_path ? [NSString stringWithUTF8String:full_path] : nil;
        NSString *root = root_path ? [NSString stringWithUTF8String:root_path] : @"";
        return [obj selectFile:full inFileViewerRootedAtPath:root] ? 1 : 0;
    }
}

int ns_workspace_show_search_results(uintptr_t workspace, const char *query)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !query) {
            return 0;
        }
        return [obj showSearchResultsForQueryString:[NSString stringWithUTF8String:query]] ? 1 : 0;
    }
}

int ns_workspace_is_file_package(uintptr_t workspace, const char *path)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !path) {
            return 0;
        }
        return [obj isFilePackageAtPath:[NSString stringWithUTF8String:path]] ? 1 : 0;
    }
}

uintptr_t ns_workspace_icon_for_file(uintptr_t workspace, const char *path)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !path) {
            return 0;
        }
        NSImage *icon = [obj iconForFile:[NSString stringWithUTF8String:path]];
        return icon ? ns_image_wrap((__bridge void *)icon) : 0;
    }
}

void ns_workspace_hide_other_applications(uintptr_t workspace)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (obj) {
            [obj hideOtherApplications];
        }
    }
}

int ns_workspace_url_for_application_with_bundle_id(uintptr_t workspace, const char *bundle_id, char *out, int out_len)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !bundle_id) {
            return 0;
        }
        NSURL *url = [obj URLForApplicationWithBundleIdentifier:[NSString stringWithUTF8String:bundle_id]];
        return ns_copy_nsstring(url.absoluteString, out, out_len);
    }
}

int ns_workspace_url_for_application_to_open_url(uintptr_t workspace, const char *url, char *out, int out_len)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || !url) {
            return 0;
        }
        NSURL *parsed = [NSURL URLWithString:[NSString stringWithUTF8String:url]];
        if (!parsed) {
            parsed = [NSURL fileURLWithPath:[NSString stringWithUTF8String:url]];
        }
        if (!parsed) {
            return 0;
        }
        NSURL *app = [obj URLForApplicationToOpenURL:parsed];
        return ns_copy_nsstring(app.absoluteString, out, out_len);
    }
}

int ns_workspace_frontmost_application_name(uintptr_t workspace, char *out, int out_len)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.frontmostApplication.localizedName, out, out_len);
    }
}

int ns_workspace_running_applications_count(uintptr_t workspace)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        return obj ? (int)obj.runningApplications.count : 0;
    }
}

uintptr_t ns_workspace_running_application_at(uintptr_t workspace, int index)
{
    @autoreleasepool {
        NSWorkspace *obj = ns_workspace_from(workspace);
        if (!obj || index < 0 || (NSUInteger)index >= obj.runningApplications.count) {
            return 0;
        }
        NSRunningApplication *app = obj.runningApplications[(NSUInteger)index];
        return app ? ns_runningapplication_wrap((__bridge void *)app) : 0;
    }
}
