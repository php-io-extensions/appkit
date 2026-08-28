#ifndef PHP_APPKIT_NS_IMAGEVIEW_H
#define PHP_APPKIT_NS_IMAGEVIEW_H

/*
 * Faithful 1:1 binding of AppKit NSImageView.h. Every member of the
 * class (base interface + same-file NSSymbolEffect category) is
 * either bound or reserved. Nothing is reserved — the header has no
 * blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. The adopted NSAccessibilityImage and
 * NSMenuItemValidation protocols are not class members. The
 * NSImageDynamicRange typedef is not a class member. No designated
 * initializer — construction is NSControl::initWithFrame or the
 * imageViewWithImage: factory (a single class-method send). Inherited
 * NSControl / NSView members stay on those classes. Class property
 * defaultPreferredImageDynamicRange is a no-handle getter/setter.
 * Nullable NSImage / NSImageSymbolConfiguration / NSColor and the
 * Symbols-framework NSSymbolEffect / NSSymbolEffectOptions /
 * NSSymbolContentTransition arguments cross as int handles (0 = nil).
 * NSImageAlignment, NSImageScaling, NSImageFrameStyle, and
 * NSImageDynamicRange cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSImageView ---- */

/*@zep NS\NSImageView imageViewWithImage(int image) -> int */
zend_long ns_nsimageview_image_view_with_image(zval *image);

/*@zep NS\NSImageView image(int handle) -> int */
zend_long ns_nsimageview_image(zval *handle);
/*@zep NS\NSImageView setImage(int handle, int image) -> void */
void ns_nsimageview_set_image(zval *handle, zval *image);

/*@zep NS\NSImageView isEditable(int handle) -> bool */
zend_long ns_nsimageview_is_editable(zval *handle);
/*@zep NS\NSImageView setEditable(int handle, bool editable) -> void */
void ns_nsimageview_set_editable(zval *handle, zval *editable);

/*@zep NS\NSImageView imageAlignment(int handle) -> int */
zend_long ns_nsimageview_image_alignment(zval *handle);
/*@zep NS\NSImageView setImageAlignment(int handle, int imageAlignment) -> void */
void ns_nsimageview_set_image_alignment(zval *handle, zval *imageAlignment);

/*@zep NS\NSImageView imageScaling(int handle) -> int */
zend_long ns_nsimageview_image_scaling(zval *handle);
/*@zep NS\NSImageView setImageScaling(int handle, int imageScaling) -> void */
void ns_nsimageview_set_image_scaling(zval *handle, zval *imageScaling);

/*@zep NS\NSImageView imageFrameStyle(int handle) -> int */
zend_long ns_nsimageview_image_frame_style(zval *handle);
/*@zep NS\NSImageView setImageFrameStyle(int handle, int imageFrameStyle) -> void */
void ns_nsimageview_set_image_frame_style(zval *handle, zval *imageFrameStyle);

/*@zep NS\NSImageView symbolConfiguration(int handle) -> int */
zend_long ns_nsimageview_symbol_configuration(zval *handle);
/*@zep NS\NSImageView setSymbolConfiguration(int handle, int symbolConfiguration) -> void */
void ns_nsimageview_set_symbol_configuration(zval *handle, zval *symbolConfiguration);

/*@zep NS\NSImageView contentTintColor(int handle) -> int */
zend_long ns_nsimageview_content_tint_color(zval *handle);
/*@zep NS\NSImageView setContentTintColor(int handle, int contentTintColor) -> void */
void ns_nsimageview_set_content_tint_color(zval *handle, zval *contentTintColor);

/*@zep NS\NSImageView animates(int handle) -> bool */
zend_long ns_nsimageview_animates(zval *handle);
/*@zep NS\NSImageView setAnimates(int handle, bool animates) -> void */
void ns_nsimageview_set_animates(zval *handle, zval *animates);

