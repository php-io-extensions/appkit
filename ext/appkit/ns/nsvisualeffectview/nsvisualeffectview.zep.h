
extern zend_class_entry *appkit_ns_nsvisualeffectview_nsvisualeffectview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSVisualEffectView_NSVisualEffectView);

PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, create);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, wrap);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, destroy);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, nsVisualEffectView);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setMaterial);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getMaterial);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setBlendingMode);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getBlendingMode);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setState);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getState);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setEmphasized);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, isEmphasized);
PHP_METHOD(AppKit_NS_NSVisualEffectView_NSVisualEffectView, interiorBackgroundStyle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsVisualEffectViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_nsvisualeffectview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setmaterial, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, material, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getmaterial, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setblendingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getblendingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setemphasized, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_isemphasized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_interiorbackgroundstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsvisualeffectview_nsvisualeffectview_method_entry) {
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, create, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, wrap, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, destroy, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, nsVisualEffectView, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_nsvisualeffectview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setMaterial, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setmaterial, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getMaterial, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getmaterial, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setBlendingMode, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setblendingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getBlendingMode, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getblendingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setState, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, getState, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, setEmphasized, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_setemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, isEmphasized, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_isemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSVisualEffectView_NSVisualEffectView, interiorBackgroundStyle, arginfo_appkit_ns_nsvisualeffectview_nsvisualeffectview_interiorbackgroundstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
