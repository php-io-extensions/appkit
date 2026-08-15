
extern zend_class_entry *appkit_ns_nstextelement_nstextelement_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextElement_NSTextElement);

PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, wrap);
PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, destroy);
PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, isRepresentedElement);
PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, childElementsCount);
PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, elementRangePtr);
PHP_METHOD(AppKit_NS_NSTextElement_NSTextElement, textContentManager);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextElementPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_isrepresentedelement, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_childelementscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_elementrangeptr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextelement_nstextelement_textcontentmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextelement_nstextelement_method_entry) {
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, wrap, arginfo_appkit_ns_nstextelement_nstextelement_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, destroy, arginfo_appkit_ns_nstextelement_nstextelement_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, isRepresentedElement, arginfo_appkit_ns_nstextelement_nstextelement_isrepresentedelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, childElementsCount, arginfo_appkit_ns_nstextelement_nstextelement_childelementscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, elementRangePtr, arginfo_appkit_ns_nstextelement_nstextelement_elementrangeptr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextElement_NSTextElement, textContentManager, arginfo_appkit_ns_nstextelement_nstextelement_textcontentmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
