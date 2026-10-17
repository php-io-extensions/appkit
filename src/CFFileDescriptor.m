#include "runtime.h"
#include "../stubs/CFFileDescriptor_arginfo.h"

void appkit_register_CFFileDescriptor(void)
{
	appkit_ce_CFFileDescriptor = register_class_CFFileDescriptor(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CFFileDescriptor);
}

#define THIS_FD ((CFFileDescriptorRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))

/* CFFileDescriptorCallBack: hands the descriptor and the fired callback types to the PHP callout. */
static void appkit_fd_callout(CFFileDescriptorRef fd, CFOptionFlags callBackTypes, void *info)
{
	zval argv[2];

	if (!appkit_callout_can_enter((appkit_callout *) info)) {
		return;
	}
	appkit_box_cf(&argv[0], fd);
	ZVAL_LONG(&argv[1], (zend_long) callBackTypes);

	appkit_callout_invoke((appkit_callout *) info, 2, argv);

	zval_ptr_dtor(&argv[0]);
}

/* CFFileDescriptorContext spells retain/release without const, unlike the other CF contexts. */
static void *appkit_fd_info_retain(void *info)
{
	return (void *) appkit_callout_retain(info);
}

static void appkit_fd_info_release(void *info)
{
	appkit_callout_release(info);
}

static void appkit_fd_detach(CFTypeRef owner)
{
	CFFileDescriptorInvalidate((CFFileDescriptorRef) owner);
}

ZEND_METHOD(CFFileDescriptor, create)
{
	zend_object *allocator;
	zend_long fd;
	bool close_on_invalidate;
	zend_fcall_info fci;
	zend_fcall_info_cache fcc;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(allocator, appkit_ce_CFAllocator)
		Z_PARAM_LONG(fd)
		Z_PARAM_BOOL(close_on_invalidate)
		Z_PARAM_FUNC(fci, fcc)
	ZEND_PARSE_PARAMETERS_END();

	appkit_callout *callout = appkit_callout_new(&fci.function_name, appkit_fd_detach);
	CFFileDescriptorContext context = {
		.version = 0,
		.info = callout,
		.retain = appkit_fd_info_retain,
		.release = appkit_fd_info_release,
		.copyDescription = NULL,
	};

	/* Held across the create so a failed create frees the record here and a successful one leaves CF's reference. */
	appkit_callout_retain(callout);
	CFFileDescriptorRef ref = CFFileDescriptorCreate(allocator ? (CFAllocatorRef) APPKIT_CF(allocator) : NULL,
		(CFFileDescriptorNativeDescriptor) fd, close_on_invalidate, appkit_fd_callout, &context);

	if (ref != NULL) {
		callout->owner = ref;
	}
	appkit_callout_release(callout);

	if (ref == NULL) {
		RETURN_NULL();
	}

	appkit_box_cf(return_value, ref);
	CFRelease(ref);
}

ZEND_METHOD(CFFileDescriptor, getNativeDescriptor)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CFFileDescriptorGetNativeDescriptor(THIS_FD));
}

ZEND_METHOD(CFFileDescriptor, enableCallBacks)
{
	zend_long types;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(types)
	ZEND_PARSE_PARAMETERS_END();

	CFFileDescriptorEnableCallBacks(THIS_FD, (CFOptionFlags) types);
}

ZEND_METHOD(CFFileDescriptor, disableCallBacks)
{
	zend_long types;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(types)
	ZEND_PARSE_PARAMETERS_END();

	CFFileDescriptorDisableCallBacks(THIS_FD, (CFOptionFlags) types);
}

ZEND_METHOD(CFFileDescriptor, invalidate)
{
	ZEND_PARSE_PARAMETERS_NONE();

	CFFileDescriptorInvalidate(THIS_FD);
}

ZEND_METHOD(CFFileDescriptor, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(CFFileDescriptorIsValid(THIS_FD));
}

ZEND_METHOD(CFFileDescriptor, createRunLoopSource)
{
	zend_object *allocator;
	zend_long order;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(allocator, appkit_ce_CFAllocator)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();

	CFRunLoopSourceRef source = CFFileDescriptorCreateRunLoopSource(allocator ? (CFAllocatorRef) APPKIT_CF(allocator) : NULL,
		THIS_FD, (CFIndex) order);

	if (source == NULL) {
		RETURN_NULL();
	}

	appkit_box_cf(return_value, source);
	CFRelease(source);
}
