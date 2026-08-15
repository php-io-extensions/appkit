#import <AppKit/AppKit.h>
#import "ns-appearance.h"

static uintptr_t ns_appearance_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSAppearance *ns_appearance_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAppearance class]] ? (NSAppearance *)obj : nil;
}

static int ns_appearance_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_appearance_wrap(void *appearance)
{
    if (!appearance) {
        return 0;
    }
    @autoreleasepool {
        NSAppearance *obj = (__bridge NSAppearance *)appearance;
        return [obj isKindOfClass:[NSAppearance class]] ? ns_appearance_retain_obj(obj) : 0;
    }
}

void ns_appearance_destroy(uintptr_t appearance)
{
    if (!appearance) {
        return;
    }
    CFRelease((void *)appearance);
}

void *ns_appearance_nsappearance(uintptr_t appearance)
{
    NSAppearance *obj = ns_appearance_from(appearance);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_appearance_named(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSAppearance *obj = [NSAppearance appearanceNamed:[NSString stringWithUTF8String:name]];
        return ns_appearance_retain_obj(obj);
    }
}

uintptr_t ns_appearance_create(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSAppearance *obj = [[NSAppearance alloc] initWithAppearanceNamed:[NSString stringWithUTF8String:name] bundle:nil];
        return ns_appearance_retain_obj(obj);
    }
}

uintptr_t ns_appearance_current_drawing(void)
{
    @autoreleasepool {
        return ns_appearance_retain_obj([NSAppearance currentDrawingAppearance]);
    }
}

int ns_appearance_name(uintptr_t appearance, char *out, int out_len)
{
    @autoreleasepool {
        NSAppearance *obj = ns_appearance_from(appearance);
        if (!obj) {
            return 0;
        }
        return ns_appearance_copy_nsstring(obj.name, out, out_len);
    }
}

int ns_appearance_allows_vibrancy(uintptr_t appearance)
{
    @autoreleasepool {
        NSAppearance *obj = ns_appearance_from(appearance);
        return obj && obj.allowsVibrancy ? 1 : 0;
    }
}

int ns_appearance_best_match(uintptr_t appearance, const char **names, int count, char *out, int out_len)
{
    if (!names || count <= 0 || !out || out_len <= 0) {
        return 0;
    }
    @autoreleasepool {
        NSAppearance *obj = ns_appearance_from(appearance);
        if (!obj) {
            return 0;
        }
        NSMutableArray<NSAppearanceName> *list = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
        for (int i = 0; i < count; i++) {
            if (names[i] && names[i][0] != '\0') {
                [list addObject:[NSString stringWithUTF8String:names[i]]];
            }
        }
        if (list.count == 0) {
            return 0;
        }
        NSAppearanceName match = [obj bestMatchFromAppearancesWithNames:list];
        return ns_appearance_copy_nsstring(match, out, out_len);
    }
}
