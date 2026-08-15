
extern zend_class_entry *appkit_ns_nsfontmanager_nsfontmanager_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFontManager_NSFontManager);

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, shared);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, destroy);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, isMultiple);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, selectedFont);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, setSelectedFont);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontWithFamily);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, traitsOfFont);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, weightOfFont);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontsCount);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontAt);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontFamiliesCount);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontFamilyAt);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFont);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToSize);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToFace);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToFamily);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToHaveTrait);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToNotHaveTrait);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertWeight);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, isEnabled);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, setEnabled);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, currentFontAction);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontPanel);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, orderFrontFontPanel);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontNamedHasTraits);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontNamesWithTraitsCount);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontNameWithTraitsAt);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, localizedNameForFamily);
PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, nsFontManager);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_ismultiple, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_selectedfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_setselectedfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isMultiple, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontwithfamily, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_traitsoffont, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_weightoffont, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontfamiliescount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontfamilyat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfont, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttosize, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttoface, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, face, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttofamily, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttohavetrait, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trait, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttonothavetrait, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trait, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertweight, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, up, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_currentfontaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontpanel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, create, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_orderfrontfontpanel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontnamedhastraits, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontnameswithtraitscount, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontnamewithtraitsat, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_localizednameforfamily, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, face, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontmanager_nsfontmanager_nsfontmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsfontmanager_nsfontmanager_method_entry) {
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, shared, arginfo_appkit_ns_nsfontmanager_nsfontmanager_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, destroy, arginfo_appkit_ns_nsfontmanager_nsfontmanager_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, isMultiple, arginfo_appkit_ns_nsfontmanager_nsfontmanager_ismultiple, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, selectedFont, arginfo_appkit_ns_nsfontmanager_nsfontmanager_selectedfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, setSelectedFont, arginfo_appkit_ns_nsfontmanager_nsfontmanager_setselectedfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, fontWithFamily, arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontwithfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, traitsOfFont, arginfo_appkit_ns_nsfontmanager_nsfontmanager_traitsoffont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, weightOfFont, arginfo_appkit_ns_nsfontmanager_nsfontmanager_weightoffont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontsCount, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontAt, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontFamiliesCount, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontfamiliescount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontFamilyAt, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontfamilyat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFont, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFontToSize, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttosize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFontToFace, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttoface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFontToFamily, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttofamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFontToHaveTrait, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttohavetrait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertFontToNotHaveTrait, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertfonttonothavetrait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, convertWeight, arginfo_appkit_ns_nsfontmanager_nsfontmanager_convertweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, isEnabled, arginfo_appkit_ns_nsfontmanager_nsfontmanager_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, setEnabled, arginfo_appkit_ns_nsfontmanager_nsfontmanager_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, currentFontAction, arginfo_appkit_ns_nsfontmanager_nsfontmanager_currentfontaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, fontPanel, arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, orderFrontFontPanel, arginfo_appkit_ns_nsfontmanager_nsfontmanager_orderfrontfontpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, fontNamedHasTraits, arginfo_appkit_ns_nsfontmanager_nsfontmanager_fontnamedhastraits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontNamesWithTraitsCount, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontnameswithtraitscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, availableFontNameWithTraitsAt, arginfo_appkit_ns_nsfontmanager_nsfontmanager_availablefontnamewithtraitsat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, localizedNameForFamily, arginfo_appkit_ns_nsfontmanager_nsfontmanager_localizednameforfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontManager_NSFontManager, nsFontManager, arginfo_appkit_ns_nsfontmanager_nsfontmanager_nsfontmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
