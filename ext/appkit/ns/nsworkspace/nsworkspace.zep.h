
extern zend_class_entry *appkit_ns_nsworkspace_nsworkspace_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSWorkspace_NSWorkspace);

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, shared);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, wrap);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, destroy);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, nsWorkspace);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, openURL);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, selectFile);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, showSearchResults);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, isFilePackage);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, iconForFile);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, hideOtherApplications);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationWithBundleIdentifier);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationToOpenURL);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, frontmostApplicationName);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationsCount);
PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationAt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsWorkspacePtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_nsworkspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_openurl, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_selectfile, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fullPath, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rootPath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_showsearchresults, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_isfilepackage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_iconforfile, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_hideotherapplications, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_urlforapplicationwithbundleidentifier, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bundleId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_urlforapplicationtoopenurl, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_frontmostapplicationname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_runningapplicationscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsworkspace_nsworkspace_runningapplicationat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, workspace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsworkspace_nsworkspace_method_entry) {
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, shared, arginfo_appkit_ns_nsworkspace_nsworkspace_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, wrap, arginfo_appkit_ns_nsworkspace_nsworkspace_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, destroy, arginfo_appkit_ns_nsworkspace_nsworkspace_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, nsWorkspace, arginfo_appkit_ns_nsworkspace_nsworkspace_nsworkspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, openURL, arginfo_appkit_ns_nsworkspace_nsworkspace_openurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, selectFile, arginfo_appkit_ns_nsworkspace_nsworkspace_selectfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, showSearchResults, arginfo_appkit_ns_nsworkspace_nsworkspace_showsearchresults, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, isFilePackage, arginfo_appkit_ns_nsworkspace_nsworkspace_isfilepackage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, iconForFile, arginfo_appkit_ns_nsworkspace_nsworkspace_iconforfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, hideOtherApplications, arginfo_appkit_ns_nsworkspace_nsworkspace_hideotherapplications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationWithBundleIdentifier, arginfo_appkit_ns_nsworkspace_nsworkspace_urlforapplicationwithbundleidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationToOpenURL, arginfo_appkit_ns_nsworkspace_nsworkspace_urlforapplicationtoopenurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, frontmostApplicationName, arginfo_appkit_ns_nsworkspace_nsworkspace_frontmostapplicationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationsCount, arginfo_appkit_ns_nsworkspace_nsworkspace_runningapplicationscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationAt, arginfo_appkit_ns_nsworkspace_nsworkspace_runningapplicationat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
