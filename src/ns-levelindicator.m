#import <AppKit/AppKit.h>
#import "ns-levelindicator.h"
#import "ns-view.h"

static NSLevelIndicator *ns_levelindicator_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSLevelIndicator class]] ? (NSLevelIndicator *)view : nil;
}

uintptr_t ns_levelindicator_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 16;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSLevelIndicator *indicator = [[NSLevelIndicator alloc] initWithFrame:rect];
        [indicator setLevelIndicatorStyle:NSLevelIndicatorStyleContinuousCapacity];
        [indicator setMinValue:0.0];
        [indicator setMaxValue:100.0];
        [indicator setDoubleValue:0.0];
        return ns_view_wrap((__bridge void *)indicator);
    }
}

void ns_levelindicator_destroy(uintptr_t indicator)
{
    ns_view_destroy(indicator);
}

void ns_levelindicator_set_level_indicator_style(uintptr_t indicator, int style)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.levelIndicatorStyle = (NSLevelIndicatorStyle)style;
        }
    }
}

int ns_levelindicator_get_level_indicator_style(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? (int)obj.levelIndicatorStyle : 0;
    }
}

void ns_levelindicator_set_editable(uintptr_t indicator, int flag)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.editable = flag ? YES : NO;
        }
    }
}

int ns_levelindicator_is_editable(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_levelindicator_set_min_value(uintptr_t indicator, double value)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.minValue = value;
        }
    }
}

double ns_levelindicator_get_min_value(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? obj.minValue : 0.0;
    }
}

void ns_levelindicator_set_max_value(uintptr_t indicator, double value)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.maxValue = value;
        }
    }
}

double ns_levelindicator_get_max_value(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? obj.maxValue : 0.0;
    }
}

void ns_levelindicator_set_warning_value(uintptr_t indicator, double value)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.warningValue = value;
        }
    }
}

double ns_levelindicator_get_warning_value(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? obj.warningValue : 0.0;
    }
}

void ns_levelindicator_set_critical_value(uintptr_t indicator, double value)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.criticalValue = value;
        }
    }
}

double ns_levelindicator_get_critical_value(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? obj.criticalValue : 0.0;
    }
}

void ns_levelindicator_set_double_value(uintptr_t indicator, double value)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.doubleValue = value;
        }
    }
}

double ns_levelindicator_get_double_value(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? obj.doubleValue : 0.0;
    }
}

void ns_levelindicator_set_number_of_tick_marks(uintptr_t indicator, int count)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.numberOfTickMarks = count < 0 ? 0 : (NSInteger)count;
        }
    }
}

int ns_levelindicator_get_number_of_tick_marks(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? (int)obj.numberOfTickMarks : 0;
    }
}

void ns_levelindicator_set_number_of_major_tick_marks(uintptr_t indicator, int count)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.numberOfMajorTickMarks = count < 0 ? 0 : (NSInteger)count;
        }
    }
}

int ns_levelindicator_get_number_of_major_tick_marks(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? (int)obj.numberOfMajorTickMarks : 0;
    }
}

void ns_levelindicator_set_draws_tiered_capacity_levels(uintptr_t indicator, int flag)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.drawsTieredCapacityLevels = flag ? YES : NO;
        }
    }
}

int ns_levelindicator_draws_tiered_capacity_levels(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj && obj.drawsTieredCapacityLevels ? 1 : 0;
    }
}

void ns_levelindicator_set_placeholder_visibility(uintptr_t indicator, int visibility)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        if (obj) {
            obj.placeholderVisibility = (NSLevelIndicatorPlaceholderVisibility)visibility;
        }
    }
}

int ns_levelindicator_get_placeholder_visibility(uintptr_t indicator)
{
    @autoreleasepool {
        NSLevelIndicator *obj = ns_levelindicator_view(indicator);
        return obj ? (int)obj.placeholderVisibility : 0;
    }
}
