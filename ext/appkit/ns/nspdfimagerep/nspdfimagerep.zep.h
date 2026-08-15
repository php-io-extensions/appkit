
extern zend_class_entry *appkit_ns_nspdfimagerep_nspdfimagerep_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPDFImageRep_NSPDFImageRep);

PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, wrap);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, destroy);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, nsPDFImageRep);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, withData);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, getBounds);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pdfRepresentation);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, currentPage);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, setCurrentPage);
PHP_METHOD(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pageCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPDFImageRepPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_nspdfimagerep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_withdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_getbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_pdfrepresentation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_currentpage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_setcurrentpage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_pagecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspdfimagerep_nspdfimagerep_method_entry) {
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, wrap, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, destroy, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, nsPDFImageRep, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_nspdfimagerep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, withData, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_withdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, getBounds, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_getbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pdfRepresentation, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_pdfrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, currentPage, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_currentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, setCurrentPage, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_setcurrentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPDFImageRep_NSPDFImageRep, pageCount, arginfo_appkit_ns_nspdfimagerep_nspdfimagerep_pagecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
