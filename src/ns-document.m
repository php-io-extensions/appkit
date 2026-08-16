#import <AppKit/AppKit.h>
#import "ns-document.h"
#import "ns-windowcontroller.h"

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

static NSURL *ns_url_from_cstr(const char *url)
{
    if (!url) {
        return nil;
    }
    NSString *str = [NSString stringWithUTF8String:url];
    NSURL *parsed = [NSURL URLWithString:str];
    return parsed ? parsed : [NSURL fileURLWithPath:str];
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

static NSDocument *ns_document_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDocument class]] ? (NSDocument *)obj : nil;
}

uintptr_t ns_document_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSDocument alloc] init]);
    }
}

uintptr_t ns_document_wrap(void *document)
{
    if (!document) {
        return 0;
    }
    @autoreleasepool {
        NSDocument *obj = (__bridge NSDocument *)document;
        return [obj isKindOfClass:[NSDocument class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_document_destroy(uintptr_t document)
{
    ns_release_handle(document);
}

void *ns_document_nsdocument(uintptr_t document)
{
    NSDocument *obj = ns_document_from(document);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_document_init_with_type(const char *type_name)
{
    @autoreleasepool {
        if (!type_name) {
            return 0;
        }
        NSError *error = nil;
        NSDocument *obj = [[NSDocument alloc] initWithType:[NSString stringWithUTF8String:type_name] error:&error];
        return obj ? ns_retain_obj(obj) : 0;
    }
}

uintptr_t ns_document_init_with_contents_of_url(const char *url, const char *type_name)
{
    @autoreleasepool {
        if (!url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        NSDocument *obj = [[NSDocument alloc] initWithContentsOfURL:file
                                                             ofType:[NSString stringWithUTF8String:type_name]
                                                              error:&error];
        return obj ? ns_retain_obj(obj) : 0;
    }
}

int ns_document_get_file_type(uintptr_t document, char *out, int out_len)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? ns_copy_nsstring(obj.fileType, out, out_len) : 0;
    }
}

void ns_document_set_file_type(uintptr_t document, const char *type_name)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj && type_name) {
            obj.fileType = [NSString stringWithUTF8String:type_name];
        }
    }
}

int ns_document_get_file_url(uintptr_t document, char *out, int out_len)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? ns_copy_nsstring(obj.fileURL.absoluteString, out, out_len) : 0;
    }
}

void ns_document_set_file_url(uintptr_t document, const char *url)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (!obj) {
            return;
        }
        if (!url) {
            obj.fileURL = nil;
            return;
        }
        obj.fileURL = ns_url_from_cstr(url);
    }
}

int ns_document_get_display_name(uintptr_t document, char *out, int out_len)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? ns_copy_nsstring(obj.displayName, out, out_len) : 0;
    }
}

void ns_document_set_display_name(uintptr_t document, const char *name)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            obj.displayName = name ? [NSString stringWithUTF8String:name] : @"";
        }
    }
}

int ns_document_is_document_edited(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj && obj.documentEdited ? 1 : 0;
    }
}

int ns_document_has_unautosaved_changes(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj && obj.hasUnautosavedChanges ? 1 : 0;
    }
}

int ns_document_is_draft(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj && obj.draft ? 1 : 0;
    }
}

void ns_document_set_draft(uintptr_t document, int draft)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            obj.draft = draft ? YES : NO;
        }
    }
}

int ns_document_is_entire_file_loaded(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj && obj.entireFileLoaded ? 1 : 0;
    }
}

void ns_document_update_change_count(uintptr_t document, unsigned change_type)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj updateChangeCount:(NSDocumentChangeType)change_type];
        }
    }
}

void ns_document_close(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj close];
        }
    }
}

void ns_document_make_window_controllers(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj makeWindowControllers];
        }
    }
}

void ns_document_show_windows(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj showWindows];
        }
    }
}

int ns_document_window_controllers_count(uintptr_t document)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? (int)obj.windowControllers.count : 0;
    }
}

uintptr_t ns_document_window_controller_at(uintptr_t document, int index)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (!obj || index < 0 || (NSUInteger)index >= obj.windowControllers.count) {
            return 0;
        }
        NSWindowController *controller = obj.windowControllers[(NSUInteger)index];
        return controller ? ns_windowcontroller_wrap((__bridge void *)controller) : 0;
    }
}

void ns_document_add_window_controller(uintptr_t document, uintptr_t window_controller)
{
    void *ptr = ns_windowcontroller_nswindowcontroller(window_controller);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj addWindowController:(__bridge NSWindowController *)ptr];
        }
    }
}

void ns_document_remove_window_controller(uintptr_t document, uintptr_t window_controller)
{
    void *ptr = ns_windowcontroller_nswindowcontroller(window_controller);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (obj) {
            [obj removeWindowController:(__bridge NSWindowController *)ptr];
        }
    }
}

int ns_document_read_from_url(uintptr_t document, const char *url, const char *type_name)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        return [obj readFromURL:file ofType:[NSString stringWithUTF8String:type_name] error:&error] ? 1 : 0;
    }
}

int ns_document_write_to_url(uintptr_t document, const char *url, const char *type_name)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        return [obj writeToURL:file ofType:[NSString stringWithUTF8String:type_name] error:&error] ? 1 : 0;
    }
}

int ns_document_revert_to_contents_of_url(uintptr_t document, const char *url, const char *type_name)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        if (!obj || !url || !type_name) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSError *error = nil;
        return [obj revertToContentsOfURL:file ofType:[NSString stringWithUTF8String:type_name] error:&error] ? 1 : 0;
    }
}

int ns_document_get_window_nib_name(uintptr_t document, char *out, int out_len)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? ns_copy_nsstring(obj.windowNibName, out, out_len) : 0;
    }
}

int ns_document_get_autosaving_file_type(uintptr_t document, char *out, int out_len)
{
    @autoreleasepool {
        NSDocument *obj = ns_document_from(document);
        return obj ? ns_copy_nsstring(obj.autosavingFileType, out, out_len) : 0;
    }
}
