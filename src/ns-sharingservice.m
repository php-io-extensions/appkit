#import <AppKit/AppKit.h>
#import "ns-sharingservice.h"

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

static NSSharingService *ns_sharingservice_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSharingService class]] ? (NSSharingService *)obj : nil;
}

static NSArray<NSString *> *ns_sharingservice_strings_array(const char **items, int count)
{
    NSMutableArray *array = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    int i;
    for (i = 0; i < count; i++) {
        if (items && items[i]) {
            [array addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return [array copy];
}

uintptr_t ns_sharingservice_named(const char *service_name)
{
    @autoreleasepool {
        if (!service_name) {
            return 0;
        }
        NSSharingService *service = [NSSharingService sharingServiceNamed:[NSString stringWithUTF8String:service_name]];
        return service ? ns_retain_obj(service) : 0;
    }
}

uintptr_t ns_sharingservice_wrap(void *service)
{
    if (!service) {
        return 0;
    }
    @autoreleasepool {
        NSSharingService *obj = (__bridge NSSharingService *)service;
        return [obj isKindOfClass:[NSSharingService class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_sharingservice_destroy(uintptr_t service)
{
    ns_release_handle(service);
}

void *ns_sharingservice_nssharingservice(uintptr_t service)
{
    NSSharingService *obj = ns_sharingservice_from(service);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_sharingservice_title(uintptr_t service, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

int ns_sharingservice_menu_item_title(uintptr_t service, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        return ns_copy_nsstring(obj.menuItemTitle, out, out_len);
    }
}

void ns_sharingservice_set_menu_item_title(uintptr_t service, const char *title)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (obj && title) {
            obj.menuItemTitle = [NSString stringWithUTF8String:title];
        }
    }
}

int ns_sharingservice_subject(uintptr_t service, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        return ns_copy_nsstring(obj.subject, out, out_len);
    }
}

void ns_sharingservice_set_subject(uintptr_t service, const char *subject)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (obj && subject) {
            obj.subject = [NSString stringWithUTF8String:subject];
        }
    }
}

void ns_sharingservice_set_recipients(uintptr_t service, const char **items, int count)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (obj) {
            obj.recipients = ns_sharingservice_strings_array(items, count);
        }
    }
}

int ns_sharingservice_recipients_count(uintptr_t service)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        return obj && obj.recipients ? (int)obj.recipients.count : 0;
    }
}

int ns_sharingservice_recipient_at(uintptr_t service, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (!obj || !obj.recipients || index < 0 || index >= (int)obj.recipients.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recipients[(NSUInteger)index], out, out_len);
    }
}

int ns_sharingservice_can_perform_with_strings(uintptr_t service, const char **items, int count)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (!obj) {
            return 0;
        }
        NSArray *array = ns_sharingservice_strings_array(items, count);
        return [obj canPerformWithItems:array.count > 0 ? array : nil] ? 1 : 0;
    }
}

void ns_sharingservice_perform_with_strings(uintptr_t service, const char **items, int count)
{
    @autoreleasepool {
        NSSharingService *obj = ns_sharingservice_from(service);
        if (!obj) {
            return;
        }
        NSArray *array = ns_sharingservice_strings_array(items, count);
        [obj performWithItems:array];
    }
}
