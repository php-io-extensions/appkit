#import <AppKit/AppKit.h>
#import "ns-layoutconstraint.h"
#import "ns-layoutanchor.h"
#import "ns-view.h"
#import "ns-layoutguide.h"

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

static NSLayoutConstraint *ns_layoutconstraint_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutConstraint class]] ? (NSLayoutConstraint *)obj : nil;
}

static id ns_layout_item_from_handle(uintptr_t handle)
{
    void *view = ns_view_nsview(handle);
    if (view) {
        return (__bridge id)view;
    }
    void *guide = ns_layoutguide_nslayoutguide(handle);
    if (guide) {
        return (__bridge id)guide;
    }
    return nil;
}

uintptr_t ns_layoutconstraint_wrap(void *constraint)
{
    if (!constraint) {
        return 0;
    }
    @autoreleasepool {
        NSLayoutConstraint *obj = (__bridge NSLayoutConstraint *)constraint;
        return [obj isKindOfClass:[NSLayoutConstraint class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_layoutconstraint_destroy(uintptr_t constraint)
{
    ns_release_handle(constraint);
}

void *ns_layoutconstraint_nslayoutconstraint(uintptr_t constraint)
{
    NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_layoutconstraint_constraint_with_item(uintptr_t view1, int attr1, int relation, uintptr_t view2, int attr2, double multiplier, double constant)
{
    @autoreleasepool {
        id item1 = ns_layout_item_from_handle(view1);
        id item2 = view2 ? ns_layout_item_from_handle(view2) : nil;
        if (!item1) {
            return 0;
        }
        NSLayoutConstraint *c = [NSLayoutConstraint constraintWithItem:item1
                                                             attribute:(NSLayoutAttribute)attr1
                                                             relatedBy:(NSLayoutRelation)relation
                                                                toItem:item2
                                                             attribute:(NSLayoutAttribute)attr2
                                                            multiplier:(CGFloat)multiplier
                                                              constant:(CGFloat)constant];
        return c ? ns_retain_obj(c) : 0;
    }
}

static NSArray<NSLayoutConstraint *> *ns_layoutconstraints_from_handles(const uintptr_t *constraints, int count)
{
    NSMutableArray<NSLayoutConstraint *> *list = [NSMutableArray array];
    int i;
    for (i = 0; i < count; i++) {
        NSLayoutConstraint *c = ns_layoutconstraint_from(constraints[i]);
        if (c) {
            [list addObject:c];
        }
    }
    return list;
}

void ns_layoutconstraint_activate(const uintptr_t *constraints, int count)
{
    @autoreleasepool {
        if (!constraints || count <= 0) {
            return;
        }
        [NSLayoutConstraint activateConstraints:ns_layoutconstraints_from_handles(constraints, count)];
    }
}

void ns_layoutconstraint_deactivate(const uintptr_t *constraints, int count)
{
    @autoreleasepool {
        if (!constraints || count <= 0) {
            return;
        }
        [NSLayoutConstraint deactivateConstraints:ns_layoutconstraints_from_handles(constraints, count)];
    }
}

void ns_layoutconstraint_set_active(uintptr_t constraint, int active)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        if (obj) {
            obj.active = active ? YES : NO;
        }
    }
}

int ns_layoutconstraint_is_active(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj && obj.active ? 1 : 0;
    }
}

void ns_layoutconstraint_set_priority(uintptr_t constraint, float priority)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        if (obj) {
            obj.priority = priority;
        }
    }
}

float ns_layoutconstraint_priority(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? obj.priority : 0.0f;
    }
}

void ns_layoutconstraint_set_constant(uintptr_t constraint, double constant)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        if (obj) {
            obj.constant = (CGFloat)constant;
        }
    }
}

double ns_layoutconstraint_constant(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? (double)obj.constant : 0.0;
    }
}

void ns_layoutconstraint_set_identifier(uintptr_t constraint, const char *identifier)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        if (!obj) {
            return;
        }
        obj.identifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
    }
}

int ns_layoutconstraint_identifier(uintptr_t constraint, char *out, int out_len)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return ns_copy_nsstring(obj.identifier, out, out_len);
    }
}

int ns_layoutconstraint_first_attribute(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? (int)obj.firstAttribute : 0;
    }
}

int ns_layoutconstraint_second_attribute(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? (int)obj.secondAttribute : 0;
    }
}

int ns_layoutconstraint_relation(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? (int)obj.relation : 0;
    }
}

double ns_layoutconstraint_multiplier(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj ? (double)obj.multiplier : 0.0;
    }
}

uintptr_t ns_layoutconstraint_first_anchor(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj && obj.firstAnchor ? ns_layoutanchor_wrap((__bridge void *)obj.firstAnchor) : 0;
    }
}

uintptr_t ns_layoutconstraint_second_anchor(uintptr_t constraint)
{
    @autoreleasepool {
        NSLayoutConstraint *obj = ns_layoutconstraint_from(constraint);
        return obj && obj.secondAnchor ? ns_layoutanchor_wrap((__bridge void *)obj.secondAnchor) : 0;
    }
}
