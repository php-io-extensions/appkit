#!/usr/bin/env python3
"""Generate NSDockTile, NSAlignmentFeedbackFilter, NSPressureConfiguration,
NSLayoutConstraint, NSLayoutAnchor family, NSLayoutGuide binds."""

from __future__ import annotations

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def write(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(content, encoding="utf-8")
    print(f"wrote {path.relative_to(ROOT)}")


COMMON_OBJC = """
static int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\\0';
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
"""

# --- headers ---

write(ROOT / "src/ns-docktile.h", """#ifndef PHP_APPKIT_NS_DOCKTILE_H
#define PHP_APPKIT_NS_DOCKTILE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_docktile_application(void);
uintptr_t ns_docktile_wrap(void *dock_tile);
void ns_docktile_destroy(uintptr_t tile);
void *ns_docktile_nsdocktile(uintptr_t tile);
void ns_docktile_size(uintptr_t tile, double *width, double *height);
void ns_docktile_set_content_view(uintptr_t tile, uintptr_t view);
uintptr_t ns_docktile_content_view(uintptr_t tile);
void ns_docktile_display(uintptr_t tile);
void ns_docktile_set_shows_application_badge(uintptr_t tile, int flag);
int ns_docktile_shows_application_badge(uintptr_t tile);
void ns_docktile_set_badge_label(uintptr_t tile, const char *label);
int ns_docktile_badge_label(uintptr_t tile, char *out, int out_len);
void *ns_docktile_owner(uintptr_t tile);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_DOCKTILE_H */
""")

write(ROOT / "src/ns-alignmentfeedbackfilter.h", """#ifndef PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H
#define PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_alignmentfeedbackfilter_create(void);
uintptr_t ns_alignmentfeedbackfilter_wrap(void *filter);
void ns_alignmentfeedbackfilter_destroy(uintptr_t filter);
void *ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter(uintptr_t filter);
unsigned long long ns_alignmentfeedbackfilter_input_event_mask(void);
void ns_alignmentfeedbackfilter_update_with_event(uintptr_t filter, void *event);
void ns_alignmentfeedbackfilter_update_with_pan_recognizer(uintptr_t filter, uintptr_t recognizer);
uintptr_t ns_alignmentfeedbackfilter_token_for_movement(uintptr_t filter, uintptr_t view, double prev_x, double prev_y, double aligned_x, double aligned_y, double default_x, double default_y);
uintptr_t ns_alignmentfeedbackfilter_token_for_horizontal_movement(uintptr_t filter, uintptr_t view, double previous_x, double aligned_x, double default_x);
uintptr_t ns_alignmentfeedbackfilter_token_for_vertical_movement(uintptr_t filter, uintptr_t view, double previous_y, double aligned_y, double default_y);
void ns_alignmentfeedbackfilter_perform_feedback(uintptr_t filter, const uintptr_t *tokens, int count, int performance_time);
void ns_alignmentfeedbackfilter_destroy_token(uintptr_t token);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ALIGNMENTFEEDBACKFILTER_H */
""")

write(ROOT / "src/ns-pressureconfiguration.h", """#ifndef PHP_APPKIT_NS_PRESSURECONFIGURATION_H
#define PHP_APPKIT_NS_PRESSURECONFIGURATION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_pressureconfiguration_create(int behavior);
uintptr_t ns_pressureconfiguration_wrap(void *configuration);
void ns_pressureconfiguration_destroy(uintptr_t configuration);
void *ns_pressureconfiguration_nspressureconfiguration(uintptr_t configuration);
int ns_pressureconfiguration_pressure_behavior(uintptr_t configuration);
void ns_pressureconfiguration_set(uintptr_t configuration);
void ns_view_set_pressure_configuration(uintptr_t view, uintptr_t configuration);
uintptr_t ns_view_pressure_configuration(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PRESSURECONFIGURATION_H */
""")

write(ROOT / "src/ns-layoutconstraint.h", """#ifndef PHP_APPKIT_NS_LAYOUTCONSTRAINT_H
#define PHP_APPKIT_NS_LAYOUTCONSTRAINT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutconstraint_wrap(void *constraint);
void ns_layoutconstraint_destroy(uintptr_t constraint);
void *ns_layoutconstraint_nslayoutconstraint(uintptr_t constraint);
uintptr_t ns_layoutconstraint_constraint_with_item(uintptr_t view1, int attr1, int relation, uintptr_t view2, int attr2, double multiplier, double constant);
void ns_layoutconstraint_activate(const uintptr_t *constraints, int count);
void ns_layoutconstraint_deactivate(const uintptr_t *constraints, int count);
void ns_layoutconstraint_set_active(uintptr_t constraint, int active);
int ns_layoutconstraint_is_active(uintptr_t constraint);
void ns_layoutconstraint_set_priority(uintptr_t constraint, float priority);
float ns_layoutconstraint_priority(uintptr_t constraint);
void ns_layoutconstraint_set_constant(uintptr_t constraint, double constant);
double ns_layoutconstraint_constant(uintptr_t constraint);
void ns_layoutconstraint_set_identifier(uintptr_t constraint, const char *identifier);
int ns_layoutconstraint_identifier(uintptr_t constraint, char *out, int out_len);
int ns_layoutconstraint_first_attribute(uintptr_t constraint);
int ns_layoutconstraint_second_attribute(uintptr_t constraint);
int ns_layoutconstraint_relation(uintptr_t constraint);
double ns_layoutconstraint_multiplier(uintptr_t constraint);
uintptr_t ns_layoutconstraint_first_anchor(uintptr_t constraint);
uintptr_t ns_layoutconstraint_second_anchor(uintptr_t constraint);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTCONSTRAINT_H */
""")

write(ROOT / "src/ns-layoutanchor.h", """#ifndef PHP_APPKIT_NS_LAYOUTANCHOR_H
#define PHP_APPKIT_NS_LAYOUTANCHOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutanchor_wrap(void *anchor);
void ns_layoutanchor_destroy(uintptr_t anchor);
void *ns_layoutanchor_nslayoutanchor(uintptr_t anchor);
uintptr_t ns_layoutanchor_constraint_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
uintptr_t ns_layoutanchor_constraint_greater_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
uintptr_t ns_layoutanchor_constraint_less_than_or_equal_to_anchor(uintptr_t anchor, uintptr_t other, int has_constant, double constant);
int ns_layoutanchor_name(uintptr_t anchor, char *out, int out_len);
void *ns_layoutanchor_item(uintptr_t anchor);
int ns_layoutanchor_has_ambiguous_layout(uintptr_t anchor);
int ns_layoutanchor_constraints_affecting_layout_count(uintptr_t anchor);
uintptr_t ns_layoutanchor_constraint_affecting_layout_at(uintptr_t anchor, int index);
uintptr_t ns_layoutxaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other);
uintptr_t ns_layoutxaxisanchor_constraint_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutxaxisanchor_constraint_greater_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutxaxisanchor_constraint_less_than_or_equal_to_system_spacing_after(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_anchor_with_offset_to_anchor(uintptr_t anchor, uintptr_t other);
uintptr_t ns_layoutyaxisanchor_constraint_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_constraint_greater_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutyaxisanchor_constraint_less_than_or_equal_to_system_spacing_below(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_constant(uintptr_t anchor, double constant);
uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier(uintptr_t anchor, uintptr_t other, double multiplier);
uintptr_t ns_layoutdimension_constraint_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier_constant(uintptr_t anchor, uintptr_t other, double multiplier, double constant);
uintptr_t ns_view_leading_anchor(uintptr_t view);
uintptr_t ns_view_trailing_anchor(uintptr_t view);
uintptr_t ns_view_left_anchor(uintptr_t view);
uintptr_t ns_view_right_anchor(uintptr_t view);
uintptr_t ns_view_top_anchor(uintptr_t view);
uintptr_t ns_view_bottom_anchor(uintptr_t view);
uintptr_t ns_view_width_anchor(uintptr_t view);
uintptr_t ns_view_height_anchor(uintptr_t view);
uintptr_t ns_view_center_x_anchor(uintptr_t view);
uintptr_t ns_view_center_y_anchor(uintptr_t view);
uintptr_t ns_view_first_baseline_anchor(uintptr_t view);
uintptr_t ns_view_last_baseline_anchor(uintptr_t view);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTANCHOR_H */
""")

write(ROOT / "src/ns-layoutguide.h", """#ifndef PHP_APPKIT_NS_LAYOUTGUIDE_H
#define PHP_APPKIT_NS_LAYOUTGUIDE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_layoutguide_create(void);
uintptr_t ns_layoutguide_wrap(void *guide);
void ns_layoutguide_destroy(uintptr_t guide);
void *ns_layoutguide_nslayoutguide(uintptr_t guide);
void ns_layoutguide_frame(uintptr_t guide, double *x, double *y, double *width, double *height);
void ns_layoutguide_set_identifier(uintptr_t guide, const char *identifier);
int ns_layoutguide_identifier(uintptr_t guide, char *out, int out_len);
uintptr_t ns_layoutguide_owning_view(uintptr_t guide);
void ns_layoutguide_add_to_view(uintptr_t guide, uintptr_t view);
void ns_layoutguide_remove_from_view(uintptr_t guide, uintptr_t view);
uintptr_t ns_layoutguide_leading_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_trailing_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_left_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_right_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_top_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_bottom_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_width_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_height_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_center_x_anchor(uintptr_t guide);
uintptr_t ns_layoutguide_center_y_anchor(uintptr_t guide);
int ns_layoutguide_has_ambiguous_layout(uintptr_t guide);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_LAYOUTGUIDE_H */
""")

# --- .m implementations ---

write(ROOT / "src/ns-docktile.m", """#import <AppKit/AppKit.h>
#import "ns-docktile.h"
#import "ns-view.h"
""" + COMMON_OBJC + """
static NSDockTile *ns_docktile_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSDockTile class]] ? (NSDockTile *)obj : nil;
}

uintptr_t ns_docktile_application(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSApp dockTile]);
    }
}

uintptr_t ns_docktile_wrap(void *dock_tile)
{
    if (!dock_tile) {
        return 0;
    }
    @autoreleasepool {
        NSDockTile *obj = (__bridge NSDockTile *)dock_tile;
        return [obj isKindOfClass:[NSDockTile class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_docktile_destroy(uintptr_t tile)
{
    ns_release_handle(tile);
}

void *ns_docktile_nsdocktile(uintptr_t tile)
{
    NSDockTile *obj = ns_docktile_from(tile);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_docktile_size(uintptr_t tile, double *width, double *height)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            if (width) {
                *width = 0.0;
            }
            if (height) {
                *height = 0.0;
            }
            return;
        }
        NSSize size = obj.size;
        if (width) {
            *width = (double)size.width;
        }
        if (height) {
            *height = (double)size.height;
        }
    }
}

void ns_docktile_set_content_view(uintptr_t tile, uintptr_t view)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            return;
        }
        void *native = ns_view_nsview(view);
        obj.contentView = native ? (__bridge NSView *)native : nil;
    }
}

uintptr_t ns_docktile_content_view(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj || !obj.contentView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.contentView);
    }
}

void ns_docktile_display(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (obj) {
            [obj display];
        }
    }
}

void ns_docktile_set_shows_application_badge(uintptr_t tile, int flag)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (obj) {
            obj.showsApplicationBadge = flag ? YES : NO;
        }
    }
}

int ns_docktile_shows_application_badge(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return obj && obj.showsApplicationBadge ? 1 : 0;
    }
}

void ns_docktile_set_badge_label(uintptr_t tile, const char *label)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        if (!obj) {
            return;
        }
        obj.badgeLabel = label ? [NSString stringWithUTF8String:label] : nil;
    }
}

int ns_docktile_badge_label(uintptr_t tile, char *out, int out_len)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return ns_copy_nsstring(obj.badgeLabel, out, out_len);
    }
}

void *ns_docktile_owner(uintptr_t tile)
{
    @autoreleasepool {
        NSDockTile *obj = ns_docktile_from(tile);
        return obj && obj.owner ? (__bridge void *)obj.owner : NULL;
    }
}
""")

write(ROOT / "src/ns-alignmentfeedbackfilter.m", """#import <AppKit/AppKit.h>
#import "ns-alignmentfeedbackfilter.h"
#import "ns-view.h"
#import "ns-gesturerecognizer.h"
""" + COMMON_OBJC + """
static NSAlignmentFeedbackFilter *ns_alignmentfeedbackfilter_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSAlignmentFeedbackFilter class]] ? (NSAlignmentFeedbackFilter *)obj : nil;
}

uintptr_t ns_alignmentfeedbackfilter_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSAlignmentFeedbackFilter alloc] init]);
    }
}

uintptr_t ns_alignmentfeedbackfilter_wrap(void *filter)
{
    if (!filter) {
        return 0;
    }
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = (__bridge NSAlignmentFeedbackFilter *)filter;
        return [obj isKindOfClass:[NSAlignmentFeedbackFilter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_alignmentfeedbackfilter_destroy(uintptr_t filter)
{
    ns_release_handle(filter);
}

void *ns_alignmentfeedbackfilter_nsalignmentfeedbackfilter(uintptr_t filter)
{
    NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
    return obj ? (__bridge void *)obj : NULL;
}

unsigned long long ns_alignmentfeedbackfilter_input_event_mask(void)
{
    @autoreleasepool {
        return (unsigned long long)[NSAlignmentFeedbackFilter inputEventMask];
    }
}

void ns_alignmentfeedbackfilter_update_with_event(uintptr_t filter, void *event)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj || !event) {
            return;
        }
        [obj updateWithEvent:(__bridge NSEvent *)event];
    }
}

void ns_alignmentfeedbackfilter_update_with_pan_recognizer(uintptr_t filter, uintptr_t recognizer)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        void *native = ns_gesturerecognizer_nsgesturerecognizer(recognizer);
        NSPanGestureRecognizer *pan = native ? (__bridge NSPanGestureRecognizer *)native : nil;
        if (obj && [pan isKindOfClass:[NSPanGestureRecognizer class]]) {
            [obj updateWithPanRecognizer:pan];
        }
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_movement(uintptr_t filter, uintptr_t view, double prev_x, double prev_y, double aligned_x, double aligned_y, double default_x, double default_y)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForMovementInView:v
                                                                            previousPoint:NSMakePoint((CGFloat)prev_x, (CGFloat)prev_y)
                                                                              alignedPoint:NSMakePoint((CGFloat)aligned_x, (CGFloat)aligned_y)
                                                                              defaultPoint:NSMakePoint((CGFloat)default_x, (CGFloat)default_y)];
        return token ? ns_retain_obj(token) : 0;
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_horizontal_movement(uintptr_t filter, uintptr_t view, double previous_x, double aligned_x, double default_x)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForHorizontalMovementInView:v
                                                                                          previousX:(CGFloat)previous_x
                                                                                           alignedX:(CGFloat)aligned_x
                                                                                           defaultX:(CGFloat)default_x];
        return token ? ns_retain_obj(token) : 0;
    }
}

uintptr_t ns_alignmentfeedbackfilter_token_for_vertical_movement(uintptr_t filter, uintptr_t view, double previous_y, double aligned_y, double default_y)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj) {
            return 0;
        }
        void *nativeView = ns_view_nsview(view);
        NSView *v = nativeView ? (__bridge NSView *)nativeView : nil;
        id<NSAlignmentFeedbackToken> token = [obj alignmentFeedbackTokenForVerticalMovementInView:v
                                                                                          previousY:(CGFloat)previous_y
                                                                                           alignedY:(CGFloat)aligned_y
                                                                                           defaultY:(CGFloat)default_y];
        return token ? ns_retain_obj(token) : 0;
    }
}

void ns_alignmentfeedbackfilter_perform_feedback(uintptr_t filter, const uintptr_t *tokens, int count, int performance_time)
{
    @autoreleasepool {
        NSAlignmentFeedbackFilter *obj = ns_alignmentfeedbackfilter_from(filter);
        if (!obj || !tokens || count <= 0) {
            return;
        }
        NSMutableArray<id<NSAlignmentFeedbackToken>> *list = [NSMutableArray array];
        int i;
        for (i = 0; i < count; i++) {
            id token = ns_bridge_obj(tokens[i]);
            if (token) {
                [list addObject:token];
            }
        }
        [obj performFeedback:list performanceTime:(NSHapticFeedbackPerformanceTime)performance_time];
    }
}

void ns_alignmentfeedbackfilter_destroy_token(uintptr_t token)
{
    ns_release_handle(token);
}
""")

write(ROOT / "src/ns-pressureconfiguration.m", """#import <AppKit/AppKit.h>
#import "ns-pressureconfiguration.h"
#import "ns-view.h"
""" + COMMON_OBJC + """
static NSPressureConfiguration *ns_pressureconfiguration_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSPressureConfiguration class]] ? (NSPressureConfiguration *)obj : nil;
}

uintptr_t ns_pressureconfiguration_create(int behavior)
{
    @autoreleasepool {
        return ns_retain_obj([[NSPressureConfiguration alloc] initWithPressureBehavior:(NSPressureBehavior)behavior]);
    }
}

uintptr_t ns_pressureconfiguration_wrap(void *configuration)
{
    if (!configuration) {
        return 0;
    }
    @autoreleasepool {
        NSPressureConfiguration *obj = (__bridge NSPressureConfiguration *)configuration;
        return [obj isKindOfClass:[NSPressureConfiguration class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pressureconfiguration_destroy(uintptr_t configuration)
{
    ns_release_handle(configuration);
}

void *ns_pressureconfiguration_nspressureconfiguration(uintptr_t configuration)
{
    NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_pressureconfiguration_pressure_behavior(uintptr_t configuration)
{
    @autoreleasepool {
        NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
        return obj ? (int)obj.pressureBehavior : 0;
    }
}

void ns_pressureconfiguration_set(uintptr_t configuration)
{
    @autoreleasepool {
        NSPressureConfiguration *obj = ns_pressureconfiguration_from(configuration);
        if (obj) {
            [obj set];
        }
    }
}

void ns_view_set_pressure_configuration(uintptr_t view, uintptr_t configuration)
{
    @autoreleasepool {
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        NSPressureConfiguration *cfg = ns_pressureconfiguration_from(configuration);
        if (v) {
            v.pressureConfiguration = cfg;
        }
    }
}

uintptr_t ns_view_pressure_configuration(uintptr_t view)
{
    @autoreleasepool {
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        return v && v.pressureConfiguration ? ns_retain_obj(v.pressureConfiguration) : 0;
    }
}
""")

write(ROOT / "src/ns-layoutconstraint.m", """#import <AppKit/AppKit.h>
#import "ns-layoutconstraint.h"
#import "ns-layoutanchor.h"
#import "ns-view.h"
#import "ns-layoutguide.h"
""" + COMMON_OBJC + """
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
""")

write(ROOT / "src/ns-layoutanchor.m", """#import <AppKit/AppKit.h>
#import "ns-layoutanchor.h"
#import "ns-layoutconstraint.h"
#import "ns-view.h"
""" + COMMON_OBJC + """
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

#define NS_VIEW_ANCHOR(fn, prop) \\
uintptr_t fn(uintptr_t view) \\
{ \\
    @autoreleasepool { \\
        NSView *v = ns_view_native(view); \\
        return v ? ns_layoutanchor_wrap((__bridge void *)v.prop) : 0; \\
    } \\
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
""")

write(ROOT / "src/ns-layoutguide.m", """#import <AppKit/AppKit.h>
#import "ns-layoutguide.h"
#import "ns-layoutanchor.h"
#import "ns-view.h"
""" + COMMON_OBJC + """
static NSLayoutGuide *ns_layoutguide_from(uintptr_t handle)
{
    id obj = ns_bridge_obj(handle);
    return [obj isKindOfClass:[NSLayoutGuide class]] ? (NSLayoutGuide *)obj : nil;
}

uintptr_t ns_layoutguide_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSLayoutGuide alloc] init]);
    }
}

uintptr_t ns_layoutguide_wrap(void *guide)
{
    if (!guide) {
        return 0;
    }
    @autoreleasepool {
        NSLayoutGuide *obj = (__bridge NSLayoutGuide *)guide;
        return [obj isKindOfClass:[NSLayoutGuide class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_layoutguide_destroy(uintptr_t guide)
{
    ns_release_handle(guide);
}

void *ns_layoutguide_nslayoutguide(uintptr_t guide)
{
    NSLayoutGuide *obj = ns_layoutguide_from(guide);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_layoutguide_frame(uintptr_t guide, double *x, double *y, double *width, double *height)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        if (!obj) {
            if (x) *x = 0.0;
            if (y) *y = 0.0;
            if (width) *width = 0.0;
            if (height) *height = 0.0;
            return;
        }
        NSRect frame = obj.frame;
        if (x) *x = (double)frame.origin.x;
        if (y) *y = (double)frame.origin.y;
        if (width) *width = (double)frame.size.width;
        if (height) *height = (double)frame.size.height;
    }
}

void ns_layoutguide_set_identifier(uintptr_t guide, const char *identifier)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        if (!obj) {
            return;
        }
        obj.identifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
    }
}

int ns_layoutguide_identifier(uintptr_t guide, char *out, int out_len)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return ns_copy_nsstring(obj.identifier, out, out_len);
    }
}

uintptr_t ns_layoutguide_owning_view(uintptr_t guide)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return obj && obj.owningView ? ns_view_wrap((__bridge void *)obj.owningView) : 0;
    }
}

void ns_layoutguide_add_to_view(uintptr_t guide, uintptr_t view)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        if (obj && v) {
            [v addLayoutGuide:obj];
        }
    }
}

void ns_layoutguide_remove_from_view(uintptr_t guide, uintptr_t view)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        void *native = ns_view_nsview(view);
        NSView *v = native ? (__bridge NSView *)native : nil;
        if (obj && v) {
            [v removeLayoutGuide:obj];
        }
    }
}

#define NS_GUIDE_ANCHOR(fn, prop) \\
uintptr_t fn(uintptr_t guide) \\
{ \\
    @autoreleasepool { \\
        NSLayoutGuide *obj = ns_layoutguide_from(guide); \\
        return obj ? ns_layoutanchor_wrap((__bridge void *)obj.prop) : 0; \\
    } \\
}

NS_GUIDE_ANCHOR(ns_layoutguide_leading_anchor, leadingAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_trailing_anchor, trailingAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_left_anchor, leftAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_right_anchor, rightAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_top_anchor, topAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_bottom_anchor, bottomAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_width_anchor, widthAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_height_anchor, heightAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_center_x_anchor, centerXAnchor)
NS_GUIDE_ANCHOR(ns_layoutguide_center_y_anchor, centerYAnchor)

int ns_layoutguide_has_ambiguous_layout(uintptr_t guide)
{
    @autoreleasepool {
        NSLayoutGuide *obj = ns_layoutguide_from(guide);
        return obj && obj.hasAmbiguousLayout ? 1 : 0;
    }
}
""")

def zep_ns(ns_class: str, header: str) -> str:
    return f"""namespace AppKit\\NS\\{ns_class};

%{{
#include "{header}"
#include <stdint.h>
}}%

"""

def okf(ns_class: str, slug: str, header: str, description: str, rows: list) -> None:
    table = "\n".join(f"| `{m}` | {maps} |" for m, maps in rows)
    write(ROOT / f".okf/api/{slug}.md", f"""---
type: CoreType
title: AppKit\\NS\\{ns_class}\\{ns_class}
description: {description}
resource: /appkit/ns/{slug}/{slug}.zep
tags: [appkit, api, {slug}]
status: draft
generated: {{ by: cursor-agent, at: "2026-08-15T14:55:00Z" }}
sources:
  - id: zep
    resource: /appkit/ns/{slug}/{slug}.zep
    title: {slug}.zep
  - id: h
    resource: /src/{header}
    title: {header}
  - id: m
    resource: /src/{header.replace('.h', '.m')}
    title: {header.replace('.h', '.m')}
---

# Schema

| Method | Maps to |
|--------|---------|
{table}
""")


# Zephir classes
write(ROOT / "appkit/ns/nsdocktile/nsdocktile.zep", zep_ns("NSDockTile", "ns-docktile.h") + """
/**
 * NSDockTile — application or mini-window dock tile.
 */
class NSDockTile
{
    public static function applicationDockTile() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_application();
        }%
        return handle;
    }

    public static function wrap(int nsDockTilePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_wrap((void *)(uintptr_t) nsDockTilePtr);
        }%
        return handle;
    }

    public static function destroy(int tile) -> void
    {
        %{
            ns_docktile_destroy((uintptr_t) tile);
        }%
    }

    public static function nsDockTile(int tile) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_docktile_nsdocktile((uintptr_t) tile);
        }%
        return ptr;
    }

    public static function getSize(int tile) -> array
    {
        array size;
        %{
            double w = 0.0, h = 0.0;
            ns_docktile_size((uintptr_t) tile, &w, &h);
            array_init(&size);
            add_index_double(&size, 0, w);
            add_index_double(&size, 1, h);
        }%
        return size;
    }

    public static function setContentView(int tile, int view) -> void
    {
        %{
            ns_docktile_set_content_view((uintptr_t) tile, (uintptr_t) view);
        }%
    }

    public static function contentView(int tile) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_docktile_content_view((uintptr_t) tile);
        }%
        return handle;
    }

    public static function display(int tile) -> void
    {
        %{
            ns_docktile_display((uintptr_t) tile);
        }%
    }

    public static function setShowsApplicationBadge(int tile, bool flag) -> void
    {
        %{
            ns_docktile_set_shows_application_badge((uintptr_t) tile, flag ? 1 : 0);
        }%
    }

    public static function showsApplicationBadge(int tile) -> bool
    {
        bool result;
        %{
            result = ns_docktile_shows_application_badge((uintptr_t) tile) == 1;
        }%
        return result;
    }

    public static function setBadgeLabel(int tile, string label) -> void
    {
        %{
            ns_docktile_set_badge_label((uintptr_t) tile, Z_STRVAL(label));
        }%
    }

    public static function badgeLabel(int tile) -> string
    {
        string label;
        %{
            char buf[512];
            if (ns_docktile_badge_label((uintptr_t) tile, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&label, buf);
            } else {
                ZVAL_EMPTY_STRING(&label);
            }
        }%
        return label;
    }

    public static function owner(int tile) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_docktile_owner((uintptr_t) tile);
        }%
        return ptr;
    }
}
""")

# Continue generating remaining zep files in script...
NEW_MODULES = [
    "ns-docktile", "ns-alignmentfeedbackfilter", "ns-pressureconfiguration",
    "ns-layoutconstraint", "ns-layoutanchor", "ns-layoutguide",
]
NEW_ZEPS = [
    "nsdocktile", "nsalignmentfeedbackfilter", "nspressureconfiguration",
    "nslayoutconstraint", "nslayoutanchor", "nslayoutxaxisanchor",
    "nslayoutyaxisanchor", "nslayoutdimension", "nslayoutguide",
]

if __name__ == "__main__":
    print("Base files written. Run gen-layout-dock-binds-part2.py for zep/okf/packaging.")
