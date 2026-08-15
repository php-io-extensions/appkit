#import <AppKit/AppKit.h>
#import "ns-textblock.h"

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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSTextBlock *ns_textblock_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextBlock class]] ? (NSTextBlock *)obj : nil;
}

uintptr_t ns_textblock_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextBlock alloc] init]);
    }
}

uintptr_t ns_textblock_wrap(void *block)
{
    if (!block) {
        return 0;
    }
    @autoreleasepool {
        NSTextBlock *obj = (__bridge NSTextBlock *)block;
        return [obj isKindOfClass:[NSTextBlock class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textblock_destroy(uintptr_t block)
{
    ns_release_handle(block);
}

void *ns_textblock_nstextblock(uintptr_t block)
{
    NSTextBlock *obj = ns_textblock_from(block);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textblock_set_value(uintptr_t block, double val, int type, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            [obj setValue:(CGFloat)val type:(NSTextBlockValueType)type forDimension:(NSTextBlockDimension)dimension];
        }
    }
}

double ns_textblock_value_for_dimension(uintptr_t block, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)[obj valueForDimension:(NSTextBlockDimension)dimension] : 0.0;
    }
}

int ns_textblock_value_type_for_dimension(uintptr_t block, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)[obj valueTypeForDimension:(NSTextBlockDimension)dimension] : 0;
    }
}

void ns_textblock_set_content_width(uintptr_t block, double width, int type)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            [obj setContentWidth:(CGFloat)width type:(NSTextBlockValueType)type];
        }
    }
}

double ns_textblock_content_width(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)obj.contentWidth : 0.0;
    }
}

int ns_textblock_content_width_value_type(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)obj.contentWidthValueType : 0;
    }
}

void ns_textblock_set_width(uintptr_t block, double val, int type, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (!obj) {
            return;
        }
        if (edge < 0) {
            [obj setWidth:(CGFloat)val type:(NSTextBlockValueType)type forLayer:(NSTextBlockLayer)layer];
        } else {
            [obj setWidth:(CGFloat)val type:(NSTextBlockValueType)type forLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge];
        }
    }
}

double ns_textblock_width_for_layer(uintptr_t block, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)[obj widthForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge] : 0.0;
    }
}

int ns_textblock_width_value_type_for_layer(uintptr_t block, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)[obj widthValueTypeForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge] : 0;
    }
}

void ns_textblock_set_vertical_alignment(uintptr_t block, int alignment)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            obj.verticalAlignment = (NSTextBlockVerticalAlignment)alignment;
        }
    }
}

int ns_textblock_get_vertical_alignment(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)obj.verticalAlignment : 0;
    }
}

void ns_textblock_set_background_color(uintptr_t block, uintptr_t color)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            obj.backgroundColor = ns_color_from_handle(color);
        }
    }
}

uintptr_t ns_textblock_background_color(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj && obj.backgroundColor ? ns_retain_obj(obj.backgroundColor) : 0;
    }
}

void ns_textblock_set_border_color(uintptr_t block, uintptr_t color, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (!obj) {
            return;
        }
        NSColor *c = ns_color_from_handle(color);
        if (edge < 0) {
            [obj setBorderColor:c];
        } else {
            [obj setBorderColor:c forEdge:(NSRectEdge)edge];
        }
    }
}
