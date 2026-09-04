
extern zend_class_entry *appkit_ns_nsbutton_nsbutton_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSButton_NSButton);

PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithTitleImageTargetAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithTitleTargetAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithImageTargetAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, checkboxWithTitleTargetAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, radioButtonWithTitleTargetAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setButtonType);
PHP_METHOD(AppKit_NS_NSButton_NSButton, attributedTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setAttributedTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, title);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, alternateTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setAlternateTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, hasDestructiveAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setHasDestructiveAction);
PHP_METHOD(AppKit_NS_NSButton_NSButton, sound);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setSound);
PHP_METHOD(AppKit_NS_NSButton_NSButton, isSpringLoaded);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setSpringLoaded);
PHP_METHOD(AppKit_NS_NSButton_NSButton, maxAcceleratorLevel);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setMaxAcceleratorLevel);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setPeriodicDelayInterval);
PHP_METHOD(AppKit_NS_NSButton_NSButton, getPeriodicDelayInterval);
PHP_METHOD(AppKit_NS_NSButton_NSButton, bezelStyle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setBezelStyle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, isBordered);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setBordered);
PHP_METHOD(AppKit_NS_NSButton_NSButton, isTransparent);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setTransparent);
PHP_METHOD(AppKit_NS_NSButton_NSButton, showsBorderOnlyWhileMouseInside);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setShowsBorderOnlyWhileMouseInside);
PHP_METHOD(AppKit_NS_NSButton_NSButton, bezelColor);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setBezelColor);
PHP_METHOD(AppKit_NS_NSButton_NSButton, contentTintColor);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setContentTintColor);
PHP_METHOD(AppKit_NS_NSButton_NSButton, image);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setImage);
PHP_METHOD(AppKit_NS_NSButton_NSButton, alternateImage);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setAlternateImage);
PHP_METHOD(AppKit_NS_NSButton_NSButton, imagePosition);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setImagePosition);
PHP_METHOD(AppKit_NS_NSButton_NSButton, imageScaling);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setImageScaling);
PHP_METHOD(AppKit_NS_NSButton_NSButton, imageHugsTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setImageHugsTitle);
PHP_METHOD(AppKit_NS_NSButton_NSButton, symbolConfiguration);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setSymbolConfiguration);
PHP_METHOD(AppKit_NS_NSButton_NSButton, state);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setState);
PHP_METHOD(AppKit_NS_NSButton_NSButton, allowsMixedState);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setAllowsMixedState);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setNextState);
PHP_METHOD(AppKit_NS_NSButton_NSButton, highlight);
PHP_METHOD(AppKit_NS_NSButton_NSButton, keyEquivalent);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setKeyEquivalent);
PHP_METHOD(AppKit_NS_NSButton_NSButton, keyEquivalentModifierMask);
PHP_METHOD(AppKit_NS_NSButton_NSButton, setKeyEquivalentModifierMask);
PHP_METHOD(AppKit_NS_NSButton_NSButton, performKeyEquivalent);
PHP_METHOD(AppKit_NS_NSButton_NSButton, compressWithPrioritizedCompressionOptions);
PHP_METHOD(AppKit_NS_NSButton_NSButton, minimumSizeWithPrioritizedCompressionOptions);
PHP_METHOD(AppKit_NS_NSButton_NSButton, activeCompressionOptions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_buttonwithtitleimagetargetaction, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_buttonwithtitletargetaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_buttonwithimagetargetaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_checkboxwithtitletargetaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_radiobuttonwithtitletargetaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setbuttontype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_attributedtitle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setattributedtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attributedTitle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_alternatetitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setalternatetitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_hasdestructiveaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_sethasdestructiveaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_sound, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setsound, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sound, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_isspringloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setspringloaded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_maxacceleratorlevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setmaxacceleratorlevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setperiodicdelayinterval, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delay, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_getperiodicdelayinterval, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_bezelstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setbezelstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_isbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_istransparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_settransparent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_showsborderonlywhilemouseinside, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setshowsborderonlywhilemouseinside, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_bezelcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setbezelcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_contenttintcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setcontenttintcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_alternateimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setalternateimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_imageposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setimageposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_imagescaling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setimagescaling, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scaling, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_imagehugstitle, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setimagehugstitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_symbolconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setsymbolconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_allowsmixedstate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setallowsmixedstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setnextstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_highlight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_keyequivalent, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setkeyequivalent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyEquivalent, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_keyequivalentmodifiermask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_setkeyequivalentmodifiermask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_performkeyequivalent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_compresswithprioritizedcompressionoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, prioritizedOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_minimumsizewithprioritizedcompressionoptions, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, prioritizedOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsbutton_nsbutton_activecompressionoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsbutton_nsbutton_method_entry) {
	PHP_ME(AppKit_NS_NSButton_NSButton, buttonWithTitleImageTargetAction, arginfo_appkit_ns_nsbutton_nsbutton_buttonwithtitleimagetargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, buttonWithTitleTargetAction, arginfo_appkit_ns_nsbutton_nsbutton_buttonwithtitletargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, buttonWithImageTargetAction, arginfo_appkit_ns_nsbutton_nsbutton_buttonwithimagetargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, checkboxWithTitleTargetAction, arginfo_appkit_ns_nsbutton_nsbutton_checkboxwithtitletargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, radioButtonWithTitleTargetAction, arginfo_appkit_ns_nsbutton_nsbutton_radiobuttonwithtitletargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setButtonType, arginfo_appkit_ns_nsbutton_nsbutton_setbuttontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, attributedTitle, arginfo_appkit_ns_nsbutton_nsbutton_attributedtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setAttributedTitle, arginfo_appkit_ns_nsbutton_nsbutton_setattributedtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, title, arginfo_appkit_ns_nsbutton_nsbutton_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setTitle, arginfo_appkit_ns_nsbutton_nsbutton_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, alternateTitle, arginfo_appkit_ns_nsbutton_nsbutton_alternatetitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setAlternateTitle, arginfo_appkit_ns_nsbutton_nsbutton_setalternatetitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, hasDestructiveAction, arginfo_appkit_ns_nsbutton_nsbutton_hasdestructiveaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setHasDestructiveAction, arginfo_appkit_ns_nsbutton_nsbutton_sethasdestructiveaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, sound, arginfo_appkit_ns_nsbutton_nsbutton_sound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setSound, arginfo_appkit_ns_nsbutton_nsbutton_setsound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, isSpringLoaded, arginfo_appkit_ns_nsbutton_nsbutton_isspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setSpringLoaded, arginfo_appkit_ns_nsbutton_nsbutton_setspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, maxAcceleratorLevel, arginfo_appkit_ns_nsbutton_nsbutton_maxacceleratorlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setMaxAcceleratorLevel, arginfo_appkit_ns_nsbutton_nsbutton_setmaxacceleratorlevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setPeriodicDelayInterval, arginfo_appkit_ns_nsbutton_nsbutton_setperiodicdelayinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, getPeriodicDelayInterval, arginfo_appkit_ns_nsbutton_nsbutton_getperiodicdelayinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, bezelStyle, arginfo_appkit_ns_nsbutton_nsbutton_bezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setBezelStyle, arginfo_appkit_ns_nsbutton_nsbutton_setbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, isBordered, arginfo_appkit_ns_nsbutton_nsbutton_isbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setBordered, arginfo_appkit_ns_nsbutton_nsbutton_setbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, isTransparent, arginfo_appkit_ns_nsbutton_nsbutton_istransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setTransparent, arginfo_appkit_ns_nsbutton_nsbutton_settransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, showsBorderOnlyWhileMouseInside, arginfo_appkit_ns_nsbutton_nsbutton_showsborderonlywhilemouseinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setShowsBorderOnlyWhileMouseInside, arginfo_appkit_ns_nsbutton_nsbutton_setshowsborderonlywhilemouseinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, bezelColor, arginfo_appkit_ns_nsbutton_nsbutton_bezelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setBezelColor, arginfo_appkit_ns_nsbutton_nsbutton_setbezelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, contentTintColor, arginfo_appkit_ns_nsbutton_nsbutton_contenttintcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setContentTintColor, arginfo_appkit_ns_nsbutton_nsbutton_setcontenttintcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, image, arginfo_appkit_ns_nsbutton_nsbutton_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setImage, arginfo_appkit_ns_nsbutton_nsbutton_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, alternateImage, arginfo_appkit_ns_nsbutton_nsbutton_alternateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setAlternateImage, arginfo_appkit_ns_nsbutton_nsbutton_setalternateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, imagePosition, arginfo_appkit_ns_nsbutton_nsbutton_imageposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setImagePosition, arginfo_appkit_ns_nsbutton_nsbutton_setimageposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, imageScaling, arginfo_appkit_ns_nsbutton_nsbutton_imagescaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setImageScaling, arginfo_appkit_ns_nsbutton_nsbutton_setimagescaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, imageHugsTitle, arginfo_appkit_ns_nsbutton_nsbutton_imagehugstitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setImageHugsTitle, arginfo_appkit_ns_nsbutton_nsbutton_setimagehugstitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, symbolConfiguration, arginfo_appkit_ns_nsbutton_nsbutton_symbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setSymbolConfiguration, arginfo_appkit_ns_nsbutton_nsbutton_setsymbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, state, arginfo_appkit_ns_nsbutton_nsbutton_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setState, arginfo_appkit_ns_nsbutton_nsbutton_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, allowsMixedState, arginfo_appkit_ns_nsbutton_nsbutton_allowsmixedstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setAllowsMixedState, arginfo_appkit_ns_nsbutton_nsbutton_setallowsmixedstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setNextState, arginfo_appkit_ns_nsbutton_nsbutton_setnextstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, highlight, arginfo_appkit_ns_nsbutton_nsbutton_highlight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, keyEquivalent, arginfo_appkit_ns_nsbutton_nsbutton_keyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setKeyEquivalent, arginfo_appkit_ns_nsbutton_nsbutton_setkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, keyEquivalentModifierMask, arginfo_appkit_ns_nsbutton_nsbutton_keyequivalentmodifiermask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, setKeyEquivalentModifierMask, arginfo_appkit_ns_nsbutton_nsbutton_setkeyequivalentmodifiermask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, performKeyEquivalent, arginfo_appkit_ns_nsbutton_nsbutton_performkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, compressWithPrioritizedCompressionOptions, arginfo_appkit_ns_nsbutton_nsbutton_compresswithprioritizedcompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, minimumSizeWithPrioritizedCompressionOptions, arginfo_appkit_ns_nsbutton_nsbutton_minimumsizewithprioritizedcompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSButton_NSButton, activeCompressionOptions, arginfo_appkit_ns_nsbutton_nsbutton_activecompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
