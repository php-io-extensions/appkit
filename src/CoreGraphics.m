#include "runtime.h"
#include "../stubs/CoreGraphics_arginfo.h"

void appkit_register_CoreGraphics(int module_number)
{
	register_CoreGraphics_symbols(module_number);

	appkit_ce_CFData = register_class_CFData(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CFData);
	appkit_ce_CGDataProvider = register_class_CGDataProvider(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGDataProvider);
	appkit_ce_CGColorSpace = register_class_CGColorSpace(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGColorSpace);
	appkit_ce_CGImage = register_class_CGImage(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGImage);
}

/* Box a +1 reference a Create function answered, then drop that reference: the wrapper holds its own. */
static void appkit_return_created(zval *return_value, CFTypeRef created)
{
	appkit_box_cf(return_value, created);
	if (created != NULL) {
		CFRelease(created);
	}
}

ZEND_METHOD(CFData, create)
{
	zend_string *bytes = NULL;
	zend_long address = 0;
	zend_long length = 0;
	bool length_null = true;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR_OR_LONG(bytes, address)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG_OR_NULL(length, length_null)
	ZEND_PARSE_PARAMETERS_END();

	if (bytes != NULL) {
		if (!length_null) {
			zend_argument_value_error(2, "must be null when $bytes is a string");
			RETURN_THROWS();
		}
		appkit_return_created(return_value, CFDataCreate(kCFAllocatorDefault, (const UInt8 *) ZSTR_VAL(bytes), (CFIndex) ZSTR_LEN(bytes)));
		return;
	}
	if (address == 0) {
		zend_argument_value_error(1, "must not be a null address");
		RETURN_THROWS();
	}
	if (length_null || length < 0) {
		zend_argument_value_error(2, "must be the byte count to read at the address $bytes");
		RETURN_THROWS();
	}

	/* The address is trusted: an ext-fb buffer's pointer() with its size(). */
	appkit_return_created(return_value, CFDataCreate(kCFAllocatorDefault, (const UInt8 *) (uintptr_t) address, (CFIndex) length));
}

ZEND_METHOD(CFData, getLength)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CFDataGetLength((CFDataRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS))));
}

ZEND_METHOD(CGDataProvider, createWithCFData)
{
	zend_object *data;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(data, appkit_ce_CFData)
	ZEND_PARSE_PARAMETERS_END();

	appkit_return_created(return_value, CGDataProviderCreateWithCFData((CFDataRef) APPKIT_CF(data)));
}

ZEND_METHOD(CGColorSpace, createWithName)
{
	zend_string *name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();

	APPKIT_BEGIN
		appkit_return_created(return_value, CGColorSpaceCreateWithName((CFStringRef) appkit_nsstring(name)));
	APPKIT_END
}

ZEND_METHOD(CGImage, create)
{
	zend_long width, height, bits_per_component, bits_per_pixel, bytes_per_row, bitmap_info, intent;
	zend_object *space, *provider;
	bool should_interpolate;

	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(bits_per_component)
		Z_PARAM_LONG(bits_per_pixel)
		Z_PARAM_LONG(bytes_per_row)
		Z_PARAM_OBJ_OF_CLASS(space, appkit_ce_CGColorSpace)
		Z_PARAM_LONG(bitmap_info)
		Z_PARAM_OBJ_OF_CLASS(provider, appkit_ce_CGDataProvider)
		Z_PARAM_BOOL(should_interpolate)
		Z_PARAM_LONG(intent)
	ZEND_PARSE_PARAMETERS_END();

	if (width < 1 || height < 1 || width > INT32_MAX || height > INT32_MAX) {
		zend_argument_value_error(width < 1 || width > INT32_MAX ? 1 : 2, "must be between 1 and %d", INT32_MAX);
		RETURN_THROWS();
	}
	if (bits_per_component < 1 || bits_per_component > 32) {
		zend_argument_value_error(3, "must be between 1 and 32");
		RETURN_THROWS();
	}
	if (bits_per_pixel < bits_per_component || bits_per_pixel > 128) {
		zend_argument_value_error(4, "must be between bitsPerComponent and 128");
		RETURN_THROWS();
	}
	if (bytes_per_row < (width * bits_per_pixel + 7) / 8 || bytes_per_row > INT32_MAX) {
		zend_argument_value_error(5, "must hold a row: at least " ZEND_LONG_FMT " bytes", (width * bits_per_pixel + 7) / 8);
		RETURN_THROWS();
	}

	/* Core Graphics reads the provider lazily and trusts the description: a short provider would be read past its end. */
	CFDataRef data = CGDataProviderCopyData((CGDataProviderRef) APPKIT_CF(provider));
	CFIndex length = data != NULL ? CFDataGetLength(data) : 0;
	if (data != NULL) {
		CFRelease(data);
	}
	if ((zend_long) length < bytes_per_row * height) {
		zend_argument_value_error(8, "must provide bytesPerRow x height (" ZEND_LONG_FMT ") bytes, it holds %ld", bytes_per_row * height, (long) length);
		RETURN_THROWS();
	}

	appkit_return_created(return_value, CGImageCreate((size_t) width, (size_t) height, (size_t) bits_per_component, (size_t) bits_per_pixel, (size_t) bytes_per_row,
		(CGColorSpaceRef) APPKIT_CF(space), (CGBitmapInfo) bitmap_info, (CGDataProviderRef) APPKIT_CF(provider), NULL, should_interpolate, (CGColorRenderingIntent) intent));
}

ZEND_METHOD(CGImage, getWidth)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CGImageGetWidth((CGImageRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS))));
}

ZEND_METHOD(CGImage, getHeight)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) CGImageGetHeight((CGImageRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS))));
}
