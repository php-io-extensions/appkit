#ifndef PHP_APPKIT_NS_CONTROL_H
#define PHP_APPKIT_NS_CONTROL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * NSControl helpers. `control` is a view-box handle from any NSControl subclass
 * (NSButton, NSTextField, NSSlider, etc.).
 */

void ns_control_set_enabled(uintptr_t control, int enabled);

int ns_control_is_enabled(uintptr_t control);

void ns_control_set_string(uintptr_t control, const char *value);

int ns_control_get_string(uintptr_t control, char *out, int out_len);

void ns_control_set_int_value(uintptr_t control, int value);

int ns_control_get_int_value(uintptr_t control);

void ns_control_set_tag(uintptr_t control, int tag);

int ns_control_get_tag(uintptr_t control);

void ns_control_perform_click(uintptr_t control);

void ns_control_set_continuous(uintptr_t control, int continuous);

int ns_control_is_continuous(uintptr_t control);

/** NSControlStateValue: -1 mixed, 0 off, 1 on. */
void ns_control_set_state(uintptr_t control, int state);

int ns_control_get_state(uintptr_t control);

/** NSControlSize: 0 regular, 1 small, 2 mini, 3 large. */
void ns_control_set_control_size(uintptr_t control, int size);

int ns_control_get_control_size(uintptr_t control);

/** NSTextAlignment ABI ints. Current macOS (`TARGET_ABI_USES_IOS_VALUES`): 0 left, 1 center, 2 right, 3 justified, 4 natural. */
void ns_control_set_alignment(uintptr_t control, int alignment);

/** `font` is an NSFont handle from `ns_font_*`. */
void ns_control_set_font(uintptr_t control, uintptr_t font);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_CONTROL_H */
