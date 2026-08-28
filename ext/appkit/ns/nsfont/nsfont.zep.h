
extern zend_class_entry *appkit_ns_nsfont_nsfont_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFont_NSFont);

PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithNameSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithDescriptorSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithDescriptorTextTransform);
PHP_METHOD(AppKit_NS_NSFont_NSFont, userFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, userFixedPitchFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, boldSystemFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, titleBarFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, menuFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, menuBarFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, messageFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, paletteFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, toolTipsFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, controlContentFontOfSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedDigitSystemFontOfSizeWeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeightWidth);
PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedSystemFontOfSizeWeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontWithSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, smallSystemFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, pointSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, familyName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, displayName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontDescriptor);
PHP_METHOD(AppKit_NS_NSFont_NSFont, textTransform);
PHP_METHOD(AppKit_NS_NSFont_NSFont, numberOfGlyphs);
PHP_METHOD(AppKit_NS_NSFont_NSFont, mostCompatibleStringEncoding);
PHP_METHOD(AppKit_NS_NSFont_NSFont, coveredCharacterSet);
PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, maximumAdvancement);
PHP_METHOD(AppKit_NS_NSFont_NSFont, ascender);
PHP_METHOD(AppKit_NS_NSFont_NSFont, descender);
PHP_METHOD(AppKit_NS_NSFont_NSFont, leading);
PHP_METHOD(AppKit_NS_NSFont_NSFont, underlinePosition);
PHP_METHOD(AppKit_NS_NSFont_NSFont, underlineThickness);
PHP_METHOD(AppKit_NS_NSFont_NSFont, italicAngle);
PHP_METHOD(AppKit_NS_NSFont_NSFont, capHeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, xHeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, isFixedPitch);
PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForCGGlyph);
PHP_METHOD(AppKit_NS_NSFont_NSFont, advancementForCGGlyph);
PHP_METHOD(AppKit_NS_NSFont_NSFont, set);
PHP_METHOD(AppKit_NS_NSFont_NSFont, setInContext);
PHP_METHOD(AppKit_NS_NSFont_NSFont, verticalFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, isVertical);
PHP_METHOD(AppKit_NS_NSFont_NSFont, glyphWithName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRectForGlyph);
PHP_METHOD(AppKit_NS_NSFont_NSFont, advancementForGlyph);
PHP_METHOD(AppKit_NS_NSFont_NSFont, printerFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, screenFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, screenFontWithRenderingMode);
PHP_METHOD(AppKit_NS_NSFont_NSFont, renderingMode);
PHP_METHOD(AppKit_NS_NSFont_NSFont, preferredFontForTextStyleOptions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontwithnamesize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontwithdescriptorsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontDescriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontwithdescriptortexttransform, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontDescriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textTransform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_userfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_userfixedpitchfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_setuserfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_setuserfixedpitchfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_boldsystemfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_labelfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_titlebarfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_menufontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_menubarfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_messagefontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_palettefontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_tooltipsfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_controlcontentfontofsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemfontofsizeweight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_monospaceddigitsystemfontofsizeweight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemfontofsizeweightwidth, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_monospacedsystemfontofsizeweight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontwithsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemfontsize, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_smallsystemfontsize, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_labelfontsize, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemfontsizeforcontrolsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, controlSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_pointsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_familyname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_displayname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_texttransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_numberofglyphs, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_mostcompatiblestringencoding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_coveredcharacterset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_boundingrectforfont, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_maximumadvancement, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_ascender, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_descender, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_leading, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_underlineposition, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_underlinethickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_italicangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_capheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_xheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_isfixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_boundingrectforcgglyph, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_advancementforcgglyph, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_set, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_setincontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, graphicsContext, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_verticalfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_glyphwithname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_boundingrectforglyph, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_advancementforglyph, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyph, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_printerfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_screenfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_screenfontwithrenderingmode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, renderingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_renderingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_preferredfontfortextstyleoptions, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsfont_nsfont_method_entry) {
	PHP_ME(AppKit_NS_NSFont_NSFont, fontWithNameSize, arginfo_appkit_ns_nsfont_nsfont_fontwithnamesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontWithDescriptorSize, arginfo_appkit_ns_nsfont_nsfont_fontwithdescriptorsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontWithDescriptorTextTransform, arginfo_appkit_ns_nsfont_nsfont_fontwithdescriptortexttransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, userFontOfSize, arginfo_appkit_ns_nsfont_nsfont_userfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, userFixedPitchFontOfSize, arginfo_appkit_ns_nsfont_nsfont_userfixedpitchfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, setUserFont, arginfo_appkit_ns_nsfont_nsfont_setuserfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont, arginfo_appkit_ns_nsfont_nsfont_setuserfixedpitchfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontOfSize, arginfo_appkit_ns_nsfont_nsfont_systemfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, boldSystemFontOfSize, arginfo_appkit_ns_nsfont_nsfont_boldsystemfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, labelFontOfSize, arginfo_appkit_ns_nsfont_nsfont_labelfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, titleBarFontOfSize, arginfo_appkit_ns_nsfont_nsfont_titlebarfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, menuFontOfSize, arginfo_appkit_ns_nsfont_nsfont_menufontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, menuBarFontOfSize, arginfo_appkit_ns_nsfont_nsfont_menubarfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, messageFontOfSize, arginfo_appkit_ns_nsfont_nsfont_messagefontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, paletteFontOfSize, arginfo_appkit_ns_nsfont_nsfont_palettefontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, toolTipsFontOfSize, arginfo_appkit_ns_nsfont_nsfont_tooltipsfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, controlContentFontOfSize, arginfo_appkit_ns_nsfont_nsfont_controlcontentfontofsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeight, arginfo_appkit_ns_nsfont_nsfont_systemfontofsizeweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, monospacedDigitSystemFontOfSizeWeight, arginfo_appkit_ns_nsfont_nsfont_monospaceddigitsystemfontofsizeweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontOfSizeWeightWidth, arginfo_appkit_ns_nsfont_nsfont_systemfontofsizeweightwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, monospacedSystemFontOfSizeWeight, arginfo_appkit_ns_nsfont_nsfont_monospacedsystemfontofsizeweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontWithSize, arginfo_appkit_ns_nsfont_nsfont_fontwithsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontSize, arginfo_appkit_ns_nsfont_nsfont_systemfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, smallSystemFontSize, arginfo_appkit_ns_nsfont_nsfont_smallsystemfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, labelFontSize, arginfo_appkit_ns_nsfont_nsfont_labelfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize, arginfo_appkit_ns_nsfont_nsfont_systemfontsizeforcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontName, arginfo_appkit_ns_nsfont_nsfont_fontname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, pointSize, arginfo_appkit_ns_nsfont_nsfont_pointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, familyName, arginfo_appkit_ns_nsfont_nsfont_familyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, displayName, arginfo_appkit_ns_nsfont_nsfont_displayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontDescriptor, arginfo_appkit_ns_nsfont_nsfont_fontdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, textTransform, arginfo_appkit_ns_nsfont_nsfont_texttransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, numberOfGlyphs, arginfo_appkit_ns_nsfont_nsfont_numberofglyphs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, mostCompatibleStringEncoding, arginfo_appkit_ns_nsfont_nsfont_mostcompatiblestringencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, coveredCharacterSet, arginfo_appkit_ns_nsfont_nsfont_coveredcharacterset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, boundingRectForFont, arginfo_appkit_ns_nsfont_nsfont_boundingrectforfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, maximumAdvancement, arginfo_appkit_ns_nsfont_nsfont_maximumadvancement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, ascender, arginfo_appkit_ns_nsfont_nsfont_ascender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, descender, arginfo_appkit_ns_nsfont_nsfont_descender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, leading, arginfo_appkit_ns_nsfont_nsfont_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, underlinePosition, arginfo_appkit_ns_nsfont_nsfont_underlineposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, underlineThickness, arginfo_appkit_ns_nsfont_nsfont_underlinethickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, italicAngle, arginfo_appkit_ns_nsfont_nsfont_italicangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, capHeight, arginfo_appkit_ns_nsfont_nsfont_capheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, xHeight, arginfo_appkit_ns_nsfont_nsfont_xheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, isFixedPitch, arginfo_appkit_ns_nsfont_nsfont_isfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, boundingRectForCGGlyph, arginfo_appkit_ns_nsfont_nsfont_boundingrectforcgglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, advancementForCGGlyph, arginfo_appkit_ns_nsfont_nsfont_advancementforcgglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, set, arginfo_appkit_ns_nsfont_nsfont_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, setInContext, arginfo_appkit_ns_nsfont_nsfont_setincontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, verticalFont, arginfo_appkit_ns_nsfont_nsfont_verticalfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, isVertical, arginfo_appkit_ns_nsfont_nsfont_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, glyphWithName, arginfo_appkit_ns_nsfont_nsfont_glyphwithname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, boundingRectForGlyph, arginfo_appkit_ns_nsfont_nsfont_boundingrectforglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, advancementForGlyph, arginfo_appkit_ns_nsfont_nsfont_advancementforglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, printerFont, arginfo_appkit_ns_nsfont_nsfont_printerfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, screenFont, arginfo_appkit_ns_nsfont_nsfont_screenfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, screenFontWithRenderingMode, arginfo_appkit_ns_nsfont_nsfont_screenfontwithrenderingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, renderingMode, arginfo_appkit_ns_nsfont_nsfont_renderingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, preferredFontForTextStyleOptions, arginfo_appkit_ns_nsfont_nsfont_preferredfontfortextstyleoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
