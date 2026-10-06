#include "runtime.h"
#include "../stubs/NSObject_arginfo.h"
#include "../stubs/NSResponder_arginfo.h"

#include <objc/runtime.h>

void appkit_register_NSObject(void)
{
	appkit_ce_NSObject = register_class_NSObject();
	appkit_object_setup(appkit_ce_NSObject);
	appkit_map_objc_class("NSObject", appkit_ce_NSObject);
}

void appkit_register_NSResponder(void)
{
	appkit_ce_NSResponder = register_class_NSResponder(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_NSResponder);
	appkit_map_objc_class("NSResponder", appkit_ce_NSResponder);
}

ZEND_METHOD(NSResponder, nextResponder)
{
	ZEND_PARSE_PARAMETERS_NONE();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [(NSResponder *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)) nextResponder]);
	APPKIT_END
}

ZEND_METHOD(NSResponder, setNextResponder)
{
	zend_object *next = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(next, appkit_ce_NSResponder)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[(NSResponder *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)) setNextResponder:(NSResponder *) (next != NULL ? APPKIT_ID(next) : nil)];
	APPKIT_END
}

ZEND_METHOD(NSObject, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(NSObject, className)
{
	ZEND_PARSE_PARAMETERS_NONE();

	/* -class, not object_getClass(): key-value observing swaps in a subclass the program never sees. */
	RETURN_STRING(class_getName([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) class]));
}

ZEND_METHOD(NSObject, isKindOfClass)
{
	zend_string *class_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(class_name)
	ZEND_PARSE_PARAMETERS_END();

	Class cls = objc_getClass(ZSTR_VAL(class_name));

	if (cls == Nil) {
		RETURN_FALSE;
	}

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) isKindOfClass:cls]);
	APPKIT_END
}

ZEND_METHOD(NSObject, respondsToSelector)
{
	zend_string *selector;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(selector)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) respondsToSelector:sel_registerName(ZSTR_VAL(selector))]);
	APPKIT_END
}

ZEND_METHOD(NSObject, isEqual)
{
	zend_object *other = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(other, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETURN_BOOL([APPKIT_ID(Z_OBJ_P(ZEND_THIS)) isEqual:(other != NULL ? APPKIT_ID(other) : nil)]);
	APPKIT_END
}

ZEND_METHOD(NSObject, hash)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_LONG((zend_long) [APPKIT_ID(Z_OBJ_P(ZEND_THIS)) hash]);
	APPKIT_END
}

ZEND_METHOD(NSObject, description)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETURN_STR(appkit_zend_string((CFStringRef) [APPKIT_ID(Z_OBJ_P(ZEND_THIS)) description]));
	APPKIT_END
}

ZEND_METHOD(NSObject, pointer)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) (uintptr_t) APPKIT_ID(Z_OBJ_P(ZEND_THIS)));
}

/*
 * "an NSView", "a CALayer": the article a class name takes, read as it is said
 * aloud. A leading capital whose letter name starts with a vowel sound (A, E, F,
 * H, I, L, M, N, O, R, S, X) or a lowercase vowel takes "an".
 */
static const char *appkit_article(const char *name)
{
	return name[0] != '\0' && strchr("AEFHILMNORSXaeiou", name[0]) != NULL ? "an" : "a";
}

ZEND_METHOD(NSObject, fromPointer)
{
	zend_long pointer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pointer)
	ZEND_PARSE_PARAMETERS_END();
	if (pointer == 0) {
		zend_argument_value_error(1, "must not be a null address");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		id object = (id) (uintptr_t) pointer;
		zend_class_entry *called = zend_get_called_scope(execute_data);
		appkit_box_objc(return_value, object);
		if (!instanceof_function(Z_OBJCE_P(return_value), called)) {
			/* -class, as className() reads it: key-value observing swaps in a subclass the program never sees. */
			const char *actual = class_getName([object class]);
			zval_ptr_dtor(return_value);
			ZVAL_NULL(return_value);
			zend_type_error("The object at %p is %s %s, not %s %s",
				(void *) (uintptr_t) pointer,
				appkit_article(actual), actual,
				appkit_article(ZSTR_VAL(called->name)), ZSTR_VAL(called->name));
			RETURN_THROWS();
		}
	APPKIT_END
}
