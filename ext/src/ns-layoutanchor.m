#import <AppKit/AppKit.h>
#import "ns-layoutanchor.h"
#import "ns-layoutconstraint.h"
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

static id ns_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

static NSLayoutAnchor *ns_layoutanchor_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutAnchor class]] ? (NSLayoutAnchor *)obj : nil;
}

static NSLayoutXAxisAnchor *ns_layoutxaxisanchor_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutXAxisAnchor class]] ? (NSLayoutXAxisAnchor *)obj : nil;
}

static NSLayoutYAxisAnchor *ns_layoutyaxisanchor_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutYAxisAnchor class]] ? (NSLayoutYAxisAnchor *)obj : nil;
}

static NSLayoutDimension *ns_layoutdimension_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutDimension class]] ? (NSLayoutDimension *)obj : nil;
}

static NSView *ns_view_native(uintptr_t view)
{
    void *native = ns_view_nsview(view);
    return native ? (__bridge NSView *)native : nil;
}

uintptr_t ns_layoutanchor_wrap(void *anchor)
{
    if (!anchor) {
        return 0;
    }
    @autoreleasepool {
        NSLayoutAnchor *obj = (__bridge NSLayoutAnchor *)anchor;
        return [obj isKindOfClass:[NSLayoutAnchor class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_layoutanchor_destroy(uintptr_t anchor)
{
    ns_release_handle(anchor);
}

void *ns_layoutanchor_nslayoutanchor(uintptr_t anchor)
{
    NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
    return obj ? (__bridge void *)obj : NULL;
}

static uintptr_t wrap_constraint(NSLayoutConstraint *c)
{
    return c ? ns_layoutconstraint_wrap((__bridge void *)c) : 0;
}

uintptr_t ns_layoutanchor_constraint_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant)
{
    @autoreleasepool {
        NSLayoutAnchor *a = ns_layoutanchor_from(anchor);
        NSLayoutAnchor *b = ns_layoutanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        NSLayoutConstraint *c = has_constant ? [a constraintEqualToAnchor:b constant:(CGFloat)constant] : [a constraintEqualToAnchor:b];
        return wrap_constraint(c);
    }
}

uintptr_t ns_layoutanchor_constraint_greater_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant)
{
    @autoreleasepool {
        NSLayoutAnchor *a = ns_layoutanchor_from(anchor);
        NSLayoutAnchor *b = ns_layoutanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        NSLayoutConstraint *c = has_constant ? [a constraintGreaterThanOrEqualToAnchor:b constant:(CGFloat)constant] : [a constraintGreaterThanOrEqualToAnchor:b];
        return wrap_constraint(c);
    }
}

uintptr_t ns_layoutanchor_constraint_less_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant)
{
    @autoreleasepool {
        NSLayoutAnchor *a = ns_layoutanchor_from(anchor);
        NSLayoutAnchor *b = ns_layoutanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        NSLayoutConstraint *c = has_constant ? [a constraintLessThanOrEqualToAnchor:b constant:(CGFloat)constant] : [a constraintLessThanOrEqualToAnchor:b];
        return wrap_constraint(c);
    }
}

int ns_layoutanchor_name(uintptr_t anchor, char *out, int out_len)
{
    @autoreleasepool {
        NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
        return ns_copy_nsstring(obj.name, out, out_len);
    }
}

void *ns_layoutanchor_item(uintptr_t anchor)
{
    @autoreleasepool {
        NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
        return obj && obj.item ? (__bridge void *)obj.item : NULL;
    }
}

int ns_layoutanchor_has_ambiguous_layout(uintptr_t anchor)
{
    @autoreleasepool {
        NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
        return obj && obj.hasAmbiguousLayout ? 1 : 0;
    }
}

int ns_layoutanchor_constraints_affecting_layout_count(uintptr_t anchor)
{
    @autoreleasepool {
        NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
        return obj ? (int)obj.constraintsAffectingLayout.count : 0;
    }
}

uintptr_t ns_layoutanchor_constraint_affecting_layout_at(uintptr_t anchor, int index)
{
    @autoreleasepool {
        NSLayoutAnchor *obj = ns_layoutanchor_from(anchor);
        if (!obj || index < 0 || index >= (int)obj.constraintsAffectingLayout.count) {
            return 0;
        }
        NSLayoutConstraint *c = obj.constraintsAffectingLayout[(NSUInteger)index];
        return wrap_constraint(c);
    }
}

uintptr_t ns_layoutxaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other)
{
    @autoreleasepool {
        NSLayoutXAxisAnchor *a = ns_layoutxaxisanchor_from(anchor);
        NSLayoutXAxisAnchor *b = ns_layoutxaxisanchor_from(other);
        return a && b ? ns_layoutanchor_wrap((__bridge void *)[a anchorWithOffsetToAnchor:b]) : 0;
    }
}

