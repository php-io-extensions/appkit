
extern zend_class_entry *appkit_ns_nssegmentedcell_nssegmentedcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedCell_NSSegmentedCell);

PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initTextCell);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initImageCell);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makeNextSegmentKey);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makePreviousSegmentKey);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, trackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageScalingForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageScalingForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setMenuForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, menuForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setToolTipForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, toolTipForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, drawSegmentInFrameWithView);
PHP_METHOD(AppKit_NS_NSSegmentedCell_NSSegmentedCell, interiorBackgroundStyleForSegment);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_initimagecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_segmentcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segmentCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectedsegment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedsegment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectedSegment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectsegmentwithtag, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_makenextsegmentkey, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_makeprevioussegmentkey, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_trackingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settrackingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setwidthforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_widthforsegment, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setimageforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_imageforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setimagescalingforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scaling, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_imagescalingforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setlabelforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_labelforsegment, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isselectedforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabledforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabledforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setmenuforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_menuforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settooltipforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tooltipforsegment, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settagforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tagforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_segmentstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segmentStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_drawsegmentinframewithview, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, controlView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_interiorbackgroundstyleforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssegmentedcell_nssegmentedcell_method_entry) {
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initTextCell, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, initImageCell, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_initimagecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentCount, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_segmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentCount, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectedSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, selectSegmentWithTag, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_selectsegmentwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makeNextSegmentKey, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_makenextsegmentkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, makePreviousSegmentKey, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_makeprevioussegmentkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, trackingMode, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_trackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTrackingMode, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settrackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setWidthForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setwidthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, widthForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_widthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setimageforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_imageforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setImageScalingForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setimagescalingforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, imageScalingForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_imagescalingforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setLabelForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setlabelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, labelForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_labelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSelectedForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isSelectedForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setEnabledForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, isEnabledForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_isenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setMenuForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setmenuforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, menuForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_menuforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setToolTipForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settooltipforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, toolTipForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tooltipforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setTagForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_settagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, tagForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_tagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, segmentStyle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_segmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, setSegmentStyle, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_setsegmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, drawSegmentInFrameWithView, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_drawsegmentinframewithview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedCell_NSSegmentedCell, interiorBackgroundStyleForSegment, arginfo_appkit_ns_nssegmentedcell_nssegmentedcell_interiorbackgroundstyleforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
