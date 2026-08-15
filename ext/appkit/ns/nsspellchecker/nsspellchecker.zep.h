
extern zend_class_entry *appkit_ns_nsspellchecker_nsspellchecker_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSpellChecker_NSSpellChecker);

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, shared);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, destroy);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, uniqueSpellDocumentTag);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, checkSpelling);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, countWordsInString);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoreWord);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsCount);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsAt);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, updateSpellingPanelWithMisspelledWord);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, updatePanels);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, isAutomaticSpellingCorrectionEnabled);
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, setAutomaticSpellingCorrectionEnabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_shared, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_uniquespelldocumenttag, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_checkspelling, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, startingAt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_countwordsinstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, language, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoreword, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, word, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoredwordscount, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoredwordsat, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_updatespellingpanelwithmisspelledword, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, word, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_updatepanels, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_isautomaticspellingcorrectionenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsspellchecker_nsspellchecker_setautomaticspellingcorrectionenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, checker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsspellchecker_nsspellchecker_method_entry) {
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, shared, arginfo_appkit_ns_nsspellchecker_nsspellchecker_shared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, destroy, arginfo_appkit_ns_nsspellchecker_nsspellchecker_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, uniqueSpellDocumentTag, arginfo_appkit_ns_nsspellchecker_nsspellchecker_uniquespelldocumenttag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, checkSpelling, arginfo_appkit_ns_nsspellchecker_nsspellchecker_checkspelling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, countWordsInString, arginfo_appkit_ns_nsspellchecker_nsspellchecker_countwordsinstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoreWord, arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoreword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsCount, arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoredwordscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsAt, arginfo_appkit_ns_nsspellchecker_nsspellchecker_ignoredwordsat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, updateSpellingPanelWithMisspelledWord, arginfo_appkit_ns_nsspellchecker_nsspellchecker_updatespellingpanelwithmisspelledword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, updatePanels, arginfo_appkit_ns_nsspellchecker_nsspellchecker_updatepanels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, isAutomaticSpellingCorrectionEnabled, arginfo_appkit_ns_nsspellchecker_nsspellchecker_isautomaticspellingcorrectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSpellChecker_NSSpellChecker, setAutomaticSpellingCorrectionEnabled, arginfo_appkit_ns_nsspellchecker_nsspellchecker_setautomaticspellingcorrectionenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
