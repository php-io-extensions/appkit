
extern zend_class_entry *appkit_ns_nspredicateeditor_nspredicateeditor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPredicateEditor_NSPredicateEditor);

PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, create);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, destroy);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setEditable);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, isEditable);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, numberOfRows);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, addRow);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, removeRowAt);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setNestingMode);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, getNestingMode);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setCanRemoveAllRows);
PHP_METHOD(AppKit_NS_NSPredicateEditor_NSPredicateEditor, canRemoveAllRows);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_numberofrows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_addrow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_removerowat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_setnestingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_getnestingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_setcanremoveallrows, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_canremoveallrows, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspredicateeditor_nspredicateeditor_method_entry) {
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, create, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, destroy, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setEditable, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, isEditable, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, numberOfRows, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_numberofrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, addRow, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, removeRowAt, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_removerowat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setNestingMode, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_setnestingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, getNestingMode, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_getnestingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, setCanRemoveAllRows, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_setcanremoveallrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPredicateEditor_NSPredicateEditor, canRemoveAllRows, arginfo_appkit_ns_nspredicateeditor_nspredicateeditor_canremoveallrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
