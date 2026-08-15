
extern zend_class_entry *appkit_ns_nssegmentedcell_nssegmentedcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedCell_NSSegmentedCell);

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, createText);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, wrap);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, destroy);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, nsSegmentedCell);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTitle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTitle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setState);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getState);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabled);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabled);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTag);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTag);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSelectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTrackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsSegmentedCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_nssegmentedcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getsegmentcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedsegment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getselectedsegment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectsegmentwithtag, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settrackingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettrackingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getsegmentstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setwidthforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_widthforsegment, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setlabelforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_labelforsegment, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isselectedforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabledforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabledforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settagforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tagforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssegmentedcell_nssegmentedcell_method_entry) {
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, createText, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, wrap, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, destroy, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, nsSegmentedCell, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_nssegmentedcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTitle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTitle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setState, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getState, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabled, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabled, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTag, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTag, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentCount, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getsegmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSelectedSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getselectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectsegmentwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settrackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getTrackingMode, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_gettrackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, getSegmentStyle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_getsegmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setwidthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_widthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setlabelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_labelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
