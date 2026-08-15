
extern zend_class_entry *appkit_ns_nstextstorage_nstextstorage_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextStorage_NSTextStorage);

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, create);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, wrap);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, destroy);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, nsTextStorage);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setString);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, getString);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagersCount);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedMask);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, getEditedRange);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, beginEditing);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, endEditing);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, processEditing);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setFixesAttributesLazily);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_create, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextStoragePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_nstextstorage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_setstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_getstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_addlayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_removelayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_layoutmanagerscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_editedmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_geteditedrange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_changeinlength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_beginediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_endediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_processediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_setfixesattributeslazily, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_fixesattributeslazily, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, storage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextstorage_nstextstorage_method_entry) {
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, create, arginfo_appkit_ns_nstextstorage_nstextstorage_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, wrap, arginfo_appkit_ns_nstextstorage_nstextstorage_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, destroy, arginfo_appkit_ns_nstextstorage_nstextstorage_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, nsTextStorage, arginfo_appkit_ns_nstextstorage_nstextstorage_nstextstorage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, setString, arginfo_appkit_ns_nstextstorage_nstextstorage_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, getString, arginfo_appkit_ns_nstextstorage_nstextstorage_getstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager, arginfo_appkit_ns_nstextstorage_nstextstorage_addlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager, arginfo_appkit_ns_nstextstorage_nstextstorage_removelayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagersCount, arginfo_appkit_ns_nstextstorage_nstextstorage_layoutmanagerscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, editedMask, arginfo_appkit_ns_nstextstorage_nstextstorage_editedmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, getEditedRange, arginfo_appkit_ns_nstextstorage_nstextstorage_geteditedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength, arginfo_appkit_ns_nstextstorage_nstextstorage_changeinlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, beginEditing, arginfo_appkit_ns_nstextstorage_nstextstorage_beginediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, endEditing, arginfo_appkit_ns_nstextstorage_nstextstorage_endediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, processEditing, arginfo_appkit_ns_nstextstorage_nstextstorage_processediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, setFixesAttributesLazily, arginfo_appkit_ns_nstextstorage_nstextstorage_setfixesattributeslazily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily, arginfo_appkit_ns_nstextstorage_nstextstorage_fixesattributeslazily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
