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
	appkit_ce_CGColor = register_class_CGColor(appkit_ce_CFType);
	appkit_object_setup(appkit_ce_CGColor);
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
	zend_object *allocator;
	zend_string *bytes = NULL;
	zend_long address = 0;
	zend_long length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(allocator, appkit_ce_CFAllocator)
		Z_PARAM_STR_OR_LONG(bytes, address)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();

	CFAllocatorRef cf_allocator = allocator != NULL ? (CFAllocatorRef) APPKIT_CF(allocator) : NULL;

	if (bytes != NULL) {
		if (!APPKIT_PROBE_OFF("cfdata-string-length") && (length > (zend_long) ZSTR_LEN(bytes))) {
			zend_argument_value_error(3, "must not exceed the %zu bytes of $bytes", ZSTR_LEN(bytes)); /* binding:cfdata-string-length */
			RETURN_THROWS();
		}
		appkit_return_created(return_value, CFDataCreate(cf_allocator, (const UInt8 *) ZSTR_VAL(bytes), (CFIndex) length));
		return;
	}
	if (!APPKIT_PROBE_OFF("cfdata-null-address") && (address == 0 && length > 0)) {
		zend_argument_value_error(2, "must not be a null address when $length is above 0"); /* binding:cfdata-null-address */
		RETURN_THROWS();
	}

	/* The address is trusted: an ext-fb buffer's pointer() with its size(). */
	appkit_return_created(return_value, CFDataCreate(cf_allocator, (const UInt8 *) (uintptr_t) address, (CFIndex) length));
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

/* The provider's info is the address itself: getBytePointer hands it back, and nothing is owned or freed. */
static const void *appkit_direct_provider_bytes(void *info)
{
	return info;
}

static void appkit_direct_provider_release_bytes(void *info, const void *bytes)
{
}

ZEND_METHOD(CGDataProvider, createDirect)
{
	zend_long address, size;
	static const CGDataProviderDirectCallbacks callbacks = {
		0, appkit_direct_provider_bytes, appkit_direct_provider_release_bytes, NULL, NULL,
	};

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();

	appkit_return_created(return_value, CGDataProviderCreateDirect((void *) (uintptr_t) address, (off_t) size, &callbacks));
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
	HashTable *decode_list;
	bool should_interpolate;

	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(bits_per_component)
		Z_PARAM_LONG(bits_per_pixel)
		Z_PARAM_LONG(bytes_per_row)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(space, appkit_ce_CGColorSpace)
		Z_PARAM_LONG(bitmap_info)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(provider, appkit_ce_CGDataProvider)
		Z_PARAM_ARRAY_HT_OR_NULL(decode_list)
		Z_PARAM_BOOL(should_interpolate)
		Z_PARAM_LONG(intent)
	ZEND_PARSE_PARAMETERS_END();

	CGColorSpaceRef cg_space = space != NULL ? (CGColorSpaceRef) APPKIT_CF(space) : NULL;
	CGFloat *decode = NULL;

	if (decode_list != NULL) {
		/* Core Graphics reads two values per colour component of the space; an image mask (no space) has one component. */
		size_t needed = 2 * (cg_space != NULL ? CGColorSpaceGetNumberOfComponents(cg_space) : 1);
		uint32_t given = zend_hash_num_elements(decode_list);
		if (!APPKIT_PROBE_OFF("cgimage-decode-length") && (given < needed)) {
			zend_argument_value_error(9, "must hold %zu values for that colour space, %u given", needed, given); /* binding:cgimage-decode-length */
			RETURN_THROWS();
		}
		decode = ecalloc(given > 0 ? given : 1, sizeof(CGFloat));
		uint32_t at = 0;
		zval *entry;
		ZEND_HASH_FOREACH_VAL(decode_list, entry) {
			decode[at++] = (CGFloat) zval_get_double(entry);
		} ZEND_HASH_FOREACH_END();
	}

	CGImageRef image = CGImageCreate((size_t) width, (size_t) height, (size_t) bits_per_component, (size_t) bits_per_pixel, (size_t) bytes_per_row,
		cg_space, (CGBitmapInfo) bitmap_info, provider != NULL ? (CGDataProviderRef) APPKIT_CF(provider) : NULL, decode, should_interpolate,
		(CGColorRenderingIntent) intent);
	if (decode != NULL) {
		efree(decode);
	}
	appkit_return_created(return_value, image);
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

