
extern zend_class_entry *appkit_ns_nsnib_nsnib_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSNib_NSNib);

PHP_METHOD(AppKit_NS_NSNib_NSNib, createNamed);
PHP_METHOD(AppKit_NS_NSNib_NSNib, wrap);
PHP_METHOD(AppKit_NS_NSNib_NSNib, destroy);
PHP_METHOD(AppKit_NS_NSNib_NSNib, nsNib);
PHP_METHOD(AppKit_NS_NSNib_NSNib, instantiateWithOwner);
PHP_METHOD(AppKit_NS_NSNib_NSNib, instantiateWithOwnerTopLevelCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_createnamed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nibName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bundlePath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsNibPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_nsnib, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_instantiatewithowner, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ownerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsnib_nsnib_instantiatewithownertoplevelcount, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nib, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ownerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsnib_nsnib_method_entry) {
	PHP_ME(AppKit_NS_NSNib_NSNib, createNamed, arginfo_appkit_ns_nsnib_nsnib_createnamed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNib_NSNib, wrap, arginfo_appkit_ns_nsnib_nsnib_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNib_NSNib, destroy, arginfo_appkit_ns_nsnib_nsnib_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNib_NSNib, nsNib, arginfo_appkit_ns_nsnib_nsnib_nsnib, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNib_NSNib, instantiateWithOwner, arginfo_appkit_ns_nsnib_nsnib_instantiatewithowner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSNib_NSNib, instantiateWithOwnerTopLevelCount, arginfo_appkit_ns_nsnib_nsnib_instantiatewithownertoplevelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
