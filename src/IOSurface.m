#include "runtime.h"
#import <IOSurface/IOSurfaceObjC.h>
#include "../stubs/IOSurface_arginfo.h"

void appkit_register_IOSurface(int module_number)
{
	register_IOSurface_symbols(module_number);

	appkit_ce_IOSurface = register_class_IOSurface(appkit_ce_NSObject);
	appkit_object_setup(appkit_ce_IOSurface);
	appkit_map_objc_class("IOSurface", appkit_ce_IOSurface);
}

#define THIS_SURFACE ((IOSurface *) APPKIT_ID(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(IOSurface, initWithProperties)
{
	HashTable *properties;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(properties)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		NSDictionary *dict = appkit_nsdictionary(properties, 1);
		if (dict == nil) {
			RETURN_THROWS();
		}
		IOSurface *made = [[IOSurface alloc] initWithProperties:dict];
		if (made == nil) {
			RETVAL_NULL();
		} else {
			appkit_box_objc(return_value, made);
			[made release];
		}
	APPKIT_END
}

ZEND_METHOD(IOSurface, lockWithOptionsSeed)
{
	zend_long options, seed;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) [THIS_SURFACE lockWithOptions:(IOSurfaceLockOptions) options seed:(uint32_t *) (uintptr_t) seed]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, unlockWithOptionsSeed)
{
	zend_long options, seed;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) [THIS_SURFACE unlockWithOptions:(IOSurfaceLockOptions) options seed:(uint32_t *) (uintptr_t) seed]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, baseAddress)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) (uintptr_t) [THIS_SURFACE baseAddress]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, bytesPerRow)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) [THIS_SURFACE bytesPerRow]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, width)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) [THIS_SURFACE width]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, height)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETVAL_LONG((zend_long) [THIS_SURFACE height]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, isInUse)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		RETVAL_BOOL([THIS_SURFACE isInUse]);
	APPKIT_END
}

ZEND_METHOD(IOSurface, setAttachmentForKey)
{
	zend_object *object;
	zend_string *key;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(object, appkit_ce_CFType)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		[THIS_SURFACE setAttachment:(id) APPKIT_CF(object) forKey:appkit_nsstring(key)];
	APPKIT_END
}

/* A CF object (an ICC profile's CFData) comes back as its CF class, any other attachment as its Objective-C class. */
ZEND_METHOD(IOSurface, attachmentForKey)
{
	zend_string *key;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		id value = [THIS_SURFACE attachmentForKey:appkit_nsstring(key)];
		if (value != nil && CFGetTypeID((CFTypeRef) value) == CFDataGetTypeID()) {
			appkit_box_cf(return_value, (CFTypeRef) value);
		} else {
			appkit_box_objc(return_value, value);
		}
	APPKIT_END
}
