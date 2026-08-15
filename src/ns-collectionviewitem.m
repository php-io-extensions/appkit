#import <AppKit/AppKit.h>
#import "ns-collectionviewitem.h"
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


static NSCollectionViewItem *ns_collectionviewitem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewItem class]] ? (NSCollectionViewItem *)obj : nil;
}

uintptr_t ns_collectionviewitem_create(void)
{
    @autoreleasepool {
        NSCollectionViewItem *item = [[NSCollectionViewItem alloc] init];
        return ns_retain_obj(item);
    }
}

uintptr_t ns_collectionviewitem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewItem *obj = (__bridge NSCollectionViewItem *)item;
        return [obj isKindOfClass:[NSCollectionViewItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewitem_destroy(uintptr_t item)
{
    ns_release_handle(item);
}

void *ns_collectionviewitem_nscollectionviewitem(uintptr_t item)
{
    NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewitem_set_view(uintptr_t item, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (obj) {
            obj.view = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_collectionviewitem_view(uintptr_t item)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (!obj || !obj.view) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.view);
    }
}

void ns_collectionviewitem_set_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_collectionviewitem_get_title(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_collectionviewitem_set_text(uintptr_t item, const char *text)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (obj && obj.textField) {
            obj.textField.stringValue = text ? [NSString stringWithUTF8String:text] : @"";
        }
    }
}

int ns_collectionviewitem_get_text(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (!obj || !obj.textField) {
            return 0;
        }
        return ns_copy_nsstring(obj.textField.stringValue, out, out_len);
    }
}

void ns_collectionviewitem_set_selected(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (obj) {
            obj.selected = flag ? YES : NO;
        }
    }
}

int ns_collectionviewitem_is_selected(uintptr_t item)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        return obj && obj.selected ? 1 : 0;
    }
}

void ns_collectionviewitem_set_highlight_state(uintptr_t item, int state)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (obj) {
            obj.highlightState = (NSCollectionViewItemHighlightState)state;
        }
    }
}

int ns_collectionviewitem_get_highlight_state(uintptr_t item)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        return obj ? (int)obj.highlightState : 0;
    }
}

uintptr_t ns_collectionviewitem_text_field(uintptr_t item)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (!obj || !obj.textField) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.textField);
    }
}

uintptr_t ns_collectionviewitem_image_view(uintptr_t item)
{
    @autoreleasepool {
        NSCollectionViewItem *obj = ns_collectionviewitem_from(item);
        if (!obj || !obj.imageView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.imageView);
    }
}
