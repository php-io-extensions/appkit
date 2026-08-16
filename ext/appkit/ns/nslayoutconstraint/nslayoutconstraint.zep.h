
extern zend_class_entry *appkit_ns_nslayoutconstraint_nslayoutconstraint_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint);

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, wrap);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, destroy);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, nsLayoutConstraint);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constraintWithItem);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, activateConstraints);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, deactivateConstraints);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setActive);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, isActive);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setPriority);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, priority);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setConstant);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constant);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setIdentifier);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, identifier);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAttribute);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAttribute);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, relation);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, multiplier);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAnchor);
PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAnchor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsLayoutConstraintPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_nslayoutconstraint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_constraintwithitem, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attr1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attr2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, multiplier, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_activateconstraints, 0, 1, IS_VOID, 0)

	ZEND_ARG_ARRAY_INFO(0, constraints, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_deactivateconstraints, 0, 1, IS_VOID, 0)

	ZEND_ARG_ARRAY_INFO(0, constraints, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setactive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, active, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setpriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_priority, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setconstant, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constant, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_constant, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_identifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_firstattribute, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_secondattribute, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_relation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_multiplier, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_firstanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_secondanchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, constraint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nslayoutconstraint_nslayoutconstraint_method_entry) {
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, wrap, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, destroy, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, nsLayoutConstraint, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_nslayoutconstraint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constraintWithItem, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_constraintwithitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, activateConstraints, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_activateconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, deactivateConstraints, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_deactivateconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setActive, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, isActive, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setPriority, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, priority, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_priority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setConstant, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constant, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_constant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setIdentifier, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, identifier, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAttribute, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_firstattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAttribute, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_secondattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, relation, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_relation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, multiplier, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_multiplier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAnchor, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_firstanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAnchor, arginfo_appkit_ns_nslayoutconstraint_nslayoutconstraint_secondanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
