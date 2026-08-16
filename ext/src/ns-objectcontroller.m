#import <AppKit/AppKit.h>
#import "ns-objectcontroller.h"

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

static NSObjectController *ns_objectcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSObjectController class]] ? (NSObjectController *)obj : nil;
}

uintptr_t ns_objectcontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSObjectController alloc] init]);
    }
}

uintptr_t ns_objectcontroller_create_with_content(void *content)
{
    @autoreleasepool {
        id obj = content ? (__bridge id)content : nil;
        return ns_retain_obj([[NSObjectController alloc] initWithContent:obj]);
    }
}

uintptr_t ns_objectcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSObjectController *obj = (__bridge NSObjectController *)controller;
        return [obj isKindOfClass:[NSObjectController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_objectcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_objectcontroller_nsobjectcontroller(uintptr_t controller)
{
    NSObjectController *obj = ns_objectcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_objectcontroller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_objectcontroller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_objectcontroller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}

void ns_objectcontroller_set_content(uintptr_t controller, void *content)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj) {
            obj.content = content ? (__bridge id)content : nil;
        }
    }
}

void *ns_objectcontroller_content(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.content ? (__bridge void *)obj.content : NULL;
    }
}

void *ns_objectcontroller_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.selection ? (__bridge void *)obj.selection : NULL;
    }
}

int ns_objectcontroller_selected_objects_count(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj ? (int)obj.selectedObjects.count : 0;
    }
}

void *ns_objectcontroller_selected_object_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.selectedObjects.count) {
            return NULL;
        }
        id item = obj.selectedObjects[(NSUInteger)index];
        return item ? (__bridge void *)item : NULL;
    }
}

void ns_objectcontroller_set_automatically_prepares_content(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj) {
            obj.automaticallyPreparesContent = value ? YES : NO;
        }
    }
}

int ns_objectcontroller_automatically_prepares_content(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.automaticallyPreparesContent ? 1 : 0;
    }
}

void ns_objectcontroller_prepare_content(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj) {
            [obj prepareContent];
        }
    }
}

void ns_objectcontroller_set_object_class_name(uintptr_t controller, const char *class_name)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj && class_name) {
            Class cls = NSClassFromString([NSString stringWithUTF8String:class_name]);
            if (cls) {
                obj.objectClass = cls;
            }
        }
    }
}

int ns_objectcontroller_object_class_name(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (!obj || !obj.objectClass) {
            return 0;
        }
        return ns_copy_nsstring(NSStringFromClass(obj.objectClass), out, out_len);
    }
}

void *ns_objectcontroller_new_object(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (!obj) {
            return NULL;
        }
        id created = [obj newObject];
        return created ? (__bridge void *)created : NULL;
    }
}

void ns_objectcontroller_add_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj && object) {
            [obj addObject:(__bridge id)object];
        }
    }
}

void ns_objectcontroller_remove_object(uintptr_t controller, void *object)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj && object) {
            [obj removeObject:(__bridge id)object];
        }
    }
}

void ns_objectcontroller_set_editable(uintptr_t controller, int value)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        if (obj) {
            obj.editable = value ? YES : NO;
        }
    }
}

int ns_objectcontroller_is_editable(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.isEditable ? 1 : 0;
    }
}

int ns_objectcontroller_can_add(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.canAdd ? 1 : 0;
    }
}

int ns_objectcontroller_can_remove(uintptr_t controller)
{
    @autoreleasepool {
        NSObjectController *obj = ns_objectcontroller_from(controller);
        return obj && obj.canRemove ? 1 : 0;
    }
}
