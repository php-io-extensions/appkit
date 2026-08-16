
extern zend_class_entry *appkit_ns_nslayoutdimension_nslayoutdimension_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutDimension_NSLayoutDimension);

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToConstant);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToConstant);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToConstant);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchor);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchorConstant);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchorConstant);
PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchorConstant);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoconstant, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoconstant, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoconstant, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoanchor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoanchor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoanchor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoanchorconstant, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoanchorconstant, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoanchorconstant, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutdimension_nslayoutdimension_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchor, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchor, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchor, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchorConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintequaltoanchorconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchorConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintgreaterthanorequaltoanchorconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchorConstant, arginfo_appkit_ns_nslayoutdimension_nslayoutdimension_constraintlessthanorequaltoanchorconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
