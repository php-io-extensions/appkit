
extern zend_class_entry *appkit_ns_nsprintoperation_nsprintoperation_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPrintOperation_NSPrintOperation);

PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, wrap);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, destroy);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, nsPrintOperation);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithView);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithViewPrintInfo);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pdfOperationWithViewRectPath);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, epsOperationWithViewRectPath);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, currentOperation);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setCurrentOperation);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, isCopyingOperation);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, preferredRenderingQuality);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, jobTitle);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setJobTitle);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, showsPrintPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsPrintPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, showsProgressPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsProgressPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintPanel);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pageOrder);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPageOrder);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperation);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperationModalForWindow);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, view);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, printInfo);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintInfo);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, pageRange);
PHP_METHOD(AppKit_NS_NSPrintOperation_NSPrintOperation, currentPage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsPrintOperationPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_nsprintoperation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_printoperationwithview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_printoperationwithviewprintinfo, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_pdfoperationwithviewrectpath, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_epsoperationwithviewrectpath, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_currentoperation, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setcurrentoperation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_iscopyingoperation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_preferredrenderingquality, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_jobtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setjobtitle, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_showsprintpanel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setshowsprintpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_showsprogresspanel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setshowsprogresspanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shows, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_printpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setprintpanel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, panel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_pageorder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setpageorder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageOrder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_runoperation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_runoperationmodalforwindow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_printinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_setprintinfo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_pagerange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsprintoperation_nsprintoperation_currentpage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsprintoperation_nsprintoperation_method_entry) {
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, wrap, arginfo_appkit_ns_nsprintoperation_nsprintoperation_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, destroy, arginfo_appkit_ns_nsprintoperation_nsprintoperation_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, nsPrintOperation, arginfo_appkit_ns_nsprintoperation_nsprintoperation_nsprintoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithView, arginfo_appkit_ns_nsprintoperation_nsprintoperation_printoperationwithview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, printOperationWithViewPrintInfo, arginfo_appkit_ns_nsprintoperation_nsprintoperation_printoperationwithviewprintinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, pdfOperationWithViewRectPath, arginfo_appkit_ns_nsprintoperation_nsprintoperation_pdfoperationwithviewrectpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, epsOperationWithViewRectPath, arginfo_appkit_ns_nsprintoperation_nsprintoperation_epsoperationwithviewrectpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, currentOperation, arginfo_appkit_ns_nsprintoperation_nsprintoperation_currentoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setCurrentOperation, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setcurrentoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, isCopyingOperation, arginfo_appkit_ns_nsprintoperation_nsprintoperation_iscopyingoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, preferredRenderingQuality, arginfo_appkit_ns_nsprintoperation_nsprintoperation_preferredrenderingquality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, jobTitle, arginfo_appkit_ns_nsprintoperation_nsprintoperation_jobtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setJobTitle, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setjobtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, showsPrintPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_showsprintpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsPrintPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setshowsprintpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, showsProgressPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_showsprogresspanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setShowsProgressPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setshowsprogresspanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, printPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_printpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintPanel, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setprintpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, pageOrder, arginfo_appkit_ns_nsprintoperation_nsprintoperation_pageorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setPageOrder, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setpageorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperation, arginfo_appkit_ns_nsprintoperation_nsprintoperation_runoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, runOperationModalForWindow, arginfo_appkit_ns_nsprintoperation_nsprintoperation_runoperationmodalforwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, view, arginfo_appkit_ns_nsprintoperation_nsprintoperation_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, printInfo, arginfo_appkit_ns_nsprintoperation_nsprintoperation_printinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, setPrintInfo, arginfo_appkit_ns_nsprintoperation_nsprintoperation_setprintinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, pageRange, arginfo_appkit_ns_nsprintoperation_nsprintoperation_pagerange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPrintOperation_NSPrintOperation, currentPage, arginfo_appkit_ns_nsprintoperation_nsprintoperation_currentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
