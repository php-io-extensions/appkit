
extern zend_class_entry *appkit_ns_nsruleeditor_nsruleeditor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSRuleEditor_NSRuleEditor);

PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, create);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, destroy);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, setEditable);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, isEditable);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, numberOfRows);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, addRow);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, removeRowAt);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, setNestingMode);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, getNestingMode);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, setCanRemoveAllRows);
PHP_METHOD(AppKit_NS_NSRuleEditor_NSRuleEditor, canRemoveAllRows);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_addrow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_removerowat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_setnestingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_getnestingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_setcanremoveallrows, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsruleeditor_nsruleeditor_canremoveallrows, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsruleeditor_nsruleeditor_method_entry) {
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, create, arginfo_appkit_ns_nsruleeditor_nsruleeditor_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, destroy, arginfo_appkit_ns_nsruleeditor_nsruleeditor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, setEditable, arginfo_appkit_ns_nsruleeditor_nsruleeditor_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, isEditable, arginfo_appkit_ns_nsruleeditor_nsruleeditor_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, numberOfRows, arginfo_appkit_ns_nsruleeditor_nsruleeditor_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, addRow, arginfo_appkit_ns_nsruleeditor_nsruleeditor_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, removeRowAt, arginfo_appkit_ns_nsruleeditor_nsruleeditor_removerowat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, setNestingMode, arginfo_appkit_ns_nsruleeditor_nsruleeditor_setnestingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, getNestingMode, arginfo_appkit_ns_nsruleeditor_nsruleeditor_getnestingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, setCanRemoveAllRows, arginfo_appkit_ns_nsruleeditor_nsruleeditor_setcanremoveallrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRuleEditor_NSRuleEditor, canRemoveAllRows, arginfo_appkit_ns_nsruleeditor_nsruleeditor_canremoveallrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
