#include "runtime.h"
#include "controls.h"
#include "../stubs/NSNotificationCenter_arginfo.h"

@implementation PHPAppKitBlockCallout
- (void)dealloc
{
	if (callout != NULL) {
		appkit_callout_release(callout);
	}
	[super dealloc];
}
@end

void appkit_register_NSNotificationCenter(int module_number)
{
	register_NSNotificationCenter_symbols(module_number);
	APPKIT_MAP(NSNotification, appkit_ce_NSObject);
	APPKIT_MAP(NSNotificationCenter, appkit_ce_NSObject);
	APPKIT_MAP(NSOperationQueue, appkit_ce_NSObject);
}

STR_GET(NSNotification, NSNotification, name, name)
OBJ_GET(NSNotification, NSNotification, object, object)

ZEND_METHOD(NSNotificationCenter, defaultCenter)
{
	ZEND_PARSE_PARAMETERS_NONE();

	APPKIT_BEGIN
		appkit_box_objc(return_value, [NSNotificationCenter defaultCenter]);
	APPKIT_END
}

/* Request end: the token stops observing so the centre never runs a block whose callable is gone. */
static void appkit_notification_detach(CFTypeRef token)
{
	[[NSNotificationCenter defaultCenter] removeObserver:(id) token];
}

ZEND_METHOD(NSNotificationCenter, addObserverForNameObjectQueueUsingBlock)
{
	zend_string *name;
	zend_object *object = NULL;
	zend_object *queue = NULL;
	zval *block;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(name)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(object, appkit_ce_NSObject)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(queue, appkit_ce_NSOperationQueue)
		Z_PARAM_ZVAL(block)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	if (!zend_is_callable(block, 0, NULL)) {
		zend_argument_type_error(4, "must be a valid callback");
		RETURN_THROWS();
	}

	APPKIT_BEGIN
		PHPAppKitBlockCallout *holder = [[[PHPAppKitBlockCallout alloc] init] autorelease];
		holder->callout = appkit_callout_new(block, appkit_notification_detach);
		appkit_callout_retain(holder->callout);

		id token = [SELF(NSNotificationCenter) addObserverForName:appkit_nsstring(name) object:OPTIONAL_ID(object) queue:(NSOperationQueue *) OPTIONAL_ID(queue) usingBlock:^(NSNotification *notification) {
			zval argv[1];

			if (!appkit_callout_can_enter(holder->callout)) {
				return;
			}
			appkit_box_objc(&argv[0], notification);
			appkit_callout_invoke(holder->callout, 1, argv);
			zval_ptr_dtor(&argv[0]);
		}];
		holder->callout->owner = (CFTypeRef) token;
		appkit_box_objc(return_value, token);
	APPKIT_END
}

OBJ_SET(NSNotificationCenter, NSNotificationCenter, removeObserver, removeObserver, appkit_ce_NSObject, id)

ZEND_METHOD(NSNotificationCenter, postNotificationNameObject)
{
	zend_string *name;
	zend_object *object = NULL;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(object, appkit_ce_NSObject)
	ZEND_PARSE_PARAMETERS_END();
	APPKIT_REQUIRE_MAIN_THREAD();

	APPKIT_BEGIN
		[SELF(NSNotificationCenter) postNotificationName:appkit_nsstring(name) object:OPTIONAL_ID(object)];
	APPKIT_END
}

/* NSOperationQueue */
METHOD(NSOperationQueue, mainQueue, PARSE_NONE, appkit_box_objc(return_value, [NSOperationQueue mainQueue]);)
METHOD(NSOperationQueue, init, PARSE_NONE,
	NSOperationQueue *queue = [[CALLED alloc] init];
	appkit_box_objc(return_value, queue);
	[queue release];
)
VOID_METHOD(NSOperationQueue, NSOperationQueue, waitUntilAllOperationsAreFinished, waitUntilAllOperationsAreFinished)
