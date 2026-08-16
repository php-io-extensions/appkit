
extern zend_class_entry *appkit_ns_nsprintinfo_nsprintinfo_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintInfo_NSPrintInfo);

PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, wrap);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, destroy);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, nsPrintInfo);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, create);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, shared);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setShared);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, defaultPrinter);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, paperName);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperName);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, paperSize);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperSize);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, orientation);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setOrientation);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, scalingFactor);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setScalingFactor);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, leftMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setLeftMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, rightMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setRightMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, topMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setTopMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, bottomMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setBottomMargin);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isHorizontallyCentered);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontallyCentered);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isVerticallyCentered);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticallyCentered);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, horizontalPagination);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontalPagination);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, verticalPagination);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticalPagination);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, jobDisposition);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setJobDisposition);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, printer);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setPrinter);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setUpPrintOperationDefaultValues);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, imageablePageBounds);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, localizedPaperName);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, isSelectionOnly);
PHP_METHOD(AppKit_NS_NSPrintInfo_NSPrintInfo, setSelectionOnly);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPrintInfoPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_nsprintinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setshared, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_defaultprinter, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_papername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setpapername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_papersize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setpapersize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_scalingfactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setscalingfactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_leftmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setleftmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_rightmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setrightmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_topmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_settopmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_bottommargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setbottommargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_ishorizontallycentered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_sethorizontallycentered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_isverticallycentered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setverticallycentered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_horizontalpagination, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_sethorizontalpagination, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_verticalpagination, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setverticalpagination, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_jobdisposition, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setjobdisposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, disposition, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_printer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setprinter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setupprintoperationdefaultvalues, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_imageablepagebounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_localizedpapername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_isselectiononly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintinfo_nsprintinfo_setselectiononly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprintinfo_nsprintinfo_method_entry) {
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, wrap, arginfo_appkit_ns_nsprintinfo_nsprintinfo_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, destroy, arginfo_appkit_ns_nsprintinfo_nsprintinfo_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, nsPrintInfo, arginfo_appkit_ns_nsprintinfo_nsprintinfo_nsprintinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, create, arginfo_appkit_ns_nsprintinfo_nsprintinfo_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, shared, arginfo_appkit_ns_nsprintinfo_nsprintinfo_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setShared, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setshared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, defaultPrinter, arginfo_appkit_ns_nsprintinfo_nsprintinfo_defaultprinter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, paperName, arginfo_appkit_ns_nsprintinfo_nsprintinfo_papername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperName, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setpapername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, paperSize, arginfo_appkit_ns_nsprintinfo_nsprintinfo_papersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setPaperSize, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setpapersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, orientation, arginfo_appkit_ns_nsprintinfo_nsprintinfo_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setOrientation, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, scalingFactor, arginfo_appkit_ns_nsprintinfo_nsprintinfo_scalingfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setScalingFactor, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setscalingfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, leftMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_leftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setLeftMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setleftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, rightMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_rightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setRightMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setrightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, topMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_topmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setTopMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_settopmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, bottomMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_bottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setBottomMargin, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setbottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, isHorizontallyCentered, arginfo_appkit_ns_nsprintinfo_nsprintinfo_ishorizontallycentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontallyCentered, arginfo_appkit_ns_nsprintinfo_nsprintinfo_sethorizontallycentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, isVerticallyCentered, arginfo_appkit_ns_nsprintinfo_nsprintinfo_isverticallycentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticallyCentered, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setverticallycentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, horizontalPagination, arginfo_appkit_ns_nsprintinfo_nsprintinfo_horizontalpagination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setHorizontalPagination, arginfo_appkit_ns_nsprintinfo_nsprintinfo_sethorizontalpagination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, verticalPagination, arginfo_appkit_ns_nsprintinfo_nsprintinfo_verticalpagination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setVerticalPagination, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setverticalpagination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, jobDisposition, arginfo_appkit_ns_nsprintinfo_nsprintinfo_jobdisposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setJobDisposition, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setjobdisposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, printer, arginfo_appkit_ns_nsprintinfo_nsprintinfo_printer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setPrinter, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setprinter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setUpPrintOperationDefaultValues, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setupprintoperationdefaultvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, imageablePageBounds, arginfo_appkit_ns_nsprintinfo_nsprintinfo_imageablepagebounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, localizedPaperName, arginfo_appkit_ns_nsprintinfo_nsprintinfo_localizedpapername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, isSelectionOnly, arginfo_appkit_ns_nsprintinfo_nsprintinfo_isselectiononly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintInfo_NSPrintInfo, setSelectionOnly, arginfo_appkit_ns_nsprintinfo_nsprintinfo_setselectiononly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
