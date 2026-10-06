/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c6a4dc2fd5f71bf515672517ddc1e1520f004212 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ObjCDelegate___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCDelegate_on, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handler, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCDelegate_off, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, selector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCDelegate_protocolName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_ObjCTarget___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handler, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_ObjCObserver___construct arginfo_class_ObjCTarget___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCObserver_observe, 0, 3, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, object, NSObject, 0)
	ZEND_ARG_TYPE_INFO(0, keyPath, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCObserver_stop, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, object, NSObject, 0)
	ZEND_ARG_TYPE_INFO(0, keyPath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_ObjCOpenGLView_initWithFramePixelFormatDraw, 0, 3, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
	ZEND_ARG_OBJ_INFO(0, format, NSOpenGLPixelFormat, 1)
	ZEND_ARG_TYPE_INFO(0, draw, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(ObjCDelegate, __construct);
ZEND_METHOD(ObjCDelegate, on);
ZEND_METHOD(ObjCDelegate, off);
ZEND_METHOD(ObjCDelegate, protocolName);
ZEND_METHOD(ObjCTarget, __construct);
ZEND_METHOD(ObjCObserver, __construct);
ZEND_METHOD(ObjCObserver, observe);
ZEND_METHOD(ObjCObserver, stop);
ZEND_METHOD(ObjCOpenGLView, initWithFramePixelFormatDraw);

static const zend_function_entry class_ObjCDelegate_methods[] = {
	ZEND_ME(ObjCDelegate, __construct, arginfo_class_ObjCDelegate___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjCDelegate, on, arginfo_class_ObjCDelegate_on, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjCDelegate, off, arginfo_class_ObjCDelegate_off, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjCDelegate, protocolName, arginfo_class_ObjCDelegate_protocolName, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ObjCTarget_methods[] = {
	ZEND_ME(ObjCTarget, __construct, arginfo_class_ObjCTarget___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ObjCObserver_methods[] = {
	ZEND_ME(ObjCObserver, __construct, arginfo_class_ObjCObserver___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjCObserver, observe, arginfo_class_ObjCObserver_observe, ZEND_ACC_PUBLIC)
	ZEND_ME(ObjCObserver, stop, arginfo_class_ObjCObserver_stop, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_ObjCOpenGLView_methods[] = {
	ZEND_ME(ObjCOpenGLView, initWithFramePixelFormatDraw, arginfo_class_ObjCOpenGLView_initWithFramePixelFormatDraw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_ObjCDelegate(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ObjCDelegate", class_ObjCDelegate_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_ObjCTarget(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ObjCTarget", class_ObjCTarget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval const_ACTION_value;
	zend_string *const_ACTION_value_str = zend_string_init("action:", strlen("action:"), 1);
	ZVAL_STR(&const_ACTION_value, const_ACTION_value_str);
	zend_string *const_ACTION_name = zend_string_init_interned("ACTION", sizeof("ACTION") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ACTION_name, &const_ACTION_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(const_ACTION_name);

	return class_entry;
}

static zend_class_entry *register_class_ObjCObserver(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ObjCObserver", class_ObjCObserver_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval const_OPTION_NEW_value;
	ZVAL_LONG(&const_OPTION_NEW_value, 1);
	zend_string *const_OPTION_NEW_name = zend_string_init_interned("OPTION_NEW", sizeof("OPTION_NEW") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_OPTION_NEW_name, &const_OPTION_NEW_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_OPTION_NEW_name);

	zval const_OPTION_OLD_value;
	ZVAL_LONG(&const_OPTION_OLD_value, 2);
	zend_string *const_OPTION_OLD_name = zend_string_init_interned("OPTION_OLD", sizeof("OPTION_OLD") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_OPTION_OLD_name, &const_OPTION_OLD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_OPTION_OLD_name);

	zval const_OPTION_INITIAL_value;
	ZVAL_LONG(&const_OPTION_INITIAL_value, 4);
	zend_string *const_OPTION_INITIAL_name = zend_string_init_interned("OPTION_INITIAL", sizeof("OPTION_INITIAL") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_OPTION_INITIAL_name, &const_OPTION_INITIAL_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_OPTION_INITIAL_name);

	return class_entry;
}

static zend_class_entry *register_class_ObjCOpenGLView(zend_class_entry *class_entry_NSOpenGLView)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "ObjCOpenGLView", class_ObjCOpenGLView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSOpenGLView, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
