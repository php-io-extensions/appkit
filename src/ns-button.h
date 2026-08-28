#ifndef PHP_APPKIT_NS_BUTTON_H
#define PHP_APPKIT_NS_BUTTON_H

/*
 * NSButton — worked example for fan-out. Every member of the SDK's
 * NSButton.h is either bound or reserved. Inherited NSControl / NSView
 * members bind on those classes. NSAttributedString properties and the
 * deprecated setTitleWithMnemonic: are reserved; nothing is omitted.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Creating Standard Buttons ---- */

/*@zep NS\NSButton buttonWithTitleImageTargetAction(string title, int image, int target, string action) -> int */
zend_long ns_nsbutton_button_with_title_image_target_action(zval *title, zval *image, zval *target, zval *action);
/*@zep NS\NSButton buttonWithTitleTargetAction(string title, int target, string action) -> int */
zend_long ns_nsbutton_button_with_title_target_action(zval *title, zval *target, zval *action);
/*@zep NS\NSButton buttonWithImageTargetAction(int image, int target, string action) -> int */
zend_long ns_nsbutton_button_with_image_target_action(zval *image, zval *target, zval *action);
/*@zep NS\NSButton checkboxWithTitleTargetAction(string title, int target, string action) -> int */
zend_long ns_nsbutton_checkbox_with_title_target_action(zval *title, zval *target, zval *action);
/*@zep NS\NSButton radioButtonWithTitleTargetAction(string title, int target, string action) -> int */
zend_long ns_nsbutton_radio_button_with_title_target_action(zval *title, zval *target, zval *action);

/* ---- Configuring Buttons ---- */

/*@zep NS\NSButton setButtonType(int handle, int type) -> void */
void ns_nsbutton_set_button_type(zval *handle, zval *type);

/*@zep NS\NSButton title(int handle) -> string */
void ns_nsbutton_title(zval *return_value, zval *handle);
/*@zep NS\NSButton setTitle(int handle, string title) -> void */
void ns_nsbutton_set_title(zval *handle, zval *title);

/*@reserved NS\NSButton @property (copy) NSAttributedString *attributedTitle — getter */
/*@reserved NS\NSButton @property (copy) NSAttributedString *attributedTitle — setter */

/*@zep NS\NSButton alternateTitle(int handle) -> string */
void ns_nsbutton_alternate_title(zval *return_value, zval *handle);
/*@zep NS\NSButton setAlternateTitle(int handle, string title) -> void */
void ns_nsbutton_set_alternate_title(zval *handle, zval *title);

/*@reserved NS\NSButton @property (copy) NSAttributedString *attributedAlternateTitle — getter */
/*@reserved NS\NSButton @property (copy) NSAttributedString *attributedAlternateTitle — setter */

/*@zep NS\NSButton hasDestructiveAction(int handle) -> bool */
zend_long ns_nsbutton_has_destructive_action(zval *handle);
/*@zep NS\NSButton setHasDestructiveAction(int handle, bool flag) -> void */
void ns_nsbutton_set_has_destructive_action(zval *handle, zval *flag);

/*@zep NS\NSButton sound(int handle) -> int */
zend_long ns_nsbutton_sound(zval *handle);
/*@zep NS\NSButton setSound(int handle, int sound) -> void */
void ns_nsbutton_set_sound(zval *handle, zval *sound);

/*@zep NS\NSButton isSpringLoaded(int handle) -> bool */
zend_long ns_nsbutton_is_spring_loaded(zval *handle);
/*@zep NS\NSButton setSpringLoaded(int handle, bool flag) -> void */
void ns_nsbutton_set_spring_loaded(zval *handle, zval *flag);

/*@zep NS\NSButton maxAcceleratorLevel(int handle) -> int */
zend_long ns_nsbutton_max_accelerator_level(zval *handle);
/*@zep NS\NSButton setMaxAcceleratorLevel(int handle, int level) -> void */
void ns_nsbutton_set_max_accelerator_level(zval *handle, zval *level);

/*@zep NS\NSButton setPeriodicDelayInterval(int handle, double delay, double interval) -> void */
void ns_nsbutton_set_periodic_delay_interval(zval *handle, zval *delay, zval *interval);
/*@zep NS\NSButton getPeriodicDelayInterval(int handle) -> array */
void ns_nsbutton_get_periodic_delay_interval(zval *return_value, zval *handle);

/*@zep NS\NSButton bezelStyle(int handle) -> int */
zend_long ns_nsbutton_bezel_style(zval *handle);
/*@zep NS\NSButton setBezelStyle(int handle, int style) -> void */
void ns_nsbutton_set_bezel_style(zval *handle, zval *style);

/*@zep NS\NSButton isBordered(int handle) -> bool */
zend_long ns_nsbutton_is_bordered(zval *handle);
/*@zep NS\NSButton setBordered(int handle, bool flag) -> void */
void ns_nsbutton_set_bordered(zval *handle, zval *flag);

/*@zep NS\NSButton isTransparent(int handle) -> bool */
zend_long ns_nsbutton_is_transparent(zval *handle);
/*@zep NS\NSButton setTransparent(int handle, bool flag) -> void */
void ns_nsbutton_set_transparent(zval *handle, zval *flag);

