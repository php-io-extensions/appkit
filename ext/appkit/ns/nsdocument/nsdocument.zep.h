
extern zend_class_entry *appkit_ns_nsdocument_nsdocument_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDocument_NSDocument);

PHP_METHOD(AppKit_NS_NSDocument_NSDocument, create);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, wrap);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, destroy);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, nsDocument);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, initWithType);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, initWithContentsOfURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getFileType);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setFileType);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getFileURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setFileURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getDisplayName);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setDisplayName);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isDocumentEdited);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, hasUnautosavedChanges);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isDraft);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, setDraft);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, isEntireFileLoaded);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, updateChangeCount);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, close);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, makeWindowControllers);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, showWindows);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, windowControllersCount);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, windowControllerAt);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, addWindowController);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, removeWindowController);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, readFromURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, writeToURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, revertToContentsOfURL);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getWindowNibName);
PHP_METHOD(AppKit_NS_NSDocument_NSDocument, getAutosavingFileType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsDocumentPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_nsdocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_initwithtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_initwithcontentsofurl, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_getfiletype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_setfiletype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_getfileurl, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_setfileurl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_getdisplayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_setdisplayname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_isdocumentedited, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_hasunautosavedchanges, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_isdraft, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_setdraft, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, draft, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_isentirefileloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_updatechangecount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, changeType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_makewindowcontrollers, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_showwindows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_windowcontrollerscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_windowcontrollerat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_addwindowcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_removewindowcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_readfromurl, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_writetourl, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_reverttocontentsofurl, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_getwindownibname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdocument_nsdocument_getautosavingfiletype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdocument_nsdocument_method_entry) {
	PHP_ME(AppKit_NS_NSDocument_NSDocument, create, arginfo_appkit_ns_nsdocument_nsdocument_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, wrap, arginfo_appkit_ns_nsdocument_nsdocument_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, destroy, arginfo_appkit_ns_nsdocument_nsdocument_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, nsDocument, arginfo_appkit_ns_nsdocument_nsdocument_nsdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, initWithType, arginfo_appkit_ns_nsdocument_nsdocument_initwithtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, initWithContentsOfURL, arginfo_appkit_ns_nsdocument_nsdocument_initwithcontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, getFileType, arginfo_appkit_ns_nsdocument_nsdocument_getfiletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, setFileType, arginfo_appkit_ns_nsdocument_nsdocument_setfiletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, getFileURL, arginfo_appkit_ns_nsdocument_nsdocument_getfileurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, setFileURL, arginfo_appkit_ns_nsdocument_nsdocument_setfileurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, getDisplayName, arginfo_appkit_ns_nsdocument_nsdocument_getdisplayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, setDisplayName, arginfo_appkit_ns_nsdocument_nsdocument_setdisplayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, isDocumentEdited, arginfo_appkit_ns_nsdocument_nsdocument_isdocumentedited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, hasUnautosavedChanges, arginfo_appkit_ns_nsdocument_nsdocument_hasunautosavedchanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, isDraft, arginfo_appkit_ns_nsdocument_nsdocument_isdraft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, setDraft, arginfo_appkit_ns_nsdocument_nsdocument_setdraft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, isEntireFileLoaded, arginfo_appkit_ns_nsdocument_nsdocument_isentirefileloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, updateChangeCount, arginfo_appkit_ns_nsdocument_nsdocument_updatechangecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, close, arginfo_appkit_ns_nsdocument_nsdocument_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, makeWindowControllers, arginfo_appkit_ns_nsdocument_nsdocument_makewindowcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, showWindows, arginfo_appkit_ns_nsdocument_nsdocument_showwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, windowControllersCount, arginfo_appkit_ns_nsdocument_nsdocument_windowcontrollerscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, windowControllerAt, arginfo_appkit_ns_nsdocument_nsdocument_windowcontrollerat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, addWindowController, arginfo_appkit_ns_nsdocument_nsdocument_addwindowcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, removeWindowController, arginfo_appkit_ns_nsdocument_nsdocument_removewindowcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, readFromURL, arginfo_appkit_ns_nsdocument_nsdocument_readfromurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, writeToURL, arginfo_appkit_ns_nsdocument_nsdocument_writetourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, revertToContentsOfURL, arginfo_appkit_ns_nsdocument_nsdocument_reverttocontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, getWindowNibName, arginfo_appkit_ns_nsdocument_nsdocument_getwindownibname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDocument_NSDocument, getAutosavingFileType, arginfo_appkit_ns_nsdocument_nsdocument_getautosavingfiletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
