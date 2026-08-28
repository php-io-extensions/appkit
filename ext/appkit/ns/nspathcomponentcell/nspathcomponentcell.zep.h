
extern zend_class_entry *appkit_ns_nspathcomponentcell_nspathcomponentcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathComponentCell_NSPathComponentCell);

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, initTextCell);
PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, image);
PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setImage);
PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, Url);
PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setURL);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_image, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, Url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcomponentcell_nspathcomponentcell_method_entry) {
	PHP_ME(AppKit_NS_NSPathComponentCell_NSPathComponentCell, initTextCell, arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathComponentCell_NSPathComponentCell, image, arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_image, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setImage, arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathComponentCell_NSPathComponentCell, Url, arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setURL, arginfo_appkit_ns_nspathcomponentcell_nspathcomponentcell_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
