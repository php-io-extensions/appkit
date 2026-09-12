
extern zend_class_entry *appkit_ns_nsindexset_nsindexset_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSIndexSet_NSIndexSet);

PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, indexSet);
PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, indexSetWithIndex);
PHP_METHOD(AppKit_NS_NSIndexSet_NSIndexSet, containsIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsindexset_nsindexset_indexset, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsindexset_nsindexset_indexsetwithindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsindexset_nsindexset_containsindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsindexset_nsindexset_method_entry) {
	PHP_ME(AppKit_NS_NSIndexSet_NSIndexSet, indexSet, arginfo_appkit_ns_nsindexset_nsindexset_indexset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSIndexSet_NSIndexSet, indexSetWithIndex, arginfo_appkit_ns_nsindexset_nsindexset_indexsetwithindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSIndexSet_NSIndexSet, containsIndex, arginfo_appkit_ns_nsindexset_nsindexset_containsindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
