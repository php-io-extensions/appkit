
extern zend_class_entry *appkit_ns_nssavepanel_nssavepanel_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSavePanel_NSSavePanel);

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, runModal);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssavepanel_nssavepanel_runmodal, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssavepanel_nssavepanel_method_entry) {
	PHP_ME(AppKit_NS_NSSavePanel_NSSavePanel, runModal, arginfo_appkit_ns_nssavepanel_nssavepanel_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
