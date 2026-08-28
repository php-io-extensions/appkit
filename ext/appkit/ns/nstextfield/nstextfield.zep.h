
extern zend_class_entry *appkit_ns_nstextfield_nstextfield_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextField_NSTextField);

PHP_METHOD(AppKit_NS_NSTextField_NSTextField, placeholderString);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, backgroundColor);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, drawsBackground);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textColor);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setTextColor);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isBordered);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBordered);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isBezeled);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBezeled);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isEditable);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setEditable);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isSelectable);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setSelectable);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, selectText);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, delegate);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setDelegate);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textShouldBeginEditing);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textShouldEndEditing);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidBeginEditing);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidEndEditing);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textDidChange);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, acceptsFirstResponder);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, bezelStyle);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setBezelStyle);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, preferredMaxLayoutWidth);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setPreferredMaxLayoutWidth);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, maximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setMaximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsDefaultTighteningForTruncation);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsDefaultTighteningForTruncation);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, lineBreakStrategy);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setLineBreakStrategy);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsWritingTools);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsWritingTools);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsWritingToolsAffordance);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsWritingToolsAffordance);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, isAutomaticTextCompletionEnabled);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAutomaticTextCompletionEnabled);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsCharacterPickerTouchBarItem);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsCharacterPickerTouchBarItem);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, labelWithString);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, wrappingLabelWithString);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, textFieldWithString);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, allowsEditingTextAttributes);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setAllowsEditingTextAttributes);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, importsGraphics);
PHP_METHOD(AppKit_NS_NSTextField_NSTextField, setImportsGraphics);

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_placeholderstring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, placeholderString)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_settextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_isbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_isbezeled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setbezeled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bezeled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_isselectable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setselectable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_selecttext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textshouldbeginediting, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textshouldendediting, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textdidbeginediting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textdidendediting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textdidchange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_acceptsfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_bezelstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setbezelstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bezelStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_preferredmaxlayoutwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setpreferredmaxlayoutwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredMaxLayoutWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_maximumnumberoflines, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setmaximumnumberoflines, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumNumberOfLines, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_allowsdefaulttighteningfortruncation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setallowsdefaulttighteningfortruncation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsDefaultTighteningForTruncation, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_linebreakstrategy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setlinebreakstrategy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineBreakStrategy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_allowswritingtools, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setallowswritingtools, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsWritingTools, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_allowswritingtoolsaffordance, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setallowswritingtoolsaffordance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsWritingToolsAffordance, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_isautomatictextcompletionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setautomatictextcompletionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticTextCompletionEnabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_allowscharacterpickertouchbaritem, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setallowscharacterpickertouchbaritem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsCharacterPickerTouchBarItem, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_labelwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_wrappinglabelwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_textfieldwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_allowseditingtextattributes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setallowseditingtextattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsEditingTextAttributes, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_importsgraphics, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextfield_nstextfield_setimportsgraphics, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, importsGraphics, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextfield_nstextfield_method_entry) {
	PHP_ME(AppKit_NS_NSTextField_NSTextField, placeholderString, arginfo_appkit_ns_nstextfield_nstextfield_placeholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setPlaceholderString, arginfo_appkit_ns_nstextfield_nstextfield_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, backgroundColor, arginfo_appkit_ns_nstextfield_nstextfield_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setBackgroundColor, arginfo_appkit_ns_nstextfield_nstextfield_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, drawsBackground, arginfo_appkit_ns_nstextfield_nstextfield_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setDrawsBackground, arginfo_appkit_ns_nstextfield_nstextfield_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textColor, arginfo_appkit_ns_nstextfield_nstextfield_textcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setTextColor, arginfo_appkit_ns_nstextfield_nstextfield_settextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, isBordered, arginfo_appkit_ns_nstextfield_nstextfield_isbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setBordered, arginfo_appkit_ns_nstextfield_nstextfield_setbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, isBezeled, arginfo_appkit_ns_nstextfield_nstextfield_isbezeled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setBezeled, arginfo_appkit_ns_nstextfield_nstextfield_setbezeled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, isEditable, arginfo_appkit_ns_nstextfield_nstextfield_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setEditable, arginfo_appkit_ns_nstextfield_nstextfield_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, isSelectable, arginfo_appkit_ns_nstextfield_nstextfield_isselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setSelectable, arginfo_appkit_ns_nstextfield_nstextfield_setselectable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, selectText, arginfo_appkit_ns_nstextfield_nstextfield_selecttext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, delegate, arginfo_appkit_ns_nstextfield_nstextfield_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setDelegate, arginfo_appkit_ns_nstextfield_nstextfield_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textShouldBeginEditing, arginfo_appkit_ns_nstextfield_nstextfield_textshouldbeginediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textShouldEndEditing, arginfo_appkit_ns_nstextfield_nstextfield_textshouldendediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textDidBeginEditing, arginfo_appkit_ns_nstextfield_nstextfield_textdidbeginediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textDidEndEditing, arginfo_appkit_ns_nstextfield_nstextfield_textdidendediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textDidChange, arginfo_appkit_ns_nstextfield_nstextfield_textdidchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, acceptsFirstResponder, arginfo_appkit_ns_nstextfield_nstextfield_acceptsfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, bezelStyle, arginfo_appkit_ns_nstextfield_nstextfield_bezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setBezelStyle, arginfo_appkit_ns_nstextfield_nstextfield_setbezelstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, preferredMaxLayoutWidth, arginfo_appkit_ns_nstextfield_nstextfield_preferredmaxlayoutwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setPreferredMaxLayoutWidth, arginfo_appkit_ns_nstextfield_nstextfield_setpreferredmaxlayoutwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, maximumNumberOfLines, arginfo_appkit_ns_nstextfield_nstextfield_maximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setMaximumNumberOfLines, arginfo_appkit_ns_nstextfield_nstextfield_setmaximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, allowsDefaultTighteningForTruncation, arginfo_appkit_ns_nstextfield_nstextfield_allowsdefaulttighteningfortruncation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAllowsDefaultTighteningForTruncation, arginfo_appkit_ns_nstextfield_nstextfield_setallowsdefaulttighteningfortruncation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, lineBreakStrategy, arginfo_appkit_ns_nstextfield_nstextfield_linebreakstrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setLineBreakStrategy, arginfo_appkit_ns_nstextfield_nstextfield_setlinebreakstrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, allowsWritingTools, arginfo_appkit_ns_nstextfield_nstextfield_allowswritingtools, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAllowsWritingTools, arginfo_appkit_ns_nstextfield_nstextfield_setallowswritingtools, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, allowsWritingToolsAffordance, arginfo_appkit_ns_nstextfield_nstextfield_allowswritingtoolsaffordance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAllowsWritingToolsAffordance, arginfo_appkit_ns_nstextfield_nstextfield_setallowswritingtoolsaffordance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, isAutomaticTextCompletionEnabled, arginfo_appkit_ns_nstextfield_nstextfield_isautomatictextcompletionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAutomaticTextCompletionEnabled, arginfo_appkit_ns_nstextfield_nstextfield_setautomatictextcompletionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, allowsCharacterPickerTouchBarItem, arginfo_appkit_ns_nstextfield_nstextfield_allowscharacterpickertouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAllowsCharacterPickerTouchBarItem, arginfo_appkit_ns_nstextfield_nstextfield_setallowscharacterpickertouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, labelWithString, arginfo_appkit_ns_nstextfield_nstextfield_labelwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, wrappingLabelWithString, arginfo_appkit_ns_nstextfield_nstextfield_wrappinglabelwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, textFieldWithString, arginfo_appkit_ns_nstextfield_nstextfield_textfieldwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, allowsEditingTextAttributes, arginfo_appkit_ns_nstextfield_nstextfield_allowseditingtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setAllowsEditingTextAttributes, arginfo_appkit_ns_nstextfield_nstextfield_setallowseditingtextattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, importsGraphics, arginfo_appkit_ns_nstextfield_nstextfield_importsgraphics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextField_NSTextField, setImportsGraphics, arginfo_appkit_ns_nstextfield_nstextfield_setimportsgraphics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
