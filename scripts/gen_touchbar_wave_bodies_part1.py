# Generated bodies for gen-touchbar-wave.py

TOUCHBAR_H = r'''#ifndef PHP_APPKIT_NS_TOUCHBAR_H
#define PHP_APPKIT_NS_TOUCHBAR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_touchbar_create(void);
uintptr_t ns_touchbar_wrap(void *bar);
void ns_touchbar_destroy(uintptr_t bar);
void *ns_touchbar_nstouchbar(uintptr_t bar);

void ns_touchbar_set_customization_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_customization_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_default_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_default_item_identifiers_count(uintptr_t bar);
int ns_touchbar_default_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_customization_allowed_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_customization_allowed_item_identifiers_count(uintptr_t bar);
int ns_touchbar_customization_allowed_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_customization_required_item_identifiers(uintptr_t bar, const char **items, int count);
int ns_touchbar_customization_required_item_identifiers_count(uintptr_t bar);
int ns_touchbar_customization_required_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
void ns_touchbar_set_principal_item_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_principal_item_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_escape_key_replacement_item_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_get_escape_key_replacement_item_identifier(uintptr_t bar, char *out, int out_len);
void ns_touchbar_set_template_items(uintptr_t bar, const uintptr_t *items, int count);
int ns_touchbar_item_identifiers_count(uintptr_t bar);
int ns_touchbar_item_identifier_at(uintptr_t bar, int index, char *out, int out_len);
uintptr_t ns_touchbar_item_for_identifier(uintptr_t bar, const char *identifier);
int ns_touchbar_is_visible(uintptr_t bar);
void ns_touchbar_assign_to_responder(uintptr_t bar, uintptr_t responder);
uintptr_t ns_touchbar_from_responder(uintptr_t responder);
void ns_touchbar_set_automatic_customize_menu_item_enabled(int enabled);
int ns_touchbar_is_automatic_customize_menu_item_enabled(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOUCHBAR_H */
'''

TOUCHBAR_M = r'''#import <AppKit/AppKit.h>
#import "ns-touchbar.h"
#import "ns-touchbaritem.h"
#import "ns-responder.h"

static NSTouchBar *ns_touchbar_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTouchBar class]] ? (NSTouchBar *)obj : nil;
}

uintptr_t ns_touchbar_create(void)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            return ns_retain_obj([[NSTouchBar alloc] init]);
        }
        return 0;
    }
}

uintptr_t ns_touchbar_wrap(void *bar)
{
    if (!bar) {
        return 0;
    }
    @autoreleasepool {
        NSTouchBar *obj = (__bridge NSTouchBar *)bar;
        return [obj isKindOfClass:[NSTouchBar class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_touchbar_destroy(uintptr_t bar)
{
    ns_touchbaritem_destroy(bar);
}

void *ns_touchbar_nstouchbar(uintptr_t bar)
{
    NSTouchBar *obj = ns_touchbar_from(bar);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_touchbar_set_customization_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_customization_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.customizationIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_default_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.defaultItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_default_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.defaultItemIdentifiers.count : 0;
    }
}

int ns_touchbar_default_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.defaultItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.defaultItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_customization_allowed_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationAllowedItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_customization_allowed_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.customizationAllowedItemIdentifiers.count : 0;
    }
}

int ns_touchbar_customization_allowed_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.customizationAllowedItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.customizationAllowedItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_customization_required_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationRequiredItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_customization_required_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.customizationRequiredItemIdentifiers.count : 0;
    }
}

int ns_touchbar_customization_required_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.customizationRequiredItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.customizationRequiredItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_principal_item_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.principalItemIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_principal_item_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.principalItemIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_escape_key_replacement_item_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.escapeKeyReplacementItemIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_escape_key_replacement_item_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.escapeKeyReplacementItemIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_template_items(uintptr_t bar, const uintptr_t *items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj) {
            return;
        }
        NSMutableSet<NSTouchBarItem *> *set = [NSMutableSet setWithCapacity:(NSUInteger)count];
        int i;
        for (i = 0; i < count; i++) {
            NSTouchBarItem *item = ns_touchbaritem_from(items[i]);
            if (item) {
                [set addObject:item];
            }
        }
        obj.templateItems = [set copy];
    }
}

int ns_touchbar_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.itemIdentifiers.count : 0;
    }
}

int ns_touchbar_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.itemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.itemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

uintptr_t ns_touchbar_item_for_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || !identifier) {
            return 0;
        }
        NSTouchBarItem *item = [obj itemForIdentifier:[NSString stringWithUTF8String:identifier]];
        return item ? ns_touchbaritem_wrap((__bridge void *)item) : 0;
    }
}

int ns_touchbar_is_visible(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj && obj.visible ? 1 : 0;
    }
}

void ns_touchbar_assign_to_responder(uintptr_t bar, uintptr_t responder)
{
    @autoreleasepool {
        void *ptr = ns_responder_nsresponder(responder);
        NSTouchBar *touchBar = ns_touchbar_from(bar);
        if (!ptr || !touchBar) {
            return;
        }
        NSResponder *r = (__bridge NSResponder *)ptr;
        if (@available(macOS 10.12.2, *)) {
            r.touchBar = touchBar;
        }
    }
}

uintptr_t ns_touchbar_from_responder(uintptr_t responder)
{
    @autoreleasepool {
        void *ptr = ns_responder_nsresponder(responder);
        if (!ptr) {
            return 0;
        }
        NSResponder *r = (__bridge NSResponder *)ptr;
        if (@available(macOS 10.12.2, *)) {
            return r.touchBar ? ns_touchbar_wrap((__bridge void *)r.touchBar) : 0;
        }
        return 0;
    }
}

void ns_touchbar_set_automatic_customize_menu_item_enabled(int enabled)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            [NSTouchBar setAutomaticCustomizeTouchBarMenuItemEnabled:enabled ? YES : NO];
        }
    }
}

int ns_touchbar_is_automatic_customize_menu_item_enabled(void)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            return [NSTouchBar isAutomaticCustomizeTouchBarMenuItemEnabled] ? 1 : 0;
        }
        return 0;
    }
}
'''