uintptr_t ns_layoutxaxisanchor_constraint_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutXAxisAnchor *a = ns_layoutxaxisanchor_from(anchor);
        NSLayoutXAxisAnchor *b = ns_layoutxaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintEqualToSystemSpacingAfterAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutxaxisanchor_constraint_greater_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutXAxisAnchor *a = ns_layoutxaxisanchor_from(anchor);
        NSLayoutXAxisAnchor *b = ns_layoutxaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutxaxisanchor_constraint_less_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutXAxisAnchor *a = ns_layoutxaxisanchor_from(anchor);
        NSLayoutXAxisAnchor *b = ns_layoutxaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintLessThanOrEqualToSystemSpacingAfterAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutyaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other)
{
    @autoreleasepool {
        NSLayoutYAxisAnchor *a = ns_layoutyaxisanchor_from(anchor);
        NSLayoutYAxisAnchor *b = ns_layoutyaxisanchor_from(other);
        return a && b ? ns_layoutanchor_wrap((__bridge void *)[a anchorWithOffsetToAnchor:b]) : 0;
    }
}

uintptr_t ns_layoutyaxisanchor_constraint_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutYAxisAnchor *a = ns_layoutyaxisanchor_from(anchor);
        NSLayoutYAxisAnchor *b = ns_layoutyaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintEqualToSystemSpacingBelowAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutyaxisanchor_constraint_greater_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutYAxisAnchor *a = ns_layoutyaxisanchor_from(anchor);
        NSLayoutYAxisAnchor *b = ns_layoutyaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutyaxisanchor_constraint_less_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutYAxisAnchor *a = ns_layoutyaxisanchor_from(anchor);
        NSLayoutYAxisAnchor *b = ns_layoutyaxisanchor_from(other);
        if (!a || !b) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return wrap_constraint([a constraintLessThanOrEqualToSystemSpacingBelowAnchor:b multiplier:(CGFloat)multiplier]);
        }
        return 0;
    }
}

uintptr_t ns_layoutdimension_constraint_equal_to_constant(uintptr_t anchor, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        return a ? wrap_constraint([a constraintEqualToConstant:(CGFloat)constant]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_constant(uintptr_t anchor, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        return a ? wrap_constraint([a constraintGreaterThanOrEqualToConstant:(CGFloat)constant]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_constant(uintptr_t anchor, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        return a ? wrap_constraint([a constraintLessThanOrEqualToConstant:(CGFloat)constant]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintEqualToAnchor:b multiplier:(CGFloat)multiplier]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintGreaterThanOrEqualToAnchor:b multiplier:(CGFloat)multiplier]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintLessThanOrEqualToAnchor:b multiplier:(CGFloat)multiplier]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintEqualToAnchor:b multiplier:(CGFloat)multiplier constant:(CGFloat)constant]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintGreaterThanOrEqualToAnchor:b multiplier:(CGFloat)multiplier constant:(CGFloat)constant]) : 0;
    }
}

uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant)
{
    @autoreleasepool {
        NSLayoutDimension *a = ns_layoutdimension_from(anchor);
        NSLayoutDimension *b = ns_layoutdimension_from(other);
        return a && b ? wrap_constraint([a constraintLessThanOrEqualToAnchor:b multiplier:(CGFloat)multiplier constant:(CGFloat)constant]) : 0;
    }
}

#define NS_VIEW_ANCHOR(fn, prop) \
uintptr_t fn(uintptr_t view) \
{ \
    @autoreleasepool { \
        NSView *v = ns_view_native(view); \
        return v ? ns_layoutanchor_wrap((__bridge void *)v.prop) : 0; \
    } \
}

NS_VIEW_ANCHOR(ns_view_leading_anchor, leadingAnchor)
NS_VIEW_ANCHOR(ns_view_trailing_anchor, trailingAnchor)
NS_VIEW_ANCHOR(ns_view_left_anchor, leftAnchor)
NS_VIEW_ANCHOR(ns_view_right_anchor, rightAnchor)
NS_VIEW_ANCHOR(ns_view_top_anchor, topAnchor)
NS_VIEW_ANCHOR(ns_view_bottom_anchor, bottomAnchor)
NS_VIEW_ANCHOR(ns_view_width_anchor, widthAnchor)
NS_VIEW_ANCHOR(ns_view_height_anchor, heightAnchor)
NS_VIEW_ANCHOR(ns_view_center_x_anchor, centerXAnchor)
NS_VIEW_ANCHOR(ns_view_center_y_anchor, centerYAnchor)
NS_VIEW_ANCHOR(ns_view_first_baseline_anchor, firstBaselineAnchor)
NS_VIEW_ANCHOR(ns_view_last_baseline_anchor, lastBaselineAnchor)
