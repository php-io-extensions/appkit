
extern zend_class_entry *appkit_ns_nsfontdescriptor_nsfontdescriptor_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSFontDescriptor_NSFontDescriptor);

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, wrap);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, destroy);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withName);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, preferredForTextStyle);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, postscriptName);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, pointSize);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, symbolicTraits);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, requiresFontAssetRequest);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSymbolicTraits);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSize);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFamily);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFace);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withDesign);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingCount);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingAt);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingFirst);
PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, nsFontDescriptor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsFontDescriptorPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_preferredfortextstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, styleKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_postscriptname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_pointsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_symbolictraits, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_requiresfontassetrequest, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withsymbolictraits, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withfamily, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withface, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, face, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withdesign, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, designKind, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingfirst, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_nsfontdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, descriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsfontdescriptor_nsfontdescriptor_method_entry) {
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, wrap, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, destroy, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withName, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, preferredForTextStyle, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_preferredfortextstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, postscriptName, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_postscriptname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, pointSize, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_pointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, symbolicTraits, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_symbolictraits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, requiresFontAssetRequest, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_requiresfontassetrequest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSymbolicTraits, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withsymbolictraits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSize, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFamily, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFace, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withDesign, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_withdesign, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingCount, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingAt, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingFirst, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_matchingfirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSFontDescriptor_NSFontDescriptor, nsFontDescriptor, arginfo_appkit_ns_nsfontdescriptor_nsfontdescriptor_nsfontdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
