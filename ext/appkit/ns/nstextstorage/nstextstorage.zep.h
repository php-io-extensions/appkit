
extern zend_class_entry *appkit_ns_nstextstorage_nstextstorage_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextStorage_NSTextStorage);

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, init);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, initWithString);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagers);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedMask);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedRange);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, delegate);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setDelegate);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedRangeChangeInLength);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, processEditing);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, invalidateAttributesInRange);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, ensureAttributesAreFixedInRange);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, textStorageObserver);
PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setTextStorageObserver);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_initwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_layoutmanagers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_addlayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aLayoutManager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_removelayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aLayoutManager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_editedmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_editedrange, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_changeinlength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_editedrangechangeinlength, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editedMask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_processediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_fixesattributeslazily, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_invalidateattributesinrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_ensureattributesarefixedinrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_textstorageobserver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextstorage_nstextstorage_settextstorageobserver, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textStorageObserver, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextstorage_nstextstorage_method_entry) {
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, init, arginfo_appkit_ns_nstextstorage_nstextstorage_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, initWithString, arginfo_appkit_ns_nstextstorage_nstextstorage_initwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagers, arginfo_appkit_ns_nstextstorage_nstextstorage_layoutmanagers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager, arginfo_appkit_ns_nstextstorage_nstextstorage_addlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager, arginfo_appkit_ns_nstextstorage_nstextstorage_removelayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, editedMask, arginfo_appkit_ns_nstextstorage_nstextstorage_editedmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, editedRange, arginfo_appkit_ns_nstextstorage_nstextstorage_editedrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength, arginfo_appkit_ns_nstextstorage_nstextstorage_changeinlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, delegate, arginfo_appkit_ns_nstextstorage_nstextstorage_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, setDelegate, arginfo_appkit_ns_nstextstorage_nstextstorage_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, editedRangeChangeInLength, arginfo_appkit_ns_nstextstorage_nstextstorage_editedrangechangeinlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, processEditing, arginfo_appkit_ns_nstextstorage_nstextstorage_processediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily, arginfo_appkit_ns_nstextstorage_nstextstorage_fixesattributeslazily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, invalidateAttributesInRange, arginfo_appkit_ns_nstextstorage_nstextstorage_invalidateattributesinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, ensureAttributesAreFixedInRange, arginfo_appkit_ns_nstextstorage_nstextstorage_ensureattributesarefixedinrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, textStorageObserver, arginfo_appkit_ns_nstextstorage_nstextstorage_textstorageobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextStorage_NSTextStorage, setTextStorageObserver, arginfo_appkit_ns_nstextstorage_nstextstorage_settextstorageobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
