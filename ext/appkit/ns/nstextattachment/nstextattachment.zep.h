
extern zend_class_entry *appkit_ns_nstextattachment_nstextattachment_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextAttachment_NSTextAttachment);

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, create);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, createWithData);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, wrap);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, destroy);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setFileType);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getFileType);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setImage);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getImage);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setBounds);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getBounds);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setAttachmentCell);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getAttachmentCell);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setLineLayoutPadding);
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getLineLayoutPadding);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_create, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_createwithdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTextAttachmentPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_setfiletype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_getfiletype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_setimage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_getimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_setbounds, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_getbounds, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_setattachmentcell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_getattachmentcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_setlinelayoutpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextattachment_nstextattachment_getlinelayoutpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, attachment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextattachment_nstextattachment_method_entry) {
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, create, arginfo_appkit_ns_nstextattachment_nstextattachment_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, createWithData, arginfo_appkit_ns_nstextattachment_nstextattachment_createwithdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, wrap, arginfo_appkit_ns_nstextattachment_nstextattachment_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, destroy, arginfo_appkit_ns_nstextattachment_nstextattachment_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, setFileType, arginfo_appkit_ns_nstextattachment_nstextattachment_setfiletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, getFileType, arginfo_appkit_ns_nstextattachment_nstextattachment_getfiletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, setImage, arginfo_appkit_ns_nstextattachment_nstextattachment_setimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, getImage, arginfo_appkit_ns_nstextattachment_nstextattachment_getimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, setBounds, arginfo_appkit_ns_nstextattachment_nstextattachment_setbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, getBounds, arginfo_appkit_ns_nstextattachment_nstextattachment_getbounds, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, setAttachmentCell, arginfo_appkit_ns_nstextattachment_nstextattachment_setattachmentcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, getAttachmentCell, arginfo_appkit_ns_nstextattachment_nstextattachment_getattachmentcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, setLineLayoutPadding, arginfo_appkit_ns_nstextattachment_nstextattachment_setlinelayoutpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextAttachment_NSTextAttachment, getLineLayoutPadding, arginfo_appkit_ns_nstextattachment_nstextattachment_getlinelayoutpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