/*@zep NS\NSImageView allowsCutCopyPaste(int handle) -> bool */
zend_long ns_nsimageview_allows_cut_copy_paste(zval *handle);
/*@zep NS\NSImageView setAllowsCutCopyPaste(int handle, bool allowsCutCopyPaste) -> void */
void ns_nsimageview_set_allows_cut_copy_paste(zval *handle, zval *allowsCutCopyPaste);

/*@zep NS\NSImageView defaultPreferredImageDynamicRange() -> int */
zend_long ns_nsimageview_default_preferred_image_dynamic_range(void);
/*@zep NS\NSImageView setDefaultPreferredImageDynamicRange(int defaultPreferredImageDynamicRange) -> void */
void ns_nsimageview_set_default_preferred_image_dynamic_range(zval *defaultPreferredImageDynamicRange);

/*@zep NS\NSImageView preferredImageDynamicRange(int handle) -> int */
zend_long ns_nsimageview_preferred_image_dynamic_range(zval *handle);
/*@zep NS\NSImageView setPreferredImageDynamicRange(int handle, int preferredImageDynamicRange) -> void */
void ns_nsimageview_set_preferred_image_dynamic_range(zval *handle, zval *preferredImageDynamicRange);

/*@zep NS\NSImageView imageDynamicRange(int handle) -> int */
zend_long ns_nsimageview_image_dynamic_range(zval *handle);

/* ---- NSSymbolEffect ---- */

/*@zep NS\NSImageView addSymbolEffect(int handle, int symbolEffect) -> void */
void ns_nsimageview_add_symbol_effect(zval *handle, zval *symbolEffect);
/*@zep NS\NSImageView addSymbolEffectOptions(int handle, int symbolEffect, int options) -> void */
void ns_nsimageview_add_symbol_effect_options(zval *handle, zval *symbolEffect, zval *options);
/*@zep NS\NSImageView addSymbolEffectOptionsAnimated(int handle, int symbolEffect, int options, bool animated) -> void */
void ns_nsimageview_add_symbol_effect_options_animated(zval *handle, zval *symbolEffect, zval *options, zval *animated);

/*@zep NS\NSImageView removeSymbolEffectOfType(int handle, int symbolEffect) -> void */
void ns_nsimageview_remove_symbol_effect_of_type(zval *handle, zval *symbolEffect);
/*@zep NS\NSImageView removeSymbolEffectOfTypeOptions(int handle, int symbolEffect, int options) -> void */
void ns_nsimageview_remove_symbol_effect_of_type_options(zval *handle, zval *symbolEffect, zval *options);
/*@zep NS\NSImageView removeSymbolEffectOfTypeOptionsAnimated(int handle, int symbolEffect, int options, bool animated) -> void */
void ns_nsimageview_remove_symbol_effect_of_type_options_animated(zval *handle, zval *symbolEffect, zval *options, zval *animated);

/*@zep NS\NSImageView removeAllSymbolEffects(int handle) -> void */
void ns_nsimageview_remove_all_symbol_effects(zval *handle);
/*@zep NS\NSImageView removeAllSymbolEffectsWithOptions(int handle, int options) -> void */
void ns_nsimageview_remove_all_symbol_effects_with_options(zval *handle, zval *options);
/*@zep NS\NSImageView removeAllSymbolEffectsWithOptionsAnimated(int handle, int options, bool animated) -> void */
void ns_nsimageview_remove_all_symbol_effects_with_options_animated(zval *handle, zval *options, zval *animated);

/*@zep NS\NSImageView setSymbolImageWithContentTransition(int handle, int symbolImage, int transition) -> void */
void ns_nsimageview_set_symbol_image_with_content_transition(zval *handle, zval *symbolImage, zval *transition);
/*@zep NS\NSImageView setSymbolImageWithContentTransitionOptions(int handle, int symbolImage, int transition, int options) -> void */
void ns_nsimageview_set_symbol_image_with_content_transition_options(zval *handle, zval *symbolImage, zval *transition, zval *options);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_IMAGEVIEW_H */
