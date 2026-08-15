
extern zend_class_entry *appkit_ns_nstextcontainer_nstextcontainer_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContainer_NSTextContainer);

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, create);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, wrap);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, destroy);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, nsTextContainer);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getLineBreakMode);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getLineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, getMaximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextContainerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_nstextcontainer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_getsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinebreakmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_getlinebreakmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinefragmentpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_getlinefragmentpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setmaximumnumberoflines, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lines, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_getmaximumnumberoflines, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setwidthtrackstextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_widthtrackstextview, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setheighttrackstextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_heighttrackstextview, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_issimplerectangulartextcontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_replacelayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, container, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutManager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextcontainer_nstextcontainer_method_entry) {
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, create, arginfo_appkit_ns_nstextcontainer_nstextcontainer_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, wrap, arginfo_appkit_ns_nstextcontainer_nstextcontainer_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, destroy, arginfo_appkit_ns_nstextcontainer_nstextcontainer_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, nsTextContainer, arginfo_appkit_ns_nstextcontainer_nstextcontainer_nstextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, getSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_getsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, getLineBreakMode, arginfo_appkit_ns_nstextcontainer_nstextcontainer_getlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, getLineFragmentPadding, arginfo_appkit_ns_nstextcontainer_nstextcontainer_getlinefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setmaximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, getMaximumNumberOfLines, arginfo_appkit_ns_nstextcontainer_nstextcontainer_getmaximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setwidthtrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_widthtrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setheighttrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_heighttrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer, arginfo_appkit_ns_nstextcontainer_nstextcontainer_issimplerectangulartextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager, arginfo_appkit_ns_nstextcontainer_nstextcontainer_replacelayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
