
extern zend_class_entry *appkit_ns_nslayoutguide_nslayoutguide_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutGuide_NSLayoutGuide);

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, create);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, wrap);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, destroy);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, nsLayoutGuide);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, getFrame);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, setIdentifier);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, identifier);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, owningView);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, addToView);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, removeFromView);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leadingAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, trailingAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leftAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, rightAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, topAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, bottomAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, widthAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, heightAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerXAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerYAnchor);
PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, hasAmbiguousLayout);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsLayoutGuidePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_nslayoutguide, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_getframe, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_identifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_owningview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_addtoview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_removefromview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_leadinganchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_trailinganchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_leftanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_rightanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_topanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_bottomanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_widthanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_heightanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_centerxanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_centeryanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutguide_nslayoutguide_hasambiguouslayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, guide, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutguide_nslayoutguide_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, create, arginfo_appkit_ns_nslayoutguide_nslayoutguide_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, wrap, arginfo_appkit_ns_nslayoutguide_nslayoutguide_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, destroy, arginfo_appkit_ns_nslayoutguide_nslayoutguide_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, nsLayoutGuide, arginfo_appkit_ns_nslayoutguide_nslayoutguide_nslayoutguide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, getFrame, arginfo_appkit_ns_nslayoutguide_nslayoutguide_getframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, setIdentifier, arginfo_appkit_ns_nslayoutguide_nslayoutguide_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, identifier, arginfo_appkit_ns_nslayoutguide_nslayoutguide_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, owningView, arginfo_appkit_ns_nslayoutguide_nslayoutguide_owningview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, addToView, arginfo_appkit_ns_nslayoutguide_nslayoutguide_addtoview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, removeFromView, arginfo_appkit_ns_nslayoutguide_nslayoutguide_removefromview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leadingAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_leadinganchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, trailingAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_trailinganchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leftAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_leftanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, rightAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_rightanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, topAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_topanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, bottomAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_bottomanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, widthAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_widthanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, heightAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_heightanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerXAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_centerxanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerYAnchor, arginfo_appkit_ns_nslayoutguide_nslayoutguide_centeryanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutGuide_NSLayoutGuide, hasAmbiguousLayout, arginfo_appkit_ns_nslayoutguide_nslayoutguide_hasambiguouslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
