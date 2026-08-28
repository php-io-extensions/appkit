
extern zend_class_entry *appkit_ns_nsimageview_nsimageview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImageView_NSImageView);

PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageViewWithImage);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, image);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImage);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, isEditable);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setEditable);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageAlignment);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageAlignment);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageScaling);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageScaling);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageFrameStyle);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setImageFrameStyle);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, symbolConfiguration);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolConfiguration);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, contentTintColor);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setContentTintColor);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, animates);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setAnimates);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, allowsCutCopyPaste);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setAllowsCutCopyPaste);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, defaultPreferredImageDynamicRange);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setDefaultPreferredImageDynamicRange);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, preferredImageDynamicRange);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setPreferredImageDynamicRange);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, imageDynamicRange);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffect);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptions);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptionsAnimated);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfType);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptions);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptionsAnimated);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffects);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptions);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptionsAnimated);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransition);
PHP_METHOD(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransitionOptions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_imageviewwithimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_imagealignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setimagealignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageAlignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_imagescaling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setimagescaling, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageScaling, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_imageframestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setimageframestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageFrameStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_symbolconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setsymbolconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolConfiguration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_contenttintcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setcontenttintcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentTintColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_animates, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setanimates, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animates, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_allowscutcopypaste, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setallowscutcopypaste, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsCutCopyPaste, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_defaultpreferredimagedynamicrange, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setdefaultpreferredimagedynamicrange, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, defaultPreferredImageDynamicRange, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_preferredimagedynamicrange, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setpreferredimagedynamicrange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredImageDynamicRange, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_imagedynamicrange, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffectoptions, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffectoptionsanimated, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animated, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftypeoptions, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftypeoptionsanimated, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolEffect, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animated, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffects, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffectswithoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffectswithoptionsanimated, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animated, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setsymbolimagewithcontenttransition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolImage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimageview_nsimageview_setsymbolimagewithcontenttransitionoptions, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, symbolImage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimageview_nsimageview_method_entry) {
	PHP_ME(AppKit_NS_NSImageView_NSImageView, imageViewWithImage, arginfo_appkit_ns_nsimageview_nsimageview_imageviewwithimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, image, arginfo_appkit_ns_nsimageview_nsimageview_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setImage, arginfo_appkit_ns_nsimageview_nsimageview_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, isEditable, arginfo_appkit_ns_nsimageview_nsimageview_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setEditable, arginfo_appkit_ns_nsimageview_nsimageview_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, imageAlignment, arginfo_appkit_ns_nsimageview_nsimageview_imagealignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setImageAlignment, arginfo_appkit_ns_nsimageview_nsimageview_setimagealignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, imageScaling, arginfo_appkit_ns_nsimageview_nsimageview_imagescaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setImageScaling, arginfo_appkit_ns_nsimageview_nsimageview_setimagescaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, imageFrameStyle, arginfo_appkit_ns_nsimageview_nsimageview_imageframestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setImageFrameStyle, arginfo_appkit_ns_nsimageview_nsimageview_setimageframestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, symbolConfiguration, arginfo_appkit_ns_nsimageview_nsimageview_symbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setSymbolConfiguration, arginfo_appkit_ns_nsimageview_nsimageview_setsymbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, contentTintColor, arginfo_appkit_ns_nsimageview_nsimageview_contenttintcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setContentTintColor, arginfo_appkit_ns_nsimageview_nsimageview_setcontenttintcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, animates, arginfo_appkit_ns_nsimageview_nsimageview_animates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setAnimates, arginfo_appkit_ns_nsimageview_nsimageview_setanimates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, allowsCutCopyPaste, arginfo_appkit_ns_nsimageview_nsimageview_allowscutcopypaste, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setAllowsCutCopyPaste, arginfo_appkit_ns_nsimageview_nsimageview_setallowscutcopypaste, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, defaultPreferredImageDynamicRange, arginfo_appkit_ns_nsimageview_nsimageview_defaultpreferredimagedynamicrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setDefaultPreferredImageDynamicRange, arginfo_appkit_ns_nsimageview_nsimageview_setdefaultpreferredimagedynamicrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, preferredImageDynamicRange, arginfo_appkit_ns_nsimageview_nsimageview_preferredimagedynamicrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setPreferredImageDynamicRange, arginfo_appkit_ns_nsimageview_nsimageview_setpreferredimagedynamicrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, imageDynamicRange, arginfo_appkit_ns_nsimageview_nsimageview_imagedynamicrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, addSymbolEffect, arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptions, arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, addSymbolEffectOptionsAnimated, arginfo_appkit_ns_nsimageview_nsimageview_addsymboleffectoptionsanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfType, arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptions, arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftypeoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeSymbolEffectOfTypeOptionsAnimated, arginfo_appkit_ns_nsimageview_nsimageview_removesymboleffectoftypeoptionsanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffects, arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptions, arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffectswithoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, removeAllSymbolEffectsWithOptionsAnimated, arginfo_appkit_ns_nsimageview_nsimageview_removeallsymboleffectswithoptionsanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransition, arginfo_appkit_ns_nsimageview_nsimageview_setsymbolimagewithcontenttransition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImageView_NSImageView, setSymbolImageWithContentTransitionOptions, arginfo_appkit_ns_nsimageview_nsimageview_setsymbolimagewithcontenttransitionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
