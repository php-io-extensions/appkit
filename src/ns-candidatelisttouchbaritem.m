#import <AppKit/AppKit.h>
#import "ns-candidatelisttouchbaritem.h"
#import "ns-touchbaritem.h"

static NSCandidateListTouchBarItem *ns_candidatelisttouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCandidateListTouchBarItem class]] ? (NSCandidateListTouchBarItem *)obj : nil;
}

uintptr_t ns_candidatelisttouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : NSTouchBarItemIdentifierCandidateList;
            return ns_retain_obj([[NSCandidateListTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_candidatelisttouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = (__bridge NSCandidateListTouchBarItem *)item;
        return [obj isKindOfClass:[NSCandidateListTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_candidatelisttouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem(uintptr_t item)
{
    NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_candidatelisttouchbaritem_set_collapsed(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (obj) {
            obj.collapsed = flag ? YES : NO;
        }
    }
}

int ns_candidatelisttouchbaritem_is_collapsed(uintptr_t item)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj && obj.collapsed ? 1 : 0;
    }
}

void ns_candidatelisttouchbaritem_set_allows_collapsing(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (obj) {
            obj.allowsCollapsing = flag ? YES : NO;
        }
    }
}

int ns_candidatelisttouchbaritem_allows_collapsing(uintptr_t item)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj && obj.allowsCollapsing ? 1 : 0;
    }
}

int ns_candidatelisttouchbaritem_is_candidate_list_visible(uintptr_t item)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj && obj.candidateListVisible ? 1 : 0;
    }
}

void ns_candidatelisttouchbaritem_update_with_insertion_point_visibility(uintptr_t item, int visible)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (obj) {
            [obj updateWithInsertionPointVisibility:visible ? YES : NO];
        }
    }
}

void ns_candidatelisttouchbaritem_set_allows_text_input_context_candidates(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (obj) {
            obj.allowsTextInputContextCandidates = flag ? YES : NO;
        }
    }
}

int ns_candidatelisttouchbaritem_allows_text_input_context_candidates(uintptr_t item)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj && obj.allowsTextInputContextCandidates ? 1 : 0;
    }
}

void ns_candidatelisttouchbaritem_set_candidates(uintptr_t item, const char **candidates, int count)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (!obj) {
            return;
        }
        NSMutableArray<NSString *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
        int i;
        for (i = 0; i < count; i++) {
            if (candidates && candidates[i]) {
                [arr addObject:[NSString stringWithUTF8String:candidates[i]]];
            }
        }
        [obj setCandidates:arr forSelectedRange:NSMakeRange(0, 0) inString:@""];
    }
}

int ns_candidatelisttouchbaritem_candidates_count(uintptr_t item)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj ? (int)obj.candidates.count : 0;
    }
}

int ns_candidatelisttouchbaritem_candidate_at(uintptr_t item, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (!obj || index < 0 || index >= (int)obj.candidates.count) {
            return 0;
        }
        id candidate = obj.candidates[(NSUInteger)index];
        if ([candidate isKindOfClass:[NSString class]]) {
            return ns_copy_nsstring((NSString *)candidate, out, out_len);
        }
        if ([candidate isKindOfClass:[NSAttributedString class]]) {
            return ns_copy_nsstring([(NSAttributedString *)candidate string], out, out_len);
        }
        return 0;
    }
}

void ns_candidatelisttouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_candidatelisttouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSCandidateListTouchBarItem *obj = ns_candidatelisttouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}
