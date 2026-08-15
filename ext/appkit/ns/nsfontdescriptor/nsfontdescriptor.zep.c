
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-fontdescriptor.h"
#include <stdint.h>



/**
 * NSFontDescriptor — font attribute queries and matching.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFontDescriptor_NSFontDescriptor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFontDescriptor, NSFontDescriptor, appkit, ns_nsfontdescriptor_nsfontdescriptor, appkit_ns_nsfontdescriptor_nsfontdescriptor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, wrap)
{
	zval *nsFontDescriptorPtr_param = NULL;
	zend_long nsFontDescriptorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFontDescriptorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFontDescriptorPtr_param);
	
            handle = (zend_long) ns_fontdescriptor_wrap((void *)(uintptr_t) nsFontDescriptorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, destroy)
{
	zval *descriptor_param = NULL;
	zend_long descriptor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            ns_fontdescriptor_destroy((uintptr_t) descriptor);
        
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withName)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double size;
	zval *name_param = NULL, *size_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &size_param);
	zephir_get_strval(&name, name_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_fontdescriptor_with_name(Z_STRVAL(name), (double) size);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, preferredForTextStyle)
{
	zval *styleKind_param = NULL;
	zend_long styleKind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(styleKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &styleKind_param);
	
            handle = (zend_long) ns_fontdescriptor_preferred_for_text_style((int) styleKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, postscriptName)
{
	zval *descriptor_param = NULL;
	zend_long descriptor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontdescriptor_postscript_name((uintptr_t) descriptor, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, pointSize)
{
	double value = 0;
	zval *descriptor_param = NULL;
	zend_long descriptor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            value = ns_fontdescriptor_point_size((uintptr_t) descriptor);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, symbolicTraits)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            value = (zend_long) ns_fontdescriptor_symbolic_traits((uintptr_t) descriptor);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, requiresFontAssetRequest)
{
	zend_bool result = 0;
	zval *descriptor_param = NULL;
	zend_long descriptor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            result = ns_fontdescriptor_requires_font_asset_request((uintptr_t) descriptor) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSymbolicTraits)
{
	zval *descriptor_param = NULL, *traits_param = NULL;
	zend_long descriptor, traits, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_LONG(traits)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &descriptor_param, &traits_param);
	
            handle = (zend_long) ns_fontdescriptor_with_symbolic_traits((uintptr_t) descriptor, (unsigned) traits);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withSize)
{
	double size;
	zval *descriptor_param = NULL, *size_param = NULL;
	zend_long descriptor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &descriptor_param, &size_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_fontdescriptor_with_size((uintptr_t) descriptor, (double) size);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval family;
	zval *descriptor_param = NULL, *family_param = NULL;
	zend_long descriptor, handle = 0;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &descriptor_param, &family_param);
	zephir_get_strval(&family, family_param);
	
            handle = (zend_long) ns_fontdescriptor_with_family((uintptr_t) descriptor, Z_STRVAL(family));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withFace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval face;
	zval *descriptor_param = NULL, *face_param = NULL;
	zend_long descriptor, handle = 0;

	ZVAL_UNDEF(&face);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_STR(face)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &descriptor_param, &face_param);
	zephir_get_strval(&face, face_param);
	
            handle = (zend_long) ns_fontdescriptor_with_face((uintptr_t) descriptor, Z_STRVAL(face));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, withDesign)
{
	zval *descriptor_param = NULL, *designKind_param = NULL;
	zend_long descriptor, designKind, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_LONG(designKind)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &descriptor_param, &designKind_param);
	
            handle = (zend_long) ns_fontdescriptor_with_design((uintptr_t) descriptor, (int) designKind);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingCount)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            count = (zend_long) ns_fontdescriptor_matching_count((uintptr_t) descriptor);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingAt)
{
	zval *descriptor_param = NULL, *index_param = NULL;
	zend_long descriptor, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(descriptor)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &descriptor_param, &index_param);
	
            handle = (zend_long) ns_fontdescriptor_matching_at((uintptr_t) descriptor, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingFirst)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            handle = (zend_long) ns_fontdescriptor_matching_first((uintptr_t) descriptor);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, nsFontDescriptor)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            ptr = (zend_long)(uintptr_t) ns_fontdescriptor_nsfontdescriptor((uintptr_t) descriptor);
        
	RETURN_LONG(ptr);
}

