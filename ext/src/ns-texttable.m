#import <AppKit/AppKit.h>
#import "ns-texttable.h"

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

static NSTextTable *ns_texttable_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextTable class]] ? (NSTextTable *)obj : nil;
}

uintptr_t ns_texttable_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextTable alloc] init]);
    }
}

uintptr_t ns_texttable_wrap(void *table)
{
    if (!table) {
        return 0;
    }
    @autoreleasepool {
        NSTextTable *obj = (__bridge NSTextTable *)table;
        return [obj isKindOfClass:[NSTextTable class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_texttable_destroy(uintptr_t table)
{
    ns_release_handle(table);
}

void *ns_texttable_nstexttable(uintptr_t table)
{
    NSTextTable *obj = ns_texttable_from(table);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_texttable_set_number_of_columns(uintptr_t table, int columns)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.numberOfColumns = (NSUInteger)columns;
        }
    }
}

int ns_texttable_get_number_of_columns(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.numberOfColumns : 0;
    }
}

void ns_texttable_set_layout_algorithm(uintptr_t table, int algorithm)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.layoutAlgorithm = (NSTextTableLayoutAlgorithm)algorithm;
        }
    }
}

int ns_texttable_get_layout_algorithm(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.layoutAlgorithm : 0;
    }
}

void ns_texttable_set_collapses_borders(uintptr_t table, int flag)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.collapsesBorders = flag ? YES : NO;
        }
    }
}

int ns_texttable_collapses_borders(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj && obj.collapsesBorders ? 1 : 0;
    }
}

void ns_texttable_set_hides_empty_cells(uintptr_t table, int flag)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.hidesEmptyCells = flag ? YES : NO;
        }
    }
}

int ns_texttable_hides_empty_cells(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj && obj.hidesEmptyCells ? 1 : 0;
    }
}

void ns_texttable_set_content_width(uintptr_t table, double width, int type)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            [obj setContentWidth:(CGFloat)width type:(NSTextBlockValueType)type];
        }
    }
}

void ns_texttable_get_content_width(uintptr_t table, double *width, int *type)
{
    if (width) {
        *width = 0;
    }
    if (type) {
        *type = 0;
    }
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (!obj) {
            return;
        }
        if (width) {
            *width = obj.contentWidth;
        }
        if (type) {
            *type = (int)obj.contentWidthValueType;
        }
    }
}

void ns_texttable_set_vertical_alignment(uintptr_t table, int alignment)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.verticalAlignment = (NSTextBlockVerticalAlignment)alignment;
        }
    }
}

int ns_texttable_get_vertical_alignment(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.verticalAlignment : 0;
    }
}
