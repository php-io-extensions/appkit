#import <AppKit/AppKit.h>
#import "ns-userdefaultscontroller.h"
#import "ns-dictionary.h"

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

static NSUserDefaultsController *ns_userdefaultscontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSUserDefaultsController class]] ? (NSUserDefaultsController *)obj : nil;
}

uintptr_t ns_userdefaultscontroller_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSUserDefaultsController sharedUserDefaultsController]);
    }
}

uintptr_t ns_userdefaultscontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSUserDefaultsController alloc] initWithDefaults:nil initialValues:nil]);
    }
}

uintptr_t ns_userdefaultscontroller_create_with_initial_values(uintptr_t dictionary)
{
    @autoreleasepool {
        void *ptr = ns_dictionary_nsdictionary(dictionary);
        NSDictionary *values = ptr ? (__bridge NSDictionary *)ptr : nil;
        return ns_retain_obj([[NSUserDefaultsController alloc] initWithDefaults:nil initialValues:values]);
    }
}

uintptr_t ns_userdefaultscontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSUserDefaultsController *obj = (__bridge NSUserDefaultsController *)controller;
        return [obj isKindOfClass:[NSUserDefaultsController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_userdefaultscontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_userdefaultscontroller_nsuserdefaultscontroller(uintptr_t controller)
{
    NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_userdefaultscontroller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_userdefaultscontroller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_userdefaultscontroller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}

void *ns_userdefaultscontroller_defaults(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && obj.defaults ? (__bridge void *)obj.defaults : NULL;
    }
}

void ns_userdefaultscontroller_set_initial_values(uintptr_t controller, uintptr_t dictionary)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            void *ptr = ns_dictionary_nsdictionary(dictionary);
            obj.initialValues = ptr ? (__bridge NSDictionary *)ptr : nil;
        }
    }
}

uintptr_t ns_userdefaultscontroller_initial_values(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (!obj || !obj.initialValues) {
            return 0;
        }
        NSDictionary *copy = [obj.initialValues copy];
        return ns_dictionary_wrap((__bridge void *)copy);
    }
}

void ns_userdefaultscontroller_set_applies_immediately(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            obj.appliesImmediately = value ? YES : NO;
        }
    }
}

int ns_userdefaultscontroller_applies_immediately(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && obj.appliesImmediately ? 1 : 0;
    }
}

int ns_userdefaultscontroller_has_unapplied_changes(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && obj.hasUnappliedChanges ? 1 : 0;
    }
}

void *ns_userdefaultscontroller_values(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        return obj && obj.values ? (__bridge void *)obj.values : NULL;
    }
}

void ns_userdefaultscontroller_revert(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            [obj revert:nil];
        }
    }
}

void ns_userdefaultscontroller_save(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            [obj save:nil];
        }
    }
}

void ns_userdefaultscontroller_revert_to_initial_values(uintptr_t controller)
{
    @autoreleasepool {
        NSUserDefaultsController *obj = ns_userdefaultscontroller_from(controller);
        if (obj) {
            [obj revertToInitialValues:nil];
        }
    }
}
