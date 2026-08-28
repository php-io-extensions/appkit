
extern zend_class_entry *appkit_ns_nstextcontainer_nstextcontainer_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextContainer_NSTextContainer);

PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, initWithSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, textLayoutManager);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, size);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineBreakMode);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, maximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectAtIndexWritingDirectionRemainingRect);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, layoutManager);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setLayoutManager);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, exclusionPaths);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setExclusionPaths);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, textView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setTextView);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, initWithContainerSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, containerSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, setContainerSize);
PHP_METHOD(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectSweepDirectionMovementDirectionRemainingRect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_initwithsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_textlayoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_linebreakmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinebreakmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineBreakMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinefragmentpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineFragmentPadding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_maximumnumberoflines, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setmaximumnumberoflines, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumNumberOfLines, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentrectforproposedrectatindexwritingdirectionremainingrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, characterIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseWritingDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_issimplerectangulartextcontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_widthtrackstextview, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setwidthtrackstextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widthTracksTextView, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_heighttrackstextview, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setheighttrackstextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, heightTracksTextView, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_layoutmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutManager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_replacelayoutmanager, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newLayoutManager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_exclusionpaths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setexclusionpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, exclusionPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_textview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_settextview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_initwithcontainersize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_containersize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_setcontainersize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentrectforproposedrectsweepdirectionmovementdirectionremainingrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sweepDirection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movementDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextcontainer_nstextcontainer_method_entry) {
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, initWithSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_initwithsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, textLayoutManager, arginfo_appkit_ns_nstextcontainer_nstextcontainer_textlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, size, arginfo_appkit_ns_nstextcontainer_nstextcontainer_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, lineBreakMode, arginfo_appkit_ns_nstextcontainer_nstextcontainer_linebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setLineBreakMode, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentPadding, arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setLineFragmentPadding, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlinefragmentpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, maximumNumberOfLines, arginfo_appkit_ns_nstextcontainer_nstextcontainer_maximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setMaximumNumberOfLines, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setmaximumnumberoflines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectAtIndexWritingDirectionRemainingRect, arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentrectforproposedrectatindexwritingdirectionremainingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, isSimpleRectangularTextContainer, arginfo_appkit_ns_nstextcontainer_nstextcontainer_issimplerectangulartextcontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, widthTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_widthtrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setWidthTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setwidthtrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, heightTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_heighttrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setHeightTracksTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setheighttrackstextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, layoutManager, arginfo_appkit_ns_nstextcontainer_nstextcontainer_layoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setLayoutManager, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setlayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, replaceLayoutManager, arginfo_appkit_ns_nstextcontainer_nstextcontainer_replacelayoutmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, exclusionPaths, arginfo_appkit_ns_nstextcontainer_nstextcontainer_exclusionpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setExclusionPaths, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setexclusionpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, textView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_textview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setTextView, arginfo_appkit_ns_nstextcontainer_nstextcontainer_settextview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, initWithContainerSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_initwithcontainersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, containerSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_containersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, setContainerSize, arginfo_appkit_ns_nstextcontainer_nstextcontainer_setcontainersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextContainer_NSTextContainer, lineFragmentRectForProposedRectSweepDirectionMovementDirectionRemainingRect, arginfo_appkit_ns_nstextcontainer_nstextcontainer_linefragmentrectforproposedrectsweepdirectionmovementdirectionremainingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
