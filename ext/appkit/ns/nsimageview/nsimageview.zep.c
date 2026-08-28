
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/ns-imageview.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSImageView_NSImageView)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImageView, NSImageView, appkit, ns_nsimageview_nsimageview, appkit_ns_nsimageview_nsimageview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageViewWithImage)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nsimageview_image_view_with_image(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, image)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_image(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nsimageview_set_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, isEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimageview_is_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setEditable)
{
	zend_bool editable;
	zval *handle_param = NULL, *editable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (editable ? 1 : 0));
	ns_nsimageview_set_editable(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_image_alignment(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageAlignment)
{
	zval *handle_param = NULL, *imageAlignment_param = NULL, _0, _1;
	zend_long handle, imageAlignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageAlignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageAlignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageAlignment);
	ns_nsimageview_set_image_alignment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageScaling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_image_scaling(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageScaling)
{
	zval *handle_param = NULL, *imageScaling_param = NULL, _0, _1;
	zend_long handle, imageScaling;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageScaling)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageScaling_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageScaling);
	ns_nsimageview_set_image_scaling(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageFrameStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_image_frame_style(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageFrameStyle)
{
	zval *handle_param = NULL, *imageFrameStyle_param = NULL, _0, _1;
	zend_long handle, imageFrameStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageFrameStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageFrameStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageFrameStyle);
	ns_nsimageview_set_image_frame_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, symbolConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_symbol_configuration(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolConfiguration)
{
	zval *handle_param = NULL, *symbolConfiguration_param = NULL, _0, _1;
	zend_long handle, symbolConfiguration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &symbolConfiguration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolConfiguration);
	ns_nsimageview_set_symbol_configuration(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, contentTintColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_content_tint_color(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setContentTintColor)
{
	zval *handle_param = NULL, *contentTintColor_param = NULL, _0, _1;
	zend_long handle, contentTintColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contentTintColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contentTintColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contentTintColor);
	ns_nsimageview_set_content_tint_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, animates)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimageview_animates(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setAnimates)
{
	zend_bool animates;
	zval *handle_param = NULL, *animates_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(animates)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &animates_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (animates ? 1 : 0));
	ns_nsimageview_set_animates(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, allowsCutCopyPaste)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsimageview_allows_cut_copy_paste(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setAllowsCutCopyPaste)
{
	zend_bool allowsCutCopyPaste;
	zval *handle_param = NULL, *allowsCutCopyPaste_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsCutCopyPaste)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsCutCopyPaste_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsCutCopyPaste ? 1 : 0));
	ns_nsimageview_set_allows_cut_copy_paste(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, defaultPreferredImageDynamicRange)
{

	RETURN_LONG(ns_nsimageview_default_preferred_image_dynamic_range());
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setDefaultPreferredImageDynamicRange)
{
	zval *defaultPreferredImageDynamicRange_param = NULL, _0;
	zend_long defaultPreferredImageDynamicRange;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(defaultPreferredImageDynamicRange)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &defaultPreferredImageDynamicRange_param);
	ZVAL_LONG(&_0, defaultPreferredImageDynamicRange);
	ns_nsimageview_set_default_preferred_image_dynamic_range(&_0);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, preferredImageDynamicRange)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_preferred_image_dynamic_range(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setPreferredImageDynamicRange)
{
	zval *handle_param = NULL, *preferredImageDynamicRange_param = NULL, _0, _1;
	zend_long handle, preferredImageDynamicRange;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(preferredImageDynamicRange)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &preferredImageDynamicRange_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, preferredImageDynamicRange);
	ns_nsimageview_set_preferred_image_dynamic_range(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageDynamicRange)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsimageview_image_dynamic_range(&_0));
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffect)
{
	zval *handle_param = NULL, *symbolEffect_param = NULL, _0, _1;
	zend_long handle, symbolEffect;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &symbolEffect_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ns_nsimageview_add_symbol_effect(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptions)
{
	zval *handle_param = NULL, *symbolEffect_param = NULL, *options_param = NULL, _0, _1, _2;
	zend_long handle, symbolEffect, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &symbolEffect_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ZVAL_LONG(&_2, options);
	ns_nsimageview_add_symbol_effect_options(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptionsAnimated)
{
	zend_bool animated;
	zval *handle_param = NULL, *symbolEffect_param = NULL, *options_param = NULL, *animated_param = NULL, _0, _1, _2, _3;
	zend_long handle, symbolEffect, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
		Z_PARAM_LONG(options)
		Z_PARAM_BOOL(animated)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &symbolEffect_param, &options_param, &animated_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ZVAL_LONG(&_2, options);
	ZVAL_BOOL(&_3, (animated ? 1 : 0));
	ns_nsimageview_add_symbol_effect_options_animated(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfType)
{
	zval *handle_param = NULL, *symbolEffect_param = NULL, _0, _1;
	zend_long handle, symbolEffect;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &symbolEffect_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ns_nsimageview_remove_symbol_effect_of_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptions)
{
	zval *handle_param = NULL, *symbolEffect_param = NULL, *options_param = NULL, _0, _1, _2;
	zend_long handle, symbolEffect, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &symbolEffect_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ZVAL_LONG(&_2, options);
	ns_nsimageview_remove_symbol_effect_of_type_options(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptionsAnimated)
{
	zend_bool animated;
	zval *handle_param = NULL, *symbolEffect_param = NULL, *options_param = NULL, *animated_param = NULL, _0, _1, _2, _3;
	zend_long handle, symbolEffect, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolEffect)
		Z_PARAM_LONG(options)
		Z_PARAM_BOOL(animated)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &symbolEffect_param, &options_param, &animated_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolEffect);
	ZVAL_LONG(&_2, options);
	ZVAL_BOOL(&_3, (animated ? 1 : 0));
	ns_nsimageview_remove_symbol_effect_of_type_options_animated(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffects)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsimageview_remove_all_symbol_effects(&_0);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	ns_nsimageview_remove_all_symbol_effects_with_options(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptionsAnimated)
{
	zend_bool animated;
	zval *handle_param = NULL, *options_param = NULL, *animated_param = NULL, _0, _1, _2;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
		Z_PARAM_BOOL(animated)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &options_param, &animated_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	ZVAL_BOOL(&_2, (animated ? 1 : 0));
	ns_nsimageview_remove_all_symbol_effects_with_options_animated(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransition)
{
	zval *handle_param = NULL, *symbolImage_param = NULL, *transition_param = NULL, _0, _1, _2;
	zend_long handle, symbolImage, transition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolImage)
		Z_PARAM_LONG(transition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &symbolImage_param, &transition_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolImage);
	ZVAL_LONG(&_2, transition);
	ns_nsimageview_set_symbol_image_with_content_transition(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransitionOptions)
{
	zval *handle_param = NULL, *symbolImage_param = NULL, *transition_param = NULL, *options_param = NULL, _0, _1, _2, _3;
	zend_long handle, symbolImage, transition, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolImage)
		Z_PARAM_LONG(transition)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &symbolImage_param, &transition_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolImage);
	ZVAL_LONG(&_2, transition);
	ZVAL_LONG(&_3, options);
	ns_nsimageview_set_symbol_image_with_content_transition_options(&_0, &_1, &_2, &_3);
}

