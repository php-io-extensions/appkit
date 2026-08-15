#import <AppKit/AppKit.h>
#import "ns-datepicker.h"
#import "ns-view.h"

@interface NSPhpDatePicker : NSDatePicker
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpDatePicker

- (void)nsChanged:(id)sender
{
    (void)sender;
    self.pendingChange = 1;
}

@end

uintptr_t ns_datepicker_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 180;
    }
    if (height <= 0) {
        height = 28;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpDatePicker *picker = [[NSPhpDatePicker alloc] initWithFrame:rect];
        [picker setDatePickerStyle:NSDatePickerStyleTextFieldAndStepper];
        [picker setDatePickerElements:NSDatePickerElementFlagYearMonthDay];
        [picker setDateValue:[NSDate date]];
        [picker setTarget:picker];
        [picker setAction:@selector(nsChanged:)];
        return ns_view_wrap((__bridge void *)picker);
    }
}

void ns_datepicker_destroy(uintptr_t picker)
{
    ns_view_destroy(picker);
}

void ns_datepicker_set_timestamp(uintptr_t picker, long timestamp)
{
    void *ptr = ns_view_nsview(picker);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSDatePicker class]]) {
            return;
        }
        [(NSDatePicker *)view setDateValue:[NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)timestamp]];
    }
}

long ns_datepicker_get_timestamp(uintptr_t picker)
{
    void *ptr = ns_view_nsview(picker);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSDatePicker class]]) {
            return 0;
        }
        return (long)[[(NSDatePicker *)view dateValue] timeIntervalSince1970];
    }
}

int ns_datepicker_poll_change(uintptr_t picker)
{
    void *ptr = ns_view_nsview(picker);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpDatePicker class]]) {
            return 0;
        }
        NSPhpDatePicker *typed = (NSPhpDatePicker *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
