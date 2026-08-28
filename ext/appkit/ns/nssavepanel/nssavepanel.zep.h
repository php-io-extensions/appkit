
extern zend_class_entry *appkit_ns_nssavepanel_nssavepanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSavePanel_NSSavePanel);

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, savePanel);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, Url);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, identifier);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setIdentifier);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, directoryURL);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setDirectoryURL);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, allowedContentTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAllowedContentTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, allowsOtherFileTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAllowsOtherFileTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, currentContentType);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCurrentContentType);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, accessoryView);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAccessoryView);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, delegate);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setDelegate);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, isExpanded);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, canCreateDirectories);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCanCreateDirectories);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, canSelectHiddenExtension);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCanSelectHiddenExtension);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, isExtensionHidden);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setExtensionHidden);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, treatsFilePackagesAsDirectories);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTreatsFilePackagesAsDirectories);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, prompt);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setPrompt);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, title);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTitle);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldLabel);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldLabel);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldStringValue);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldStringValue);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, message);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setMessage);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsHiddenFiles);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsHiddenFiles);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsTagField);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsTagField);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, tagNames);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTagNames);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsContentTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsContentTypes);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, validateVisibleColumns);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, ok);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, cancel);
PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, runModal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_savepanel, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_identifier, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, identifier)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_directoryurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setdirectoryurl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, directoryURL, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_allowedcontenttypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setallowedcontenttypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, allowedContentTypes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_allowsotherfiletypes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setallowsotherfiletypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsOtherFileTypes, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_currentcontenttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setcurrentcontenttype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentContentType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_accessoryview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setaccessoryview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accessoryView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_isexpanded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_cancreatedirectories, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setcancreatedirectories, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canCreateDirectories, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_canselecthiddenextension, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setcanselecthiddenextension, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canSelectHiddenExtension, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_isextensionhidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setextensionhidden, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extensionHidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_treatsfilepackagesasdirectories, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_settreatsfilepackagesasdirectories, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, treatsFilePackagesAsDirectories, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_prompt, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setprompt, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prompt, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_namefieldlabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setnamefieldlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameFieldLabel, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_namefieldstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setnamefieldstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameFieldStringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_message, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setmessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_showshiddenfiles, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setshowshiddenfiles, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsHiddenFiles, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_showstagfield, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setshowstagfield, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsTagField, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_tagnames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_settagnames, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, tagNames, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_showscontenttypes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_setshowscontenttypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsContentTypes, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_validatevisiblecolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_ok, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_cancel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_runmodal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssavepanel_nssavepanel_method_entry) {
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, savePanel, arginfo_appkit_ns_nssavepanel_nssavepanel_savepanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, Url, arginfo_appkit_ns_nssavepanel_nssavepanel_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, identifier, arginfo_appkit_ns_nssavepanel_nssavepanel_identifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setIdentifier, arginfo_appkit_ns_nssavepanel_nssavepanel_setidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, directoryURL, arginfo_appkit_ns_nssavepanel_nssavepanel_directoryurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setDirectoryURL, arginfo_appkit_ns_nssavepanel_nssavepanel_setdirectoryurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, allowedContentTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_allowedcontenttypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setAllowedContentTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_setallowedcontenttypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, allowsOtherFileTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_allowsotherfiletypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setAllowsOtherFileTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_setallowsotherfiletypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, currentContentType, arginfo_appkit_ns_nssavepanel_nssavepanel_currentcontenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setCurrentContentType, arginfo_appkit_ns_nssavepanel_nssavepanel_setcurrentcontenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, accessoryView, arginfo_appkit_ns_nssavepanel_nssavepanel_accessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setAccessoryView, arginfo_appkit_ns_nssavepanel_nssavepanel_setaccessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, delegate, arginfo_appkit_ns_nssavepanel_nssavepanel_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setDelegate, arginfo_appkit_ns_nssavepanel_nssavepanel_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, isExpanded, arginfo_appkit_ns_nssavepanel_nssavepanel_isexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, canCreateDirectories, arginfo_appkit_ns_nssavepanel_nssavepanel_cancreatedirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setCanCreateDirectories, arginfo_appkit_ns_nssavepanel_nssavepanel_setcancreatedirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, canSelectHiddenExtension, arginfo_appkit_ns_nssavepanel_nssavepanel_canselecthiddenextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setCanSelectHiddenExtension, arginfo_appkit_ns_nssavepanel_nssavepanel_setcanselecthiddenextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, isExtensionHidden, arginfo_appkit_ns_nssavepanel_nssavepanel_isextensionhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setExtensionHidden, arginfo_appkit_ns_nssavepanel_nssavepanel_setextensionhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, treatsFilePackagesAsDirectories, arginfo_appkit_ns_nssavepanel_nssavepanel_treatsfilepackagesasdirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setTreatsFilePackagesAsDirectories, arginfo_appkit_ns_nssavepanel_nssavepanel_settreatsfilepackagesasdirectories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, prompt, arginfo_appkit_ns_nssavepanel_nssavepanel_prompt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setPrompt, arginfo_appkit_ns_nssavepanel_nssavepanel_setprompt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, title, arginfo_appkit_ns_nssavepanel_nssavepanel_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setTitle, arginfo_appkit_ns_nssavepanel_nssavepanel_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldLabel, arginfo_appkit_ns_nssavepanel_nssavepanel_namefieldlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldLabel, arginfo_appkit_ns_nssavepanel_nssavepanel_setnamefieldlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldStringValue, arginfo_appkit_ns_nssavepanel_nssavepanel_namefieldstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldStringValue, arginfo_appkit_ns_nssavepanel_nssavepanel_setnamefieldstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, message, arginfo_appkit_ns_nssavepanel_nssavepanel_message, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setMessage, arginfo_appkit_ns_nssavepanel_nssavepanel_setmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, showsHiddenFiles, arginfo_appkit_ns_nssavepanel_nssavepanel_showshiddenfiles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setShowsHiddenFiles, arginfo_appkit_ns_nssavepanel_nssavepanel_setshowshiddenfiles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, showsTagField, arginfo_appkit_ns_nssavepanel_nssavepanel_showstagfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setShowsTagField, arginfo_appkit_ns_nssavepanel_nssavepanel_setshowstagfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, tagNames, arginfo_appkit_ns_nssavepanel_nssavepanel_tagnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setTagNames, arginfo_appkit_ns_nssavepanel_nssavepanel_settagnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, showsContentTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_showscontenttypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, setShowsContentTypes, arginfo_appkit_ns_nssavepanel_nssavepanel_setshowscontenttypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, validateVisibleColumns, arginfo_appkit_ns_nssavepanel_nssavepanel_validatevisiblecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, ok, arginfo_appkit_ns_nssavepanel_nssavepanel_ok, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, cancel, arginfo_appkit_ns_nssavepanel_nssavepanel_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, runModal, arginfo_appkit_ns_nssavepanel_nssavepanel_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
