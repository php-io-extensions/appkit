#import <AppKit/AppKit.h>
#import "ns-documentcontroller.h"
#import "ns-document.h"
#import "ns-window.h"

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

static NSDocumentController *ns_documentcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSDocumentController class]] ? (NSDocumentController *)obj : nil;
}

uintptr_t ns_documentcontroller_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSDocumentController sharedDocumentController]);
    }
}

uintptr_t ns_documentcontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSDocumentController alloc] init]);
    }
}

uintptr_t ns_documentcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSDocumentController *obj = (__bridge NSDocumentController *)controller;
        return [obj isKindOfClass:[NSDocumentController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_documentcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_documentcontroller_nsdocumentcontroller(uintptr_t controller)
{
    NSDocumentController *obj = ns_documentcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_documentcontroller_documents_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj ? (int)obj.documents.count : 0;
    }
}

uintptr_t ns_documentcontroller_document_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.documents.count) {
            return 0;
        }
        NSDocument *document = obj.documents[(NSUInteger)index];
        return document ? ns_document_wrap((__bridge void *)document) : 0;
    }
}

uintptr_t ns_documentcontroller_current_document(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj && obj.currentDocument ? ns_document_wrap((__bridge void *)obj.currentDocument) : 0;
    }
}

int ns_documentcontroller_current_directory(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj ? ns_copy_nsstring(obj.currentDirectory, out, out_len) : 0;
    }
}

uintptr_t ns_documentcontroller_document_for_url(uintptr_t controller, const char *url)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || !url) {
            return 0;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (!file) {
            return 0;
        }
        NSDocument *document = [obj documentForURL:file];
        return document ? ns_document_wrap((__bridge void *)document) : 0;
    }
}

uintptr_t ns_documentcontroller_document_for_window(uintptr_t controller, uintptr_t window)
{
    void *ptr = ns_window_nswindow(window);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj) {
            return 0;
        }
        NSDocument *document = [obj documentForWindow:(__bridge NSWindow *)ptr];
        return document ? ns_document_wrap((__bridge void *)document) : 0;
    }
}

void ns_documentcontroller_add_document(uintptr_t controller, uintptr_t document)
{
    void *ptr = ns_document_nsdocument(document);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (obj) {
            [obj addDocument:(__bridge NSDocument *)ptr];
        }
    }
}

void ns_documentcontroller_remove_document(uintptr_t controller, uintptr_t document)
{
    void *ptr = ns_document_nsdocument(document);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (obj) {
            [obj removeDocument:(__bridge NSDocument *)ptr];
        }
    }
}

int ns_documentcontroller_default_type(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj ? ns_copy_nsstring(obj.defaultType, out, out_len) : 0;
    }
}

uintptr_t ns_documentcontroller_open_untitled_document_and_display(uintptr_t controller, int display_document)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj) {
            return 0;
        }
        NSError *error = nil;
        NSDocument *document = [obj openUntitledDocumentAndDisplay:display_document ? YES : NO error:&error];
        return document ? ns_document_wrap((__bridge void *)document) : 0;
    }
}

int ns_documentcontroller_has_edited_documents(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj && obj.hasEditedDocuments ? 1 : 0;
    }
}

int ns_documentcontroller_document_class_names_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj ? (int)obj.documentClassNames.count : 0;
    }
}

int ns_documentcontroller_document_class_name_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.documentClassNames.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.documentClassNames[(NSUInteger)index], out, out_len);
    }
}

int ns_documentcontroller_display_name_for_type(uintptr_t controller, const char *type_name, char *out, int out_len)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || !type_name) {
            return 0;
        }
        return ns_copy_nsstring([obj displayNameForType:[NSString stringWithUTF8String:type_name]], out, out_len);
    }
}

int ns_documentcontroller_recent_document_urls_count(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        return obj ? (int)obj.recentDocumentURLs.count : 0;
    }
}

int ns_documentcontroller_recent_document_url_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.recentDocumentURLs.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recentDocumentURLs[(NSUInteger)index].absoluteString, out, out_len);
    }
}

void ns_documentcontroller_note_new_recent_document(uintptr_t controller, uintptr_t document)
{
    void *ptr = ns_document_nsdocument(document);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (obj) {
            [obj noteNewRecentDocument:(__bridge NSDocument *)ptr];
        }
    }
}

void ns_documentcontroller_note_new_recent_document_url(uintptr_t controller, const char *url)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (!obj || !url) {
            return;
        }
        NSURL *file = ns_url_from_cstr(url);
        if (file) {
            [obj noteNewRecentDocumentURL:file];
        }
    }
}

void ns_documentcontroller_clear_recent_documents(uintptr_t controller)
{
    @autoreleasepool {
        NSDocumentController *obj = ns_documentcontroller_from(controller);
        if (obj) {
            [obj clearRecentDocuments:nil];
        }
    }
}
