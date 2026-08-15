
extern zend_class_entry *appkit_ns_nsfont_nsfont_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFont_NSFont);

PHP_METHOD(AppKit_NS_NSFont_NSFont, wrap);
PHP_METHOD(AppKit_NS_NSFont_NSFont, destroy);
PHP_METHOD(AppKit_NS_NSFont_NSFont, withName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, withDescriptor);
PHP_METHOD(AppKit_NS_NSFont_NSFont, meta);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemWeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemWeightWidth);
PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedDigitSystem);
PHP_METHOD(AppKit_NS_NSFont_NSFont, monospacedSystem);
PHP_METHOD(AppKit_NS_NSFont_NSFont, preferredForTextStyle);
PHP_METHOD(AppKit_NS_NSFont_NSFont, withSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, smallSystemFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, labelFontSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, familyName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, displayName);
PHP_METHOD(AppKit_NS_NSFont_NSFont, pointSize);
PHP_METHOD(AppKit_NS_NSFont_NSFont, fontDescriptor);
PHP_METHOD(AppKit_NS_NSFont_NSFont, numberOfGlyphs);
PHP_METHOD(AppKit_NS_NSFont_NSFont, isFixedPitch);
PHP_METHOD(AppKit_NS_NSFont_NSFont, isVertical);
PHP_METHOD(AppKit_NS_NSFont_NSFont, verticalFont);
PHP_METHOD(AppKit_NS_NSFont_NSFont, ascender);
PHP_METHOD(AppKit_NS_NSFont_NSFont, descender);
PHP_METHOD(AppKit_NS_NSFont_NSFont, leading);
PHP_METHOD(AppKit_NS_NSFont_NSFont, underlinePosition);
PHP_METHOD(AppKit_NS_NSFont_NSFont, underlineThickness);
PHP_METHOD(AppKit_NS_NSFont_NSFont, italicAngle);
PHP_METHOD(AppKit_NS_NSFont_NSFont, capHeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, xHeight);
PHP_METHOD(AppKit_NS_NSFont_NSFont, boundingRect);
PHP_METHOD(AppKit_NS_NSFont_NSFont, maximumAdvancement);
PHP_METHOD(AppKit_NS_NSFont_NSFont, set);
PHP_METHOD(AppKit_NS_NSFont_NSFont, nsFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsFontPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_withname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_withdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_meta, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kind, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemweight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weightKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_systemweightwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weightKind, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widthKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_monospaceddigitsystem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weightKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_monospacedsystem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weightKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_preferredfortextstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, styleKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_withsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_setuserfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_setuserfixedpitchfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
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
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_familyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_displayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_pointsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_fontdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_numberofglyphs, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_isfixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_verticalfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_ascender, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_descender, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_leading, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_underlineposition, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_underlinethickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_italicangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_capheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_xheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_maximumadvancement, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_set, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfont_nsfont_nsfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsfont_nsfont_method_entry) {
	PHP_ME(AppKit_NS_NSFont_NSFont, wrap, arginfo_appkit_ns_nsfont_nsfont_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, destroy, arginfo_appkit_ns_nsfont_nsfont_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, withName, arginfo_appkit_ns_nsfont_nsfont_withname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, withDescriptor, arginfo_appkit_ns_nsfont_nsfont_withdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, meta, arginfo_appkit_ns_nsfont_nsfont_meta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemWeight, arginfo_appkit_ns_nsfont_nsfont_systemweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemWeightWidth, arginfo_appkit_ns_nsfont_nsfont_systemweightwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, monospacedDigitSystem, arginfo_appkit_ns_nsfont_nsfont_monospaceddigitsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, monospacedSystem, arginfo_appkit_ns_nsfont_nsfont_monospacedsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, preferredForTextStyle, arginfo_appkit_ns_nsfont_nsfont_preferredfortextstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, withSize, arginfo_appkit_ns_nsfont_nsfont_withsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, setUserFont, arginfo_appkit_ns_nsfont_nsfont_setuserfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, setUserFixedPitchFont, arginfo_appkit_ns_nsfont_nsfont_setuserfixedpitchfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontSize, arginfo_appkit_ns_nsfont_nsfont_systemfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, smallSystemFontSize, arginfo_appkit_ns_nsfont_nsfont_smallsystemfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, labelFontSize, arginfo_appkit_ns_nsfont_nsfont_labelfontsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, systemFontSizeForControlSize, arginfo_appkit_ns_nsfont_nsfont_systemfontsizeforcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontName, arginfo_appkit_ns_nsfont_nsfont_fontname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, familyName, arginfo_appkit_ns_nsfont_nsfont_familyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, displayName, arginfo_appkit_ns_nsfont_nsfont_displayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, pointSize, arginfo_appkit_ns_nsfont_nsfont_pointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, fontDescriptor, arginfo_appkit_ns_nsfont_nsfont_fontdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, numberOfGlyphs, arginfo_appkit_ns_nsfont_nsfont_numberofglyphs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, isFixedPitch, arginfo_appkit_ns_nsfont_nsfont_isfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, isVertical, arginfo_appkit_ns_nsfont_nsfont_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, verticalFont, arginfo_appkit_ns_nsfont_nsfont_verticalfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, ascender, arginfo_appkit_ns_nsfont_nsfont_ascender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, descender, arginfo_appkit_ns_nsfont_nsfont_descender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, leading, arginfo_appkit_ns_nsfont_nsfont_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, underlinePosition, arginfo_appkit_ns_nsfont_nsfont_underlineposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, underlineThickness, arginfo_appkit_ns_nsfont_nsfont_underlinethickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, italicAngle, arginfo_appkit_ns_nsfont_nsfont_italicangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, capHeight, arginfo_appkit_ns_nsfont_nsfont_capheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, xHeight, arginfo_appkit_ns_nsfont_nsfont_xheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, boundingRect, arginfo_appkit_ns_nsfont_nsfont_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, maximumAdvancement, arginfo_appkit_ns_nsfont_nsfont_maximumadvancement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, set, arginfo_appkit_ns_nsfont_nsfont_set, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFont_NSFont, nsFont, arginfo_appkit_ns_nsfont_nsfont_nsfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