CUSTOM_H = r'''#ifndef PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H
#define PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_customtouchbaritem_create(const char *identifier);
uintptr_t ns_customtouchbaritem_wrap(void *item);
void ns_customtouchbaritem_destroy(uintptr_t item);
void *ns_customtouchbaritem_nscustomtouchbaritem(uintptr_t item);
void ns_customtouchbaritem_set_view(uintptr_t item, uintptr_t view);
uintptr_t ns_customtouchbaritem_get_view(uintptr_t item);
void ns_customtouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_customtouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CUSTOMTOUCHBARITEM_H */
'''

CUSTOM_M = r'''#import <AppKit/AppKit.h>
#import "ns-customtouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-view.h"

static NSCustomTouchBarItem *ns_customtouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCustomTouchBarItem class]] ? (NSCustomTouchBarItem *)obj : nil;
}

uintptr_t ns_customtouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.custom";
            return ns_retain_obj([[NSCustomTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_customtouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSCustomTouchBarItem *obj = (__bridge NSCustomTouchBarItem *)item;
        return [obj isKindOfClass:[NSCustomTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_customtouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_customtouchbaritem_nscustomtouchbaritem(uintptr_t item)
{
    NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_customtouchbaritem_set_view(uintptr_t item, uintptr_t view)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        void *v = ns_view_nsview(view);
        if (obj && v) {
            obj.view = (__bridge NSView *)v;
        }
    }
}

uintptr_t ns_customtouchbaritem_get_view(uintptr_t item)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        return obj && obj.view ? ns_view_wrap((__bridge void *)obj.view) : 0;
    }
}

void ns_customtouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_customtouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}
'''

CANDIDATE_H = r'''#ifndef PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H
#define PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_candidatelisttouchbaritem_create(const char *identifier);
uintptr_t ns_candidatelisttouchbaritem_wrap(void *item);
void ns_candidatelisttouchbaritem_destroy(uintptr_t item);
void *ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem(uintptr_t item);
void ns_candidatelisttouchbaritem_set_collapsed(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_is_collapsed(uintptr_t item);
void ns_candidatelisttouchbaritem_set_allows_collapsing(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_allows_collapsing(uintptr_t item);
int ns_candidatelisttouchbaritem_is_candidate_list_visible(uintptr_t item);
void ns_candidatelisttouchbaritem_update_with_insertion_point_visibility(uintptr_t item, int visible);
void ns_candidatelisttouchbaritem_set_allows_text_input_context_candidates(uintptr_t item, int flag);
int ns_candidatelisttouchbaritem_allows_text_input_context_candidates(uintptr_t item);
void ns_candidatelisttouchbaritem_set_candidates(uintptr_t item, const char **candidates, int count);
int ns_candidatelisttouchbaritem_candidates_count(uintptr_t item);
int ns_candidatelisttouchbaritem_candidate_at(uintptr_t item, int index, char *out, int out_len);
void ns_candidatelisttouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_candidatelisttouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CANDIDATELISTTOUCHBARITEM_H */
'''

CANDIDATE_M = r'''#import <AppKit/AppKit.h>
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
'''

