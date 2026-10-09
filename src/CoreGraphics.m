#include "runtime.h"
#include "../stubs/CoreGraphics_arginfo.h"

_Static_assert(kCGInterpolationDefault == 0 && kCGInterpolationNone == 1 && kCGInterpolationLow == 2 && kCGInterpolationHigh == 3
	&& kCGInterpolationMedium == 4, "CGInterpolationQuality values moved");

void appkit_register_CoreGraphics(int module_number)
{
	register_CoreGraphics_symbols(module_number);

	appkit_ce_CGInterpolationQuality = register_class_CGInterpolationQuality();
	appkit_ce_CGContext = register_class_CGContext(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGContext);

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

/*
 * The info a provider made by createDirect() carries: the address and its byte count. Core
 * Graphics hands the info back from CGDataProviderGetInfo(), so CGImage::create can check a
 * description against the count without copying the bytes. The tag tells it from any other info.
 */
typedef struct {
	uint32_t tag;
	const void *bytes;
	size_t size;
} appkit_direct_provider;

#define APPKIT_DIRECT_PROVIDER_TAG 0x41505056u /* "APPV" */

static const void *appkit_direct_provider_bytes(void *info)
{
	return ((appkit_direct_provider *) info)->bytes;
}

static void appkit_direct_provider_release_bytes(void *info, const void *bytes)
{
}

/* Core Graphics may let go of a provider after the request ends (an image kept as layer contents): plain malloc, not the request heap. */
static void appkit_direct_provider_release_info(void *info)
{
	free(info);
}

/* The byte count of a provider made by createDirect(), or -1 for any other provider. */
static zend_long appkit_direct_provider_size(CGDataProviderRef provider)
{
	appkit_direct_provider *info = (appkit_direct_provider *) CGDataProviderGetInfo(provider);

	return info != NULL && info->tag == APPKIT_DIRECT_PROVIDER_TAG ? (zend_long) info->size : -1;
}

ZEND_METHOD(CGDataProvider, createDirect)
{
	zend_long address, size;
	static const CGDataProviderDirectCallbacks callbacks = {
		0, appkit_direct_provider_bytes, appkit_direct_provider_release_bytes, NULL, appkit_direct_provider_release_info,
	};

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();

	if (address == 0) {
		zend_argument_value_error(1, "must not be a null address");
		RETURN_THROWS();
	}
	if (size < 1) {
		zend_argument_value_error(2, "must be the byte count at the address");
		RETURN_THROWS();
	}

	appkit_direct_provider *info = malloc(sizeof(appkit_direct_provider));
	if (info == NULL) {
		zend_throw_exception(appkit_ce_AppKitException, "Out of memory for the provider's info", 0);
		RETURN_THROWS();
	}
	info->tag = APPKIT_DIRECT_PROVIDER_TAG;
	info->bytes = (const void *) (uintptr_t) address;
	info->size = (size_t) size;

	appkit_return_created(return_value, CGDataProviderCreateDirect(info, (off_t) size, &callbacks));
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

	/*
	 * Core Graphics reads the provider lazily and trusts the description: a short provider would be
	 * read past its end. A provider made by createDirect() knows its size; any other is measured by a copy.
	 * The last row only needs its pixels, not the stride's padding.
	 */
	zend_long length = appkit_direct_provider_size((CGDataProviderRef) APPKIT_CF(provider));
	zend_long needed = bytes_per_row * (height - 1) + (width * bits_per_pixel + 7) / 8;
	if (length < 0) {
		CFDataRef data = CGDataProviderCopyData((CGDataProviderRef) APPKIT_CF(provider));
		length = data != NULL ? (zend_long) CFDataGetLength(data) : 0;
		if (data != NULL) {
			CFRelease(data);
		}
		needed = bytes_per_row * height;
	}
	if (length < needed) {
		zend_argument_value_error(8, "must provide " ZEND_LONG_FMT " bytes for that description, it holds " ZEND_LONG_FMT, needed, length);
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

ZEND_METHOD(CGImage, createWithImageInRect)
{
	zend_object *image, *rect_obj;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(image, appkit_ce_CGImage)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, appkit_ce_NSRect)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_rect_from(rect_obj, 2, &rect)) {
		RETURN_THROWS();
	}

	appkit_return_created(return_value, CGImageCreateWithImageInRect((CGImageRef) APPKIT_CF(image), NSRectToCGRect(rect)));
}

#define THIS_CONTEXT ((CGContextRef) APPKIT_CF(Z_OBJ_P(ZEND_THIS)))

ZEND_METHOD(CGContext, saveGState)
{
	ZEND_PARSE_PARAMETERS_NONE();
	CGContextSaveGState(THIS_CONTEXT);
}

ZEND_METHOD(CGContext, restoreGState)
{
	ZEND_PARSE_PARAMETERS_NONE();
	CGContextRestoreGState(THIS_CONTEXT);
}

ZEND_METHOD(CGContext, clipToRect)
{
	zend_object *rect_obj;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, appkit_ce_NSRect)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_rect_from(rect_obj, 1, &rect)) {
		RETURN_THROWS();
	}

	CGContextClipToRect(THIS_CONTEXT, NSRectToCGRect(rect));
}

ZEND_METHOD(CGContext, translateCTM)
{
	double tx, ty;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(tx)
		Z_PARAM_DOUBLE(ty)
	ZEND_PARSE_PARAMETERS_END();

	CGContextTranslateCTM(THIS_CONTEXT, tx, ty);
}

ZEND_METHOD(CGContext, scaleCTM)
{
	double sx, sy;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(sx)
		Z_PARAM_DOUBLE(sy)
	ZEND_PARSE_PARAMETERS_END();

	CGContextScaleCTM(THIS_CONTEXT, sx, sy);
}

ZEND_METHOD(CGContext, setInterpolationQuality)
{
	zend_object *quality;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(quality, appkit_ce_CGInterpolationQuality)
	ZEND_PARSE_PARAMETERS_END();

	CGContextSetInterpolationQuality(THIS_CONTEXT, (CGInterpolationQuality) appkit_enum_value(quality, 0));
}

ZEND_METHOD(CGContext, getInterpolationQuality)
{
	ZEND_PARSE_PARAMETERS_NONE();
	appkit_return_enum(return_value, appkit_ce_CGInterpolationQuality, (zend_long) CGContextGetInterpolationQuality(THIS_CONTEXT), false);
}

ZEND_METHOD(CGContext, drawImage)
{
	zend_object *rect_obj, *image;
	NSRect rect;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, appkit_ce_NSRect)
		Z_PARAM_OBJ_OF_CLASS(image, appkit_ce_CGImage)
	ZEND_PARSE_PARAMETERS_END();
	if (!appkit_rect_from(rect_obj, 1, &rect)) {
		RETURN_THROWS();
	}

	CGContextDrawImage(THIS_CONTEXT, NSRectToCGRect(rect), (CGImageRef) APPKIT_CF(image));
}

