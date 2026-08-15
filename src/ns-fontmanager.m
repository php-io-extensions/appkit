#import <AppKit/AppKit.h>
#import "ns-fontmanager.h"
#import "ns-font.h"
#import "ns-fontpanel.h"

static uintptr_t ns_fontmanager_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSFontManager *ns_fontmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFontManager class]] ? (NSFontManager *)obj : nil;
}

static int ns_fontmanager_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_fontmanager_shared(void)
{
    @autoreleasepool {
        return ns_fontmanager_retain_obj([NSFontManager sharedFontManager]);
    }
}

void ns_fontmanager_destroy(uintptr_t manager)
{
    if (!manager) {
        return;
    }
    CFRelease((void *)manager);
}

void *ns_fontmanager_nsfontmanager(uintptr_t manager)
{
    NSFontManager *obj = ns_fontmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_fontmanager_is_multiple(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj && obj.isMultiple ? 1 : 0;
    }
}

uintptr_t ns_fontmanager_selected_font(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj && obj.selectedFont ? ns_font_wrap((__bridge void *)obj.selectedFont) : 0;
    }
}

void ns_fontmanager_set_selected_font(uintptr_t manager, uintptr_t font, int is_multiple)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        if (obj && fontObj) {
            [obj setSelectedFont:fontObj isMultiple:is_multiple ? YES : NO];
        }
    }
}

uintptr_t ns_fontmanager_font_with_family(uintptr_t manager, const char *family, unsigned traits, int weight, double size)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || !family || family[0] == '\0') {
            return 0;
        }
        NSFont *font = [obj fontWithFamily:[NSString stringWithUTF8String:family]
                                    traits:(NSFontTraitMask)traits
                                    weight:(NSInteger)weight
                                      size:(CGFloat)size];
        return ns_font_wrap((__bridge void *)font);
    }
}

unsigned ns_fontmanager_traits_of_font(uintptr_t manager, uintptr_t font)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? (unsigned)[obj traitsOfFont:fontObj] : 0;
    }
}

int ns_fontmanager_weight_of_font(uintptr_t manager, uintptr_t font)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? (int)[obj weightOfFont:fontObj] : 0;
    }
}

int ns_fontmanager_available_fonts_count(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj ? (int)obj.availableFonts.count : 0;
    }
}

int ns_fontmanager_available_font_at(uintptr_t manager, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || index < 0 || (NSUInteger)index >= obj.availableFonts.count) {
            return 0;
        }
        return ns_fontmanager_copy_nsstring(obj.availableFonts[(NSUInteger)index], out, out_len);
    }
}

int ns_fontmanager_available_font_families_count(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj ? (int)obj.availableFontFamilies.count : 0;
    }
}

int ns_fontmanager_available_font_family_at(uintptr_t manager, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || index < 0 || (NSUInteger)index >= obj.availableFontFamilies.count) {
            return 0;
        }
        return ns_fontmanager_copy_nsstring(obj.availableFontFamilies[(NSUInteger)index], out, out_len);
    }
}

uintptr_t ns_fontmanager_convert_font(uintptr_t manager, uintptr_t font)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj convertFont:fontObj]) : 0;
    }
}

uintptr_t ns_fontmanager_convert_font_to_size(uintptr_t manager, uintptr_t font, double size)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj convertFont:fontObj toSize:(CGFloat)size]) : 0;
    }
}

uintptr_t ns_fontmanager_convert_font_to_face(uintptr_t manager, uintptr_t font, const char *face)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        if (!obj || !fontObj || !face || face[0] == '\0') {
            return 0;
        }
        return ns_font_wrap((__bridge void *)[obj convertFont:fontObj toFace:[NSString stringWithUTF8String:face]]);
    }
}

uintptr_t ns_fontmanager_convert_font_to_family(uintptr_t manager, uintptr_t font, const char *family)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        if (!obj || !fontObj || !family || family[0] == '\0') {
            return 0;
        }
        return ns_font_wrap((__bridge void *)[obj convertFont:fontObj toFamily:[NSString stringWithUTF8String:family]]);
    }
}

uintptr_t ns_fontmanager_convert_font_to_have_trait(uintptr_t manager, uintptr_t font, unsigned trait)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj convertFont:fontObj toHaveTrait:(NSFontTraitMask)trait]) : 0;
    }
}

uintptr_t ns_fontmanager_convert_font_to_not_have_trait(uintptr_t manager, uintptr_t font, unsigned trait)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj convertFont:fontObj toNotHaveTrait:(NSFontTraitMask)trait]) : 0;
    }
}

uintptr_t ns_fontmanager_convert_weight(uintptr_t manager, uintptr_t font, int up)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        NSFont *fontObj = (__bridge NSFont *)(void *)ns_font_nsfont(font);
        return (obj && fontObj) ? ns_font_wrap((__bridge void *)[obj convertWeight:up ? YES : NO ofFont:fontObj]) : 0;
    }
}

int ns_fontmanager_is_enabled(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_fontmanager_set_enabled(uintptr_t manager, int enabled)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

unsigned ns_fontmanager_current_font_action(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        return obj ? (unsigned)obj.currentFontAction : (unsigned)NSNoFontChangeAction;
    }
}

uintptr_t ns_fontmanager_font_panel(uintptr_t manager, int create)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj) {
            return 0;
        }
        NSFontPanel *panel = [obj fontPanel:create ? YES : NO];
        return panel ? ns_fontpanel_wrap((__bridge void *)panel) : 0;
    }
}

void ns_fontmanager_order_front_font_panel(uintptr_t manager)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (obj) {
            [obj orderFrontFontPanel:nil];
        }
    }
}

int ns_fontmanager_font_named_has_traits(uintptr_t manager, const char *name, unsigned traits)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || !name || name[0] == '\0') {
            return 0;
        }
        return [obj fontNamed:[NSString stringWithUTF8String:name] hasTraits:(NSFontTraitMask)traits] ? 1 : 0;
    }
}

int ns_fontmanager_available_font_names_with_traits_count(uintptr_t manager, unsigned traits)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj) {
            return 0;
        }
        return (int)[obj availableFontNamesWithTraits:(NSFontTraitMask)traits].count;
    }
}

int ns_fontmanager_available_font_name_with_traits_at(uintptr_t manager, unsigned traits, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || index < 0) {
            return 0;
        }
        NSArray<NSString *> *names = [obj availableFontNamesWithTraits:(NSFontTraitMask)traits];
        if ((NSUInteger)index >= names.count) {
            return 0;
        }
        return ns_fontmanager_copy_nsstring(names[(NSUInteger)index], out, out_len);
    }
}

int ns_fontmanager_localized_name_for_family(uintptr_t manager, const char *family, const char *face, char *out, int out_len)
{
    @autoreleasepool {
        NSFontManager *obj = ns_fontmanager_from(manager);
        if (!obj || !family || family[0] == '\0') {
            return 0;
        }
        NSString *faceKey = (face && face[0] != '\0') ? [NSString stringWithUTF8String:face] : nil;
        NSString *name = [obj localizedNameForFamily:[NSString stringWithUTF8String:family] face:faceKey];
        return ns_fontmanager_copy_nsstring(name, out, out_len);
    }
}
