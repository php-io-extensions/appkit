
extern zend_class_entry *appkit_ns_nslayoutanchor_nslayoutanchor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor);

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, wrap);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, destroy);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, nsLayoutAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintGreaterThanOrEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintLessThanOrEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, name);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, item);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, hasAmbiguousLayout);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintsAffectingLayoutCount);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintAffectingLayoutAt);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeadingAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTrailingAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeftAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewRightAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTopAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewBottomAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewWidthAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewHeightAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterXAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterYAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewFirstBaselineAnchor);
PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLastBaselineAnchor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsLayoutAnchorPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_nslayoutanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintequaltoanchor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, hasConstant, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintgreaterthanorequaltoanchor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, hasConstant, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintlessthanorequaltoanchor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, hasConstant, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_item, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_hasambiguouslayout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintsaffectinglayoutcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintaffectinglayoutat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewleadinganchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewtrailinganchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewleftanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewrightanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewtopanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewbottomanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewwidthanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewheightanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewcenterxanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewcenteryanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewfirstbaselineanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewlastbaselineanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutanchor_nslayoutanchor_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, wrap, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, destroy, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, nsLayoutAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_nslayoutanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintEqualToAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintGreaterThanOrEqualToAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintgreaterthanorequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintLessThanOrEqualToAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintlessthanorequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, name, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, item, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, hasAmbiguousLayout, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_hasambiguouslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintsAffectingLayoutCount, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintsaffectinglayoutcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintAffectingLayoutAt, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_constraintaffectinglayoutat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeadingAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewleadinganchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTrailingAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewtrailinganchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeftAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewleftanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewRightAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewrightanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTopAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewtopanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewBottomAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewbottomanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewWidthAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewwidthanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewHeightAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewheightanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterXAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewcenterxanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterYAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewcenteryanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewFirstBaselineAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewfirstbaselineanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLastBaselineAnchor, arginfo_appkit_ns_nslayoutanchor_nslayoutanchor_viewlastbaselineanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
