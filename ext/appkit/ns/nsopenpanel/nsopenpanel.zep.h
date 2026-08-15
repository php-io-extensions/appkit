
extern zend_class_entry *appkit_ns_nsopenpanel_nsopenpanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenPanel_NSOpenPanel);

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, runModal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsopenpanel_nsopenpanel_runmodal, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsopenpanel_nsopenpanel_method_entry) {
	PHP_ME(AppKit_NS_NSOpenPanel_NSOpenPanel, runModal, arginfo_appkit_ns_nsopenpanel_nsopenpanel_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
