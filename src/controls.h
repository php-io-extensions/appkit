/*
 * The method-body macros every control binding is written with: one line per
 * native accessor. Each expands to parse → main-thread guard → guarded body.
 */

#ifndef APPKIT_CONTROLS_H
#define APPKIT_CONTROLS_H

#include "runtime.h"

#define APPKIT_MAP(name, parent) \
	appkit_ce_##name = register_class_##name(parent); \
	appkit_object_setup(appkit_ce_##name); \
	appkit_map_objc_class(#name, appkit_ce_##name)

#define SELF(T) ((T *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))
#define OPTIONAL_ID(zobj) ((zobj) != NULL ? APPKIT_ID(zobj) : nil)
/* The class a static constructor was called on, so a subclass gets an instance of itself. */
#define CALLED ((id) appkit_called_class(execute_data))
#define SELECTOR_OR_NULL(str) ((str) != NULL ? sel_registerName(ZSTR_VAL(str)) : NULL)

/* Every method: parse, main-thread guard, body inside the exception guard. */
#define METHOD(cls, name, parse, body) \
ZEND_METHOD(cls, name) { parse APPKIT_REQUIRE_MAIN_THREAD(); APPKIT_BEGIN body APPKIT_END }

#define PARSE_NONE ZEND_PARSE_PARAMETERS_NONE();
#define PARSE_BOOL bool v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_BOOL(v) ZEND_PARSE_PARAMETERS_END();
#define PARSE_DOUBLE double v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_DOUBLE(v) ZEND_PARSE_PARAMETERS_END();
#define PARSE_LONG zend_long v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_LONG(v) ZEND_PARSE_PARAMETERS_END();
#define PARSE_STR zend_string *v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_STR(v) ZEND_PARSE_PARAMETERS_END();
#define PARSE_STR_OR_NULL zend_string *v = NULL; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_STR_OR_NULL(v) ZEND_PARSE_PARAMETERS_END();
#define PARSE_OBJ(ce) zend_object *v; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS(v, ce) ZEND_PARSE_PARAMETERS_END();
#define PARSE_OBJ_OR_NULL(ce) zend_object *v = NULL; ZEND_PARSE_PARAMETERS_START(1, 1) Z_PARAM_OBJ_OF_CLASS_OR_NULL(v, ce) ZEND_PARSE_PARAMETERS_END();

#define VOID_METHOD(cls, T, name, sel)            METHOD(cls, name, PARSE_NONE, [SELF(T) sel];)
#define BOOL_GET(cls, T, name, sel)               METHOD(cls, name, PARSE_NONE, RETURN_BOOL([SELF(T) sel]);)
#define BOOL_SET(cls, T, name, sel)               METHOD(cls, name, PARSE_BOOL, [SELF(T) sel:v];)
#define DOUBLE_GET(cls, T, name, sel)             METHOD(cls, name, PARSE_NONE, RETURN_DOUBLE([SELF(T) sel]);)
#define DOUBLE_SET(cls, T, name, sel)             METHOD(cls, name, PARSE_DOUBLE, [SELF(T) sel:v];)
#define LONG_GET(cls, T, name, sel)               METHOD(cls, name, PARSE_NONE, RETURN_LONG((zend_long) [SELF(T) sel]);)
#define LONG_SET(cls, T, name, sel, NT)           METHOD(cls, name, PARSE_LONG, [SELF(T) sel:(NT) v];)
#define STR_GET(cls, T, name, sel)                METHOD(cls, name, PARSE_NONE, RETURN_STR(appkit_zend_string((CFStringRef) [SELF(T) sel]));)
#define STR_GET_OR_NULL(cls, T, name, sel)        METHOD(cls, name, PARSE_NONE, NSString *s = [SELF(T) sel]; if (s == nil) { RETURN_NULL(); } RETURN_STR(appkit_zend_string((CFStringRef) s));)
#define STR_SET(cls, T, name, sel)                METHOD(cls, name, PARSE_STR, [SELF(T) sel:appkit_nsstring(v)];)
#define STR_SET_OR_NULL(cls, T, name, sel)        METHOD(cls, name, PARSE_STR_OR_NULL, [SELF(T) sel:(v != NULL ? appkit_nsstring(v) : nil)];)
#define OBJ_GET(cls, T, name, sel)                METHOD(cls, name, PARSE_NONE, appkit_box_objc(return_value, [SELF(T) sel]);)
#define OBJ_SET(cls, T, name, sel, ce, OT)        METHOD(cls, name, PARSE_OBJ(ce), [SELF(T) sel:(OT) APPKIT_ID(v)];)
#define OBJ_SET_OR_NULL(cls, T, name, sel, ce, OT) METHOD(cls, name, PARSE_OBJ_OR_NULL(ce), [SELF(T) sel:(OT) OPTIONAL_ID(v)];)
#define ENUM_GET(cls, T, name, sel, ce, fallback) METHOD(cls, name, PARSE_NONE, appkit_return_enum(return_value, ce, (zend_long) [SELF(T) sel], fallback);)
#define ENUM_SET(cls, T, name, sel, ce, ET)       METHOD(cls, name, PARSE_OBJ(ce), [SELF(T) sel:(ET) appkit_enum_value(v, 0)];)
#define SENDER_METHOD(cls, T, name, sel)          METHOD(cls, name, PARSE_OBJ_OR_NULL(appkit_ce_NSObject), [SELF(T) sel:OPTIONAL_ID(v)];)
#define SIZE_GET(cls, T, name, sel)               METHOD(cls, name, PARSE_NONE, appkit_return_size(return_value, [SELF(T) sel]);)
#define STR_GET_NULLABLE STR_GET_OR_NULL

/* A static constructor taking (string title, ?NSObject target, ?string action). */
#define TITLE_TARGET_ACTION(cls, T, name, sel) \
ZEND_METHOD(cls, name) \
{ \
	zend_string *title, *action = NULL; \
	zend_object *target = NULL; \
	ZEND_PARSE_PARAMETERS_START(3, 3) \
		Z_PARAM_STR(title) \
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(target, appkit_ce_NSObject) \
		Z_PARAM_STR_OR_NULL(action) \
	ZEND_PARSE_PARAMETERS_END(); \
	APPKIT_REQUIRE_MAIN_THREAD(); \
	APPKIT_BEGIN \
		appkit_box_objc(return_value, [CALLED sel:appkit_nsstring(title) target:OPTIONAL_ID(target) action:SELECTOR_OR_NULL(action)]); \
	APPKIT_END \
}

#endif