/*@zep NS\NSButton showsBorderOnlyWhileMouseInside(int handle) -> bool */
zend_long ns_nsbutton_shows_border_only_while_mouse_inside(zval *handle);
/*@zep NS\NSButton setShowsBorderOnlyWhileMouseInside(int handle, bool flag) -> void */
void ns_nsbutton_set_shows_border_only_while_mouse_inside(zval *handle, zval *flag);

/*@zep NS\NSButton bezelColor(int handle) -> int */
zend_long ns_nsbutton_bezel_color(zval *handle);
/*@zep NS\NSButton setBezelColor(int handle, int color) -> void */
void ns_nsbutton_set_bezel_color(zval *handle, zval *color);

/*@zep NS\NSButton contentTintColor(int handle) -> int */
zend_long ns_nsbutton_content_tint_color(zval *handle);
/*@zep NS\NSButton setContentTintColor(int handle, int color) -> void */
void ns_nsbutton_set_content_tint_color(zval *handle, zval *color);

/* ---- Configuring Button Images ---- */

/*@zep NS\NSButton image(int handle) -> int */
zend_long ns_nsbutton_image(zval *handle);
/*@zep NS\NSButton setImage(int handle, int image) -> void */
void ns_nsbutton_set_image(zval *handle, zval *image);

/*@zep NS\NSButton alternateImage(int handle) -> int */
zend_long ns_nsbutton_alternate_image(zval *handle);
/*@zep NS\NSButton setAlternateImage(int handle, int image) -> void */
void ns_nsbutton_set_alternate_image(zval *handle, zval *image);

/*@zep NS\NSButton imagePosition(int handle) -> int */
zend_long ns_nsbutton_image_position(zval *handle);
/*@zep NS\NSButton setImagePosition(int handle, int position) -> void */
void ns_nsbutton_set_image_position(zval *handle, zval *position);

/*@zep NS\NSButton imageScaling(int handle) -> int */
zend_long ns_nsbutton_image_scaling(zval *handle);
/*@zep NS\NSButton setImageScaling(int handle, int scaling) -> void */
void ns_nsbutton_set_image_scaling(zval *handle, zval *scaling);

/*@zep NS\NSButton imageHugsTitle(int handle) -> bool */
zend_long ns_nsbutton_image_hugs_title(zval *handle);
/*@zep NS\NSButton setImageHugsTitle(int handle, bool flag) -> void */
void ns_nsbutton_set_image_hugs_title(zval *handle, zval *flag);

/*@zep NS\NSButton symbolConfiguration(int handle) -> int */
zend_long ns_nsbutton_symbol_configuration(zval *handle);
/*@zep NS\NSButton setSymbolConfiguration(int handle, int configuration) -> void */
void ns_nsbutton_set_symbol_configuration(zval *handle, zval *configuration);

/* ---- Managing Button State ---- */

/*@zep NS\NSButton state(int handle) -> int */
zend_long ns_nsbutton_state(zval *handle);
/*@zep NS\NSButton setState(int handle, int state) -> void */
void ns_nsbutton_set_state(zval *handle, zval *state);

/*@zep NS\NSButton allowsMixedState(int handle) -> bool */
zend_long ns_nsbutton_allows_mixed_state(zval *handle);
/*@zep NS\NSButton setAllowsMixedState(int handle, bool flag) -> void */
void ns_nsbutton_set_allows_mixed_state(zval *handle, zval *flag);

/*@zep NS\NSButton setNextState(int handle) -> void */
void ns_nsbutton_set_next_state(zval *handle);

/*@zep NS\NSButton highlight(int handle, bool flag) -> void */
void ns_nsbutton_highlight(zval *handle, zval *flag);

/* ---- Handling Keyboard Events ---- */

/*@zep NS\NSButton keyEquivalent(int handle) -> string */
void ns_nsbutton_key_equivalent(zval *return_value, zval *handle);
/*@zep NS\NSButton setKeyEquivalent(int handle, string keyEquivalent) -> void */
void ns_nsbutton_set_key_equivalent(zval *handle, zval *keyEquivalent);

/*@zep NS\NSButton keyEquivalentModifierMask(int handle) -> int */
zend_long ns_nsbutton_key_equivalent_modifier_mask(zval *handle);
/*@zep NS\NSButton setKeyEquivalentModifierMask(int handle, int mask) -> void */
void ns_nsbutton_set_key_equivalent_modifier_mask(zval *handle, zval *mask);

/*@zep NS\NSButton performKeyEquivalent(int handle, int key) -> bool */
zend_long ns_nsbutton_perform_key_equivalent(zval *handle, zval *key);

/* ---- NSUserInterfaceCompression ---- */

/*@zep NS\NSButton compressWithPrioritizedCompressionOptions(int handle, array prioritizedOptions) -> void */
void ns_nsbutton_compress_with_prioritized_compression_options(zval *handle, zval *prioritizedOptions);
/*@zep NS\NSButton minimumSizeWithPrioritizedCompressionOptions(int handle, array prioritizedOptions) -> array */
void ns_nsbutton_minimum_size_with_prioritized_compression_options(zval *return_value, zval *handle, zval *prioritizedOptions);
/*@zep NS\NSButton activeCompressionOptions(int handle) -> int */
zend_long ns_nsbutton_active_compression_options(zval *handle);

/* ---- NSButtonDeprecated ---- */

/*@reserved NS\NSButton - (void)setTitleWithMnemonic:(null_unspecified NSString *)stringWithAmpersand API_DEPRECATED */

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BUTTON_H */
