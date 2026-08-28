
extern zend_class_entry *appkit_ns_nssegmentedcontrol_nssegmentedcontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSegmentedControl_NSSegmentedControl);

PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, initWithFrame);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentCount);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectSegmentWithTag);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setWidthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, widthForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageScalingForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageScalingForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, labelForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setMenuForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, menuForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSelectedForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isEnabledForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setToolTipForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, toolTipForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTagForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, tagForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setShowsMenuIndicatorForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, showsMenuIndicatorForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentStyle);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSpringLoaded);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSpringLoaded);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, trackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTrackingMode);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, doubleValueForSelectedSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegmentBezelColor);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegmentBezelColor);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, indexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setAlignmentForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, alignmentForSegment);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentDistribution);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentDistribution);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, compressWithPrioritizedCompressionOptions);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, minimumSizeWithPrioritizedCompressionOptions);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, activeCompressionOptions);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithLabelsTrackingModeTargetAction);
PHP_METHOD(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithImagesTrackingModeTargetAction);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segmentCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectedsegment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedsegment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectedSegment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectsegmentwithtag, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setwidthforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_widthforsegment, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setimageforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_imageforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setimagescalingforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scaling, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_imagescalingforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setlabelforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_labelforsegment, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setmenuforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_menuforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isselectedforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setenabledforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isenabledforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settooltipforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, toolTip)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_tooltipforsegment, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settagforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_tagforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setshowsmenuindicatorforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsMenuIndicator, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_showsmenuindicatorforsegment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segmentStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isspringloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setspringloaded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, springLoaded, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_trackingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settrackingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_doublevalueforselectedsegment, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectedsegmentbezelcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedsegmentbezelcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectedSegmentBezelColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_indexofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setalignmentforsegment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_alignmentforsegment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentdistribution, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentdistribution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, segmentDistribution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_compresswithprioritizedcompressionoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, prioritizedOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_minimumsizewithprioritizedcompressionoptions, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, prioritizedOptions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_activecompressionoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentedcontrolwithlabelstrackingmodetargetaction, 0, 4, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
	ZEND_ARG_TYPE_INFO(0, trackingMode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentedcontrolwithimagestrackingmodetargetaction, 0, 4, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, images, 0)
	ZEND_ARG_TYPE_INFO(0, trackingMode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssegmentedcontrol_nssegmentedcontrol_method_entry) {
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, initWithFrame, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentCount, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentCount, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectSegmentWithTag, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectsegmentwithtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setWidthForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setwidthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, widthForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_widthforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setimageforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_imageforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setImageScalingForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setimagescalingforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, imageScalingForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_imagescalingforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setLabelForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setlabelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, labelForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_labelforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setMenuForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setmenuforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, menuForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_menuforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSelectedForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isselectedforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setEnabledForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isEnabledForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isenabledforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setToolTipForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settooltipforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, toolTipForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_tooltipforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTagForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, tagForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_tagforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setShowsMenuIndicatorForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setshowsmenuindicatorforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, showsMenuIndicatorForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_showsmenuindicatorforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentStyle, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentStyle, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, isSpringLoaded, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_isspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSpringLoaded, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setspringloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, trackingMode, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_trackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setTrackingMode, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_settrackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, doubleValueForSelectedSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_doublevalueforselectedsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, selectedSegmentBezelColor, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_selectedsegmentbezelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSelectedSegmentBezelColor, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setselectedsegmentbezelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, indexOfSelectedItem, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_indexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setAlignmentForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setalignmentforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, alignmentForSegment, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_alignmentforsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentDistribution, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentdistribution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, setSegmentDistribution, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_setsegmentdistribution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, compressWithPrioritizedCompressionOptions, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_compresswithprioritizedcompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, minimumSizeWithPrioritizedCompressionOptions, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_minimumsizewithprioritizedcompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, activeCompressionOptions, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_activecompressionoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithLabelsTrackingModeTargetAction, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentedcontrolwithlabelstrackingmodetargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSegmentedControl_NSSegmentedControl, segmentedControlWithImagesTrackingModeTargetAction, arginfo_appkit_ns_nssegmentedcontrol_nssegmentedcontrol_segmentedcontrolwithimagestrackingmodetargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
