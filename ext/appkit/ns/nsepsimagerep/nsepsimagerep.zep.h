
extern zend_class_entry *appkit_ns_nsepsimagerep_nsepsimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSEPSImageRep_NSEPSImageRep);

PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, wrap);
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, destroy);
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, nsEPSImageRep);
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, withData);
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, getBoundingBox);
PHP_METHOD(AppKit_NS_NSEPSImageRep_NSEPSImageRep, epsRepresentation);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsEPSImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_nsepsimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_withdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_getboundingbox, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_epsrepresentation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsepsimagerep_nsepsimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, wrap, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, destroy, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, nsEPSImageRep, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_nsepsimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, withData, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_withdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, getBoundingBox, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_getboundingbox, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEPSImageRep_NSEPSImageRep, epsRepresentation, arginfo_appkit_ns_nsepsimagerep_nsepsimagerep_epsrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
