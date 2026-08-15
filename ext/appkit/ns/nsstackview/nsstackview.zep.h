
extern zend_class_entry *appkit_ns_nsstackview_nsstackview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStackView_NSStackView);

PHP_METHOD(AppKit_NS_NSStackView_NSStackView, create);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, destroy);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, setSpacing);
PHP_METHOD(AppKit_NS_NSStackView_NSStackView, addArrangedSubview);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsstackview_nsstackview_addarrangedsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsstackview_nsstackview_method_entry) {
	PHP_ME(AppKit_NS_NSStackView_NSStackView, create, arginfo_appkit_ns_nsstackview_nsstackview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, destroy, arginfo_appkit_ns_nsstackview_nsstackview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, setSpacing, arginfo_appkit_ns_nsstackview_nsstackview_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStackView_NSStackView, addArrangedSubview, arginfo_appkit_ns_nsstackview_nsstackview_addarrangedsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
