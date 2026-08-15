
extern zend_class_entry *appkit_ns_nscolorsampler_nscolorsampler_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSColorSampler_NSColorSampler);

PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, create);
PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, destroy);
PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, show);
PHP_METHOD(AppKit_NS_NSColorSampler_NSColorSampler, poll);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorsampler_nscolorsampler_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorsampler_nscolorsampler_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sampler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorsampler_nscolorsampler_show, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, sampler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscolorsampler_nscolorsampler_poll, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, sampler, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscolorsampler_nscolorsampler_method_entry) {
	PHP_ME(AppKit_NS_NSColorSampler_NSColorSampler, create, arginfo_appkit_ns_nscolorsampler_nscolorsampler_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSampler_NSColorSampler, destroy, arginfo_appkit_ns_nscolorsampler_nscolorsampler_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSampler_NSColorSampler, show, arginfo_appkit_ns_nscolorsampler_nscolorsampler_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSColorSampler_NSColorSampler, poll, arginfo_appkit_ns_nscolorsampler_nscolorsampler_poll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
