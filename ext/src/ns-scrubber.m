#import <AppKit/AppKit.h>
#import "ns-scrubber.h"
#import "ns-view.h"

@interface NSPhpScrubberItemView : NSScrubberItemView
@property (nonatomic, strong) NSTextField *label;
@end

@implementation NSPhpScrubberItemView
- (instancetype)initWithFrame:(NSRect)frameRect
{
    self = [super initWithFrame:frameRect];
    if (self) {
        _label = [NSTextField labelWithString:@""];
        _label.alignment = NSTextAlignmentCenter;
        _label.translatesAutoresizingMaskIntoConstraints = NO;
        [self addSubview:_label];
        [NSLayoutConstraint activateConstraints:@[
            [_label.centerXAnchor constraintEqualToAnchor:self.centerXAnchor],
            [_label.centerYAnchor constraintEqualToAnchor:self.centerYAnchor],
        ]];
    }
    return self;
}
@end

@interface NSPhpScrubber : NSScrubber <NSScrubberDataSource, NSScrubberDelegate>
@property (nonatomic, strong) NSMutableArray<NSString *> *items;
@property (nonatomic, assign) int pendingSelection;
@end

@implementation NSPhpScrubber

- (NSInteger)numberOfItemsForScrubber:(NSScrubber *)scrubber
{
    (void)scrubber;
    return (NSInteger)self.items.count;
}

- (NSScrubberItemView *)scrubber:(NSScrubber *)scrubber viewForItemAtIndex:(NSInteger)index
{
    NSPhpScrubberItemView *view = (NSPhpScrubberItemView *)[scrubber makeItemWithIdentifier:@"item" owner:self];
    if (index >= 0 && (NSUInteger)index < self.items.count) {
        view.label.stringValue = self.items[(NSUInteger)index];
    }
    return view;
}

- (void)scrubber:(NSScrubber *)scrubber didSelectItemAtIndex:(NSInteger)selectedIndex
{
    (void)scrubber;
    (void)selectedIndex;
    self.pendingSelection = 1;
}

@end

static NSPhpScrubber *ns_scrubber_from(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSPhpScrubber class]] ? (NSPhpScrubber *)view : nil;
}

uintptr_t ns_scrubber_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 320;
    }
    if (height <= 0) {
        height = 44;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpScrubber *scrubber = [[NSPhpScrubber alloc] initWithFrame:rect];
        scrubber.items = [NSMutableArray array];
        scrubber.pendingSelection = 0;
        [scrubber registerClass:[NSPhpScrubberItemView class] forItemIdentifier:@"item"];
        scrubber.dataSource = scrubber;
        scrubber.delegate = scrubber;
        scrubber.mode = NSScrubberModeFree;
        scrubber.showsAdditionalContentIndicators = YES;
        return ns_view_wrap((__bridge void *)scrubber);
    }
}

uintptr_t ns_scrubber_wrap(void *scrubber)
{
    if (!scrubber) {
        return 0;
    }
    @autoreleasepool {
        NSPhpScrubber *obj = (__bridge NSPhpScrubber *)scrubber;
        return [obj isKindOfClass:[NSPhpScrubber class]] ? ns_view_wrap(scrubber) : 0;
    }
}

void ns_scrubber_destroy(uintptr_t scrubber)
{
    ns_view_destroy(scrubber);
}

void *ns_scrubber_nsscrubber(uintptr_t scrubber)
{
    NSPhpScrubber *obj = ns_scrubber_from(scrubber);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubber_clear(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            [obj.items removeAllObjects];
            [obj reloadData];
        }
    }
}

void ns_scrubber_add_item(uintptr_t scrubber, const char *title)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            [obj.items addObject:title ? [NSString stringWithUTF8String:title] : @""];
            [obj reloadData];
        }
    }
}

int ns_scrubber_number_of_items(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj ? (int)obj.numberOfItems : 0;
    }
}

void ns_scrubber_set_mode(uintptr_t scrubber, int mode)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.mode = (NSScrubberMode)mode;
        }
    }
}

int ns_scrubber_get_mode(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj ? (int)obj.mode : 0;
    }
}

void ns_scrubber_set_item_alignment(uintptr_t scrubber, int alignment)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.itemAlignment = (NSScrubberAlignment)alignment;
        }
    }
}

int ns_scrubber_get_item_alignment(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj ? (int)obj.itemAlignment : 0;
    }
}

void ns_scrubber_set_continuous(uintptr_t scrubber, int flag)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.continuous = flag ? YES : NO;
        }
    }
}

int ns_scrubber_is_continuous(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj && obj.continuous ? 1 : 0;
    }
}

void ns_scrubber_set_selected_index(uintptr_t scrubber, int index)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.selectedIndex = index;
        }
    }
}

int ns_scrubber_get_selected_index(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj ? (int)obj.selectedIndex : -1;
    }
}

int ns_scrubber_get_highlighted_index(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj ? (int)obj.highlightedIndex : -1;
    }
}

void ns_scrubber_set_shows_arrow_buttons(uintptr_t scrubber, int flag)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.showsArrowButtons = flag ? YES : NO;
        }
    }
}

int ns_scrubber_shows_arrow_buttons(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj && obj.showsArrowButtons ? 1 : 0;
    }
}

void ns_scrubber_set_shows_additional_content_indicators(uintptr_t scrubber, int flag)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            obj.showsAdditionalContentIndicators = flag ? YES : NO;
        }
    }
}

int ns_scrubber_shows_additional_content_indicators(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        return obj && obj.showsAdditionalContentIndicators ? 1 : 0;
    }
}

void ns_scrubber_reload_data(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (obj) {
            [obj reloadData];
        }
    }
}

int ns_scrubber_poll_selection(uintptr_t scrubber)
{
    @autoreleasepool {
        NSPhpScrubber *obj = ns_scrubber_from(scrubber);
        if (!obj || !obj.pendingSelection) {
            return 0;
        }
        obj.pendingSelection = 0;
        return 1;
    }
}
