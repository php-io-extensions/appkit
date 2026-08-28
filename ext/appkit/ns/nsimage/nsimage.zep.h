
extern zend_class_entry *appkit_ns_nsimage_nsimage_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSImage_NSImage);

PHP_METHOD(AppKit_NS_NSImage_NSImage, init);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageNamed);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameAccessibilityDescription);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameVariableValueAccessibilityDescription);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolNameVariableValue);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolNameBundleVariableValue);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithContentsOfFile);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithContentsOfURL);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initByReferencingFile);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initByReferencingURL);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithPasteboard);
PHP_METHOD(AppKit_NS_NSImage_NSImage, size);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setName);
PHP_METHOD(AppKit_NS_NSImage_NSImage, name);
PHP_METHOD(AppKit_NS_NSImage_NSImage, backgroundColor);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSImage_NSImage, usesEPSOnResolutionMismatch);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setUsesEPSOnResolutionMismatch);
PHP_METHOD(AppKit_NS_NSImage_NSImage, prefersColorMatch);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setPrefersColorMatch);
PHP_METHOD(AppKit_NS_NSImage_NSImage, matchesOnMultipleResolution);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setMatchesOnMultipleResolution);
PHP_METHOD(AppKit_NS_NSImage_NSImage, matchesOnlyOnBestFittingAxis);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setMatchesOnlyOnBestFittingAxis);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawAtPointFromRectOperationFraction);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFraction);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFractionRespectFlippedHints);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawRepresentationInRect);
PHP_METHOD(AppKit_NS_NSImage_NSImage, drawInRect);
PHP_METHOD(AppKit_NS_NSImage_NSImage, recache);
PHP_METHOD(AppKit_NS_NSImage_NSImage, representations);
PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentations);
PHP_METHOD(AppKit_NS_NSImage_NSImage, addRepresentation);
PHP_METHOD(AppKit_NS_NSImage_NSImage, removeRepresentation);
PHP_METHOD(AppKit_NS_NSImage_NSImage, isValid);
PHP_METHOD(AppKit_NS_NSImage_NSImage, delegate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setDelegate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageTypes);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageUnfilteredTypes);
PHP_METHOD(AppKit_NS_NSImage_NSImage, canInitWithPasteboard);
PHP_METHOD(AppKit_NS_NSImage_NSImage, cacheMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setCacheMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, alignmentRect);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setAlignmentRect);
PHP_METHOD(AppKit_NS_NSImage_NSImage, isTemplate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setTemplate);
PHP_METHOD(AppKit_NS_NSImage_NSImage, accessibilityDescription);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setAccessibilityDescription);
PHP_METHOD(AppKit_NS_NSImage_NSImage, initWithCGImageSize);
PHP_METHOD(AppKit_NS_NSImage_NSImage, bestRepresentationForRectContextHints);
PHP_METHOD(AppKit_NS_NSImage_NSImage, hitTestRectWithImageDestinationRectContextHintsFlipped);
PHP_METHOD(AppKit_NS_NSImage_NSImage, recommendedLayerContentsScale);
PHP_METHOD(AppKit_NS_NSImage_NSImage, layerContentsForContentsScale);
PHP_METHOD(AppKit_NS_NSImage_NSImage, capInsets);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setCapInsets);
PHP_METHOD(AppKit_NS_NSImage_NSImage, resizingMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, setResizingMode);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithSymbolConfiguration);
PHP_METHOD(AppKit_NS_NSImage_NSImage, symbolConfiguration);
PHP_METHOD(AppKit_NS_NSImage_NSImage, imageWithLocale);
PHP_METHOD(AppKit_NS_NSImage_NSImage, locale);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagenamed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithsystemsymbolnameaccessibilitydescription, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithsystemsymbolnamevariablevalueaccessibilitydescription, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, description)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolnamevariablevalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolnamebundlevariablevalue, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, bundle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initwithsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initwithcontentsoffile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initwithcontentsofurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initbyreferencingfile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initbyreferencingurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initwithpasteboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setname, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_usesepsonresolutionmismatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setusesepsonresolutionmismatch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_preferscolormatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setpreferscolormatch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_matchesonmultipleresolution, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setmatchesonmultipleresolution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_matchesonlyonbestfittingaxis, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setmatchesonlyonbestfittingaxis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawatpointfromrectoperationfraction, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawinrectfromrectoperationfraction, 0, 11, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delta, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawinrectfromrectoperationfractionrespectflippedhints, 0, 13, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fromHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, requestedAlpha, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, respectFlipped, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawrepresentationinrect, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageRep, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_drawinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_recache, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_representations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_addrepresentations, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, imageReps, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_addrepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageRep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_removerepresentation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageRep, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagetypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imageunfilteredtypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_caninitwithpasteboard, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pasteboard, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_cachemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setcachemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cacheMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_alignmentrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setalignmentrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_istemplate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_settemplate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_accessibilitydescription, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setaccessibilitydescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, accessibilityDescription)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_initwithcgimagesize, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cgImage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_bestrepresentationforrectcontexthints, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_hittestrectwithimagedestinationrectcontexthintsflipped, 0, 12, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, testX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, testY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, testWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, testHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, destX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, destY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, destWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, destHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_recommendedlayercontentsscale, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredContentsScale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_layercontentsforcontentsscale, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layerContentsScale, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_capinsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setcapinsets, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_resizingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_setresizingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resizingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolconfiguration, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_symbolconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_imagewithlocale, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsimage_nsimage_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsimage_nsimage_method_entry) {
	PHP_ME(AppKit_NS_NSImage_NSImage, init, arginfo_appkit_ns_nsimage_nsimage_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageNamed, arginfo_appkit_ns_nsimage_nsimage_imagenamed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameAccessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_imagewithsystemsymbolnameaccessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithSystemSymbolNameVariableValueAccessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_imagewithsystemsymbolnamevariablevalueaccessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithSymbolNameVariableValue, arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolnamevariablevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithSymbolNameBundleVariableValue, arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolnamebundlevariablevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initWithSize, arginfo_appkit_ns_nsimage_nsimage_initwithsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initWithContentsOfFile, arginfo_appkit_ns_nsimage_nsimage_initwithcontentsoffile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initWithContentsOfURL, arginfo_appkit_ns_nsimage_nsimage_initwithcontentsofurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initByReferencingFile, arginfo_appkit_ns_nsimage_nsimage_initbyreferencingfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initByReferencingURL, arginfo_appkit_ns_nsimage_nsimage_initbyreferencingurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initWithPasteboard, arginfo_appkit_ns_nsimage_nsimage_initwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, size, arginfo_appkit_ns_nsimage_nsimage_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setSize, arginfo_appkit_ns_nsimage_nsimage_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setName, arginfo_appkit_ns_nsimage_nsimage_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, name, arginfo_appkit_ns_nsimage_nsimage_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, backgroundColor, arginfo_appkit_ns_nsimage_nsimage_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setBackgroundColor, arginfo_appkit_ns_nsimage_nsimage_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, usesEPSOnResolutionMismatch, arginfo_appkit_ns_nsimage_nsimage_usesepsonresolutionmismatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setUsesEPSOnResolutionMismatch, arginfo_appkit_ns_nsimage_nsimage_setusesepsonresolutionmismatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, prefersColorMatch, arginfo_appkit_ns_nsimage_nsimage_preferscolormatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setPrefersColorMatch, arginfo_appkit_ns_nsimage_nsimage_setpreferscolormatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, matchesOnMultipleResolution, arginfo_appkit_ns_nsimage_nsimage_matchesonmultipleresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setMatchesOnMultipleResolution, arginfo_appkit_ns_nsimage_nsimage_setmatchesonmultipleresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, matchesOnlyOnBestFittingAxis, arginfo_appkit_ns_nsimage_nsimage_matchesonlyonbestfittingaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setMatchesOnlyOnBestFittingAxis, arginfo_appkit_ns_nsimage_nsimage_setmatchesonlyonbestfittingaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawAtPointFromRectOperationFraction, arginfo_appkit_ns_nsimage_nsimage_drawatpointfromrectoperationfraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFraction, arginfo_appkit_ns_nsimage_nsimage_drawinrectfromrectoperationfraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawInRectFromRectOperationFractionRespectFlippedHints, arginfo_appkit_ns_nsimage_nsimage_drawinrectfromrectoperationfractionrespectflippedhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawRepresentationInRect, arginfo_appkit_ns_nsimage_nsimage_drawrepresentationinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, drawInRect, arginfo_appkit_ns_nsimage_nsimage_drawinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, recache, arginfo_appkit_ns_nsimage_nsimage_recache, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, representations, arginfo_appkit_ns_nsimage_nsimage_representations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, addRepresentations, arginfo_appkit_ns_nsimage_nsimage_addrepresentations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, addRepresentation, arginfo_appkit_ns_nsimage_nsimage_addrepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, removeRepresentation, arginfo_appkit_ns_nsimage_nsimage_removerepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, isValid, arginfo_appkit_ns_nsimage_nsimage_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, delegate, arginfo_appkit_ns_nsimage_nsimage_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setDelegate, arginfo_appkit_ns_nsimage_nsimage_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageTypes, arginfo_appkit_ns_nsimage_nsimage_imagetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageUnfilteredTypes, arginfo_appkit_ns_nsimage_nsimage_imageunfilteredtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, canInitWithPasteboard, arginfo_appkit_ns_nsimage_nsimage_caninitwithpasteboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, cacheMode, arginfo_appkit_ns_nsimage_nsimage_cachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setCacheMode, arginfo_appkit_ns_nsimage_nsimage_setcachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, alignmentRect, arginfo_appkit_ns_nsimage_nsimage_alignmentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setAlignmentRect, arginfo_appkit_ns_nsimage_nsimage_setalignmentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, isTemplate, arginfo_appkit_ns_nsimage_nsimage_istemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setTemplate, arginfo_appkit_ns_nsimage_nsimage_settemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, accessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_accessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setAccessibilityDescription, arginfo_appkit_ns_nsimage_nsimage_setaccessibilitydescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, initWithCGImageSize, arginfo_appkit_ns_nsimage_nsimage_initwithcgimagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, bestRepresentationForRectContextHints, arginfo_appkit_ns_nsimage_nsimage_bestrepresentationforrectcontexthints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, hitTestRectWithImageDestinationRectContextHintsFlipped, arginfo_appkit_ns_nsimage_nsimage_hittestrectwithimagedestinationrectcontexthintsflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, recommendedLayerContentsScale, arginfo_appkit_ns_nsimage_nsimage_recommendedlayercontentsscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, layerContentsForContentsScale, arginfo_appkit_ns_nsimage_nsimage_layercontentsforcontentsscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, capInsets, arginfo_appkit_ns_nsimage_nsimage_capinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setCapInsets, arginfo_appkit_ns_nsimage_nsimage_setcapinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, resizingMode, arginfo_appkit_ns_nsimage_nsimage_resizingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, setResizingMode, arginfo_appkit_ns_nsimage_nsimage_setresizingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithSymbolConfiguration, arginfo_appkit_ns_nsimage_nsimage_imagewithsymbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, symbolConfiguration, arginfo_appkit_ns_nsimage_nsimage_symbolconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, imageWithLocale, arginfo_appkit_ns_nsimage_nsimage_imagewithlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSImage_NSImage, locale, arginfo_appkit_ns_nsimage_nsimage_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