COLORPICKER_H = r'''#ifndef PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H
#define PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_colorpickertouchbaritem_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_text_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_stroke_color_picker(const char *identifier);
uintptr_t ns_colorpickertouchbaritem_color_picker_with_button_image(const char *identifier, uintptr_t image);
uintptr_t ns_colorpickertouchbaritem_wrap(void *item);
void ns_colorpickertouchbaritem_destroy(uintptr_t item);
void *ns_colorpickertouchbaritem_nscolorpickertouchbaritem(uintptr_t item);
void ns_colorpickertouchbaritem_set_color(uintptr_t item, uintptr_t color);
uintptr_t ns_colorpickertouchbaritem_get_color(uintptr_t item);
void ns_colorpickertouchbaritem_set_shows_alpha(uintptr_t item, int flag);
int ns_colorpickertouchbaritem_shows_alpha(uintptr_t item);
void ns_colorpickertouchbaritem_set_enabled(uintptr_t item, int flag);
int ns_colorpickertouchbaritem_is_enabled(uintptr_t item);
void ns_colorpickertouchbaritem_set_customization_label(uintptr_t item, const char *label);
int ns_colorpickertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_colorpickertouchbaritem_poll_action(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COLORPICKERTOUCHBARITEM_H */
'''

COLORPICKER_M = r'''#import <AppKit/AppKit.h>
#import <objc/runtime.h>
#import "ns-colorpickertouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-color.h"

static const void *kNSPhpColorPickerTouchBarItemBoxKey = &kNSPhpColorPickerTouchBarItemBoxKey;

@interface NSPhpColorPickerTouchBarItemBox : NSObject
@property (nonatomic, assign) int pendingAction;
@end

@implementation NSPhpColorPickerTouchBarItemBox
- (void)nsAction:(id)sender { (void)sender; self.pendingAction = 1; }
@end

static NSPhpColorPickerTouchBarItemBox *ns_colorpickertouchbaritem_box(NSColorPickerTouchBarItem *item)
{
    if (!item) {
        return nil;
    }
    NSPhpColorPickerTouchBarItemBox *box = objc_getAssociatedObject(item, kNSPhpColorPickerTouchBarItemBoxKey);
    if (!box) {
        box = [NSPhpColorPickerTouchBarItemBox new];
        item.target = box;
        item.action = @selector(nsAction:);
        objc_setAssociatedObject(item, kNSPhpColorPickerTouchBarItemBoxKey, box, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return box;
}

static NSColorPickerTouchBarItem *ns_colorpickertouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorPickerTouchBarItem class]] ? (NSColorPickerTouchBarItem *)obj : nil;
}

static uintptr_t ns_colorpickertouchbaritem_retain(NSColorPickerTouchBarItem *item)
{
    (void) ns_colorpickertouchbaritem_box(item);
    return ns_retain_obj(item);
}

uintptr_t ns_colorpickertouchbaritem_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.color";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem colorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_text_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.textcolor";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem textColorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_stroke_color_picker(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.strokecolor";
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem strokeColorPickerWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_color_picker_with_button_image(const char *identifier, uintptr_t image)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            void *img = ns_color_nscolor(image);
            (void)img;
            void *nsimg = ns_image_nsimage(image);
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.color";
            if (!nsimg) {
                return ns_colorpickertouchbaritem_color_picker(identifier);
            }
            return ns_colorpickertouchbaritem_retain([NSColorPickerTouchBarItem colorPickerWithIdentifier:ident buttonImage:(__bridge NSImage *)nsimg]);
        }
        return 0;
    }
}

uintptr_t ns_colorpickertouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = (__bridge NSColorPickerTouchBarItem *)item;
        return [obj isKindOfClass:[NSColorPickerTouchBarItem class]] ? ns_colorpickertouchbaritem_retain(obj) : 0;
    }
}

void ns_colorpickertouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_colorpickertouchbaritem_nscolorpickertouchbaritem(uintptr_t item)
{
    NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_colorpickertouchbaritem_set_color(uintptr_t item, uintptr_t color)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        void *c = ns_color_nscolor(color);
        if (obj && c) {
            obj.color = (__bridge NSColor *)c;
        }
    }
}

uintptr_t ns_colorpickertouchbaritem_get_color(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.color ? ns_color_wrap((__bridge void *)obj.color) : 0;
    }
}

void ns_colorpickertouchbaritem_set_shows_alpha(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.showsAlpha = flag ? YES : NO;
        }
    }
}

int ns_colorpickertouchbaritem_shows_alpha(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.showsAlpha ? 1 : 0;
    }
}

void ns_colorpickertouchbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_colorpickertouchbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_colorpickertouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_colorpickertouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_colorpickertouchbaritem_poll_action(uintptr_t item)
{
    @autoreleasepool {
        NSColorPickerTouchBarItem *obj = ns_colorpickertouchbaritem_from(item);
        NSPhpColorPickerTouchBarItemBox *box = ns_colorpickertouchbaritem_box(obj);
        if (!box || !box.pendingAction) {
            return 0;
        }
        box.pendingAction = 0;
        return 1;
    }
}
'''

# Fix color picker - used ns_image_nsimage but forgot import. Will fix in GROUP onward and patch COLORPICKER_M
