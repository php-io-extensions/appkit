
extern zend_class_entry *appkit_ns_nsopenpanel_nsopenpanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenPanel_NSOpenPanel);

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, openPanel);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, URLs);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, resolvesAliases);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setResolvesAliases);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseDirectories);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseDirectories);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, allowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setAllowsMultipleSelection);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseFiles);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseFiles);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canResolveUbiquitousConflicts);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanResolveUbiquitousConflicts);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canDownloadUbiquitousContents);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanDownloadUbiquitousContents);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, isAccessoryViewDisclosed);
PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setAccessoryViewDisclosed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_openpanel, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_urls, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_resolvesaliases, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setresolvesaliases, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolvesAliases, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_canchoosedirectories, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanchoosedirectories, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canChooseDirectories, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_allowsmultipleselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setallowsmultipleselection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsMultipleSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_canchoosefiles, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanchoosefiles, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canChooseFiles, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_canresolveubiquitousconflicts, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanresolveubiquitousconflicts, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canResolveUbiquitousConflicts, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_candownloadubiquitouscontents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcandownloadubiquitouscontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canDownloadUbiquitousContents, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_isaccessoryviewdisclosed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_setaccessoryviewdisclosed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accessoryViewDisclosed, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsopenpanel_nsopenpanel_method_entry) {
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, openPanel, arginfo_appkit_ns_nsopenpanel_nsopenpanel_openpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, URLs, arginfo_appkit_ns_nsopenpanel_nsopenpanel_urls, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, resolvesAliases, arginfo_appkit_ns_nsopenpanel_nsopenpanel_resolvesaliases, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setResolvesAliases, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setresolvesaliases, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseDirectories, arginfo_appkit_ns_nsopenpanel_nsopenpanel_canchoosedirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseDirectories, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanchoosedirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, allowsMultipleSelection, arginfo_appkit_ns_nsopenpanel_nsopenpanel_allowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setAllowsMultipleSelection, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setallowsmultipleselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseFiles, arginfo_appkit_ns_nsopenpanel_nsopenpanel_canchoosefiles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseFiles, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanchoosefiles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, canResolveUbiquitousConflicts, arginfo_appkit_ns_nsopenpanel_nsopenpanel_canresolveubiquitousconflicts, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanResolveUbiquitousConflicts, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcanresolveubiquitousconflicts, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, canDownloadUbiquitousContents, arginfo_appkit_ns_nsopenpanel_nsopenpanel_candownloadubiquitouscontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanDownloadUbiquitousContents, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setcandownloadubiquitouscontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, isAccessoryViewDisclosed, arginfo_appkit_ns_nsopenpanel_nsopenpanel_isaccessoryviewdisclosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, setAccessoryViewDisclosed, arginfo_appkit_ns_nsopenpanel_nsopenpanel_setaccessoryviewdisclosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
