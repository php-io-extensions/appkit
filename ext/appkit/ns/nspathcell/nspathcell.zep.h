
extern zend_class_entry *appkit_ns_nspathcell_nspathcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathCell_NSPathCell);

PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, initTextCell);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, initImageCell);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathStyle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPathStyle);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, Url);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setURL);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setObjectValue);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, allowedTypes);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setAllowedTypes);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, delegate);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setDelegate);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathComponentCells);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPathComponentCells);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, rectOfPathComponentCellWithFrameInView);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, pathComponentCellAtPointWithFrameInView);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, clickedPathComponentCell);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, mouseEnteredWithFrameInView);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, mouseExitedWithFrameInView);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, doubleAction);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setDoubleAction);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, backgroundColor);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, placeholderString);
PHP_METHOD(AppKit_NS_NSPathCell_NSPathCell, setPlaceholderString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_initimagecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_pathstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setpathstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pathStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, Url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_allowedtypes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setallowedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, allowedTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcells, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setpathcomponentcells, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, pathComponentCells, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_rectofpathcomponentcellwithframeinview, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcellatpointwithframeinview, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locationX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, locationY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_clickedpathcomponentcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_mouseenteredwithframeinview, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_mouseexitedwithframeinview, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_doubleaction, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setdoubleaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, doubleAction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_placeholderstring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcell_nspathcell_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, placeholderString)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcell_nspathcell_method_entry) {
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, initTextCell, arginfo_appkit_ns_nspathcell_nspathcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, initImageCell, arginfo_appkit_ns_nspathcell_nspathcell_initimagecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, pathStyle, arginfo_appkit_ns_nspathcell_nspathcell_pathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setPathStyle, arginfo_appkit_ns_nspathcell_nspathcell_setpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, Url, arginfo_appkit_ns_nspathcell_nspathcell_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setURL, arginfo_appkit_ns_nspathcell_nspathcell_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setObjectValue, arginfo_appkit_ns_nspathcell_nspathcell_setobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, allowedTypes, arginfo_appkit_ns_nspathcell_nspathcell_allowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setAllowedTypes, arginfo_appkit_ns_nspathcell_nspathcell_setallowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, delegate, arginfo_appkit_ns_nspathcell_nspathcell_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setDelegate, arginfo_appkit_ns_nspathcell_nspathcell_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, pathComponentCells, arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setPathComponentCells, arginfo_appkit_ns_nspathcell_nspathcell_setpathcomponentcells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, rectOfPathComponentCellWithFrameInView, arginfo_appkit_ns_nspathcell_nspathcell_rectofpathcomponentcellwithframeinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, pathComponentCellAtPointWithFrameInView, arginfo_appkit_ns_nspathcell_nspathcell_pathcomponentcellatpointwithframeinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, clickedPathComponentCell, arginfo_appkit_ns_nspathcell_nspathcell_clickedpathcomponentcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, mouseEnteredWithFrameInView, arginfo_appkit_ns_nspathcell_nspathcell_mouseenteredwithframeinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, mouseExitedWithFrameInView, arginfo_appkit_ns_nspathcell_nspathcell_mouseexitedwithframeinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, doubleAction, arginfo_appkit_ns_nspathcell_nspathcell_doubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setDoubleAction, arginfo_appkit_ns_nspathcell_nspathcell_setdoubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, backgroundColor, arginfo_appkit_ns_nspathcell_nspathcell_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setBackgroundColor, arginfo_appkit_ns_nspathcell_nspathcell_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, placeholderString, arginfo_appkit_ns_nspathcell_nspathcell_placeholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathCell_NSPathCell, setPlaceholderString, arginfo_appkit_ns_nspathcell_nspathcell_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
