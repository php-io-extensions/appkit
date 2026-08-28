
extern zend_class_entry *appkit_ns_nsstackview_nsstackview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStackView_NSStackView);

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, initWithFrame);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, stackViewWithViews);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, delegate);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDelegate);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, orientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setOrientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, alignment);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setAlignment);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, edgeInsets);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setEdgeInsets);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, distribution);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDistribution);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, spacing);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setSpacing);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setCustomSpacingAfterView);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, customSpacingAfterView);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, detachesHiddenViews);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setDetachesHiddenViews);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, arrangedSubviews);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addArrangedSubview);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, insertArrangedSubviewAtIndex);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, removeArrangedSubview);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, detachedViews);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setVisibilityPriorityForView);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, visibilityPriorityForView);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, clippingResistancePriorityForOrientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setClippingResistancePriorityForOrientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, huggingPriorityForOrientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setHuggingPriorityForOrientation);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addViewInGravity);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, insertViewAtIndexInGravity);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, removeView);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, viewsInGravity);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setViewsInGravity);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, views);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_stackviewwithviews, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_edgeinsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setedgeinsets, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_distribution, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setdistribution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, distribution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_spacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setcustomspacingafterview, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_customspacingafterview, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_detacheshiddenviews, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setdetacheshiddenviews, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, detachesHiddenViews, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_arrangedsubviews, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_addarrangedsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_insertarrangedsubviewatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_removearrangedsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_detachedviews, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setvisibilitypriorityforview, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_visibilitypriorityforview, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_clippingresistancepriorityfororientation, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setclippingresistancepriorityfororientation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clippingResistancePriority, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_huggingpriorityfororientation, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_sethuggingpriorityfororientation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, huggingPriority, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_addviewingravity, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gravity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_insertviewatindexingravity, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gravity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_removeview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_viewsingravity, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gravity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setviewsingravity, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, views, 0)
	ZEND_ARG_TYPE_INFO(0, gravity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_views, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstackview_nsstackview_method_entry) {
	PHP_ME(AppKit_NS_NSStackView_NSStackView, initWithFrame, arginfo_appkit_ns_nsstackview_nsstackview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, stackViewWithViews, arginfo_appkit_ns_nsstackview_nsstackview_stackviewwithviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, delegate, arginfo_appkit_ns_nsstackview_nsstackview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setDelegate, arginfo_appkit_ns_nsstackview_nsstackview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, orientation, arginfo_appkit_ns_nsstackview_nsstackview_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setOrientation, arginfo_appkit_ns_nsstackview_nsstackview_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, alignment, arginfo_appkit_ns_nsstackview_nsstackview_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setAlignment, arginfo_appkit_ns_nsstackview_nsstackview_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, edgeInsets, arginfo_appkit_ns_nsstackview_nsstackview_edgeinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setEdgeInsets, arginfo_appkit_ns_nsstackview_nsstackview_setedgeinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, distribution, arginfo_appkit_ns_nsstackview_nsstackview_distribution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setDistribution, arginfo_appkit_ns_nsstackview_nsstackview_setdistribution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, spacing, arginfo_appkit_ns_nsstackview_nsstackview_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setSpacing, arginfo_appkit_ns_nsstackview_nsstackview_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setCustomSpacingAfterView, arginfo_appkit_ns_nsstackview_nsstackview_setcustomspacingafterview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, customSpacingAfterView, arginfo_appkit_ns_nsstackview_nsstackview_customspacingafterview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, detachesHiddenViews, arginfo_appkit_ns_nsstackview_nsstackview_detacheshiddenviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setDetachesHiddenViews, arginfo_appkit_ns_nsstackview_nsstackview_setdetacheshiddenviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, arrangedSubviews, arginfo_appkit_ns_nsstackview_nsstackview_arrangedsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, addArrangedSubview, arginfo_appkit_ns_nsstackview_nsstackview_addarrangedsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, insertArrangedSubviewAtIndex, arginfo_appkit_ns_nsstackview_nsstackview_insertarrangedsubviewatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, removeArrangedSubview, arginfo_appkit_ns_nsstackview_nsstackview_removearrangedsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, detachedViews, arginfo_appkit_ns_nsstackview_nsstackview_detachedviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setVisibilityPriorityForView, arginfo_appkit_ns_nsstackview_nsstackview_setvisibilitypriorityforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, visibilityPriorityForView, arginfo_appkit_ns_nsstackview_nsstackview_visibilitypriorityforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, clippingResistancePriorityForOrientation, arginfo_appkit_ns_nsstackview_nsstackview_clippingresistancepriorityfororientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setClippingResistancePriorityForOrientation, arginfo_appkit_ns_nsstackview_nsstackview_setclippingresistancepriorityfororientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, huggingPriorityForOrientation, arginfo_appkit_ns_nsstackview_nsstackview_huggingpriorityfororientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setHuggingPriorityForOrientation, arginfo_appkit_ns_nsstackview_nsstackview_sethuggingpriorityfororientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, addViewInGravity, arginfo_appkit_ns_nsstackview_nsstackview_addviewingravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, insertViewAtIndexInGravity, arginfo_appkit_ns_nsstackview_nsstackview_insertviewatindexingravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, removeView, arginfo_appkit_ns_nsstackview_nsstackview_removeview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, viewsInGravity, arginfo_appkit_ns_nsstackview_nsstackview_viewsingravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setViewsInGravity, arginfo_appkit_ns_nsstackview_nsstackview_setviewsingravity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, views, arginfo_appkit_ns_nsstackview_nsstackview_views, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
