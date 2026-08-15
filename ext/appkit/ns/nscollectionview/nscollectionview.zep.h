
extern zend_class_entry *appkit_ns_nscollectionview_nscollectionview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSCollectionView_NSCollectionView);

PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, create);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, destroy);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, clear);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, addItem);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, itemCount);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, getSelected);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setSelected);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, pollChange);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, setLayout);
PHP_METHOD(AppKit_NS_NSCollectionView_NSCollectionView, getLayout);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_itemcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_getselected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_setlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscollectionview_nscollectionview_getlayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscollectionview_nscollectionview_method_entry) {
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, create, arginfo_appkit_ns_nscollectionview_nscollectionview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, destroy, arginfo_appkit_ns_nscollectionview_nscollectionview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, clear, arginfo_appkit_ns_nscollectionview_nscollectionview_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, addItem, arginfo_appkit_ns_nscollectionview_nscollectionview_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, itemCount, arginfo_appkit_ns_nscollectionview_nscollectionview_itemcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, getSelected, arginfo_appkit_ns_nscollectionview_nscollectionview_getselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setSelected, arginfo_appkit_ns_nscollectionview_nscollectionview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, pollChange, arginfo_appkit_ns_nscollectionview_nscollectionview_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, setLayout, arginfo_appkit_ns_nscollectionview_nscollectionview_setlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSCollectionView_NSCollectionView, getLayout, arginfo_appkit_ns_nscollectionview_nscollectionview_getlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
