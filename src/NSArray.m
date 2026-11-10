#include "runtime.h"
#include "controls.h"
#include "../stubs/NSArray_arginfo.h"

void appkit_register_NSArray(void)
{
	APPKIT_MAP(NSArray, appkit_ce_NSObject);
	APPKIT_MAP(NSMutableArray, appkit_ce_NSArray);
}

/* NSArray */
ANY_LONG_GET(NSArray, NSArray, count, count)

ZEND_METHOD(NSArray, objectAtIndex)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_zval_from_id(return_value, [SELF(NSArray) objectAtIndex:(NSUInteger) index]);
	APPKIT_END
}

/* NSMutableArray */
ZEND_METHOD(NSMutableArray, array)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [CALLED array]);
	APPKIT_END
}

ZEND_METHOD(NSMutableArray, addObject)
{
	zend_object *object = NULL;
	zend_string *string = NULL;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_STR(object, appkit_ce_NSObject, string)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[SELF(NSMutableArray) addObject:(object != NULL ? APPKIT_ID(object) : appkit_nsstring(string))];
	APPKIT_END
}
