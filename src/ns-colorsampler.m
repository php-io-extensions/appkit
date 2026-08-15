#import <AppKit/AppKit.h>
#import "ns-colorsampler.h"
#import "ns-color.h"

@interface NSPhpColorSamplerBox : NSObject
@property (nonatomic, strong) NSColorSampler *sampler;
@property (nonatomic, assign) int pollState;
@property (nonatomic, strong, nullable) NSColor *selectedColor;
@end

@implementation NSPhpColorSamplerBox
@end

static NSPhpColorSamplerBox *ns_colorsampler_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPhpColorSamplerBox class]] ? (NSPhpColorSamplerBox *)obj : nil;
}

uintptr_t ns_colorsampler_create(void)
{
    @autoreleasepool {
        NSPhpColorSamplerBox *box = [[NSPhpColorSamplerBox alloc] init];
        box.sampler = [[NSColorSampler alloc] init];
        box.pollState = NS_COLORSAMPLER_POLL_PENDING;
        box.selectedColor = nil;
        return (uintptr_t)(__bridge_retained void *)box;
    }
}

void ns_colorsampler_destroy(uintptr_t sampler)
{
    if (!sampler) {
        return;
    }
    CFRelease((void *)sampler);
}

void ns_colorsampler_show(uintptr_t sampler)
{
    @autoreleasepool {
        NSPhpColorSamplerBox *box = ns_colorsampler_from(sampler);
        if (!box || !box.sampler) {
            return;
        }
        box.pollState = NS_COLORSAMPLER_POLL_PENDING;
        box.selectedColor = nil;
        [box.sampler showSamplerWithSelectionHandler:^(NSColor *selectedColor) {
            box.selectedColor = selectedColor;
            box.pollState = selectedColor ? NS_COLORSAMPLER_POLL_SELECTED : NS_COLORSAMPLER_POLL_CANCELLED;
        }];
    }
}

int ns_colorsampler_poll(uintptr_t sampler, uintptr_t *out_color)
{
    @autoreleasepool {
        NSPhpColorSamplerBox *box = ns_colorsampler_from(sampler);
        if (!box) {
            return NS_COLORSAMPLER_POLL_CANCELLED;
        }
        if (box.pollState == NS_COLORSAMPLER_POLL_PENDING) {
            return NS_COLORSAMPLER_POLL_PENDING;
        }
        if (box.pollState == NS_COLORSAMPLER_POLL_SELECTED && out_color) {
            *out_color = ns_color_wrap((__bridge void *)box.selectedColor);
        }
        return box.pollState;
    }
}
