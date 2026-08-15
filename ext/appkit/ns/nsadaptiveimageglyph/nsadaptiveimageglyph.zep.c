
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

#include "ns-adaptiveimageglyph.h"
#include <stdint.h>



/**
 * NSAdaptiveImageGlyph — adaptive image glyph (Genmoji).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAdaptiveImageGlyph, NSAdaptiveImageGlyph, appkit, ns_nsadaptiveimageglyph_nsadaptiveimageglyph, appkit_ns_nsadaptiveimageglyph_nsadaptiveimageglyph_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, createWithImageContent)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL;
	zval data;

	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_strval(&data, data_param);
	
            handle = (zend_long) ns_adaptiveimageglyph_create_with_image_content(Z_STRVAL(data), (size_t) Z_STRLEN(data));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, wrap)
{
	zval *nsAdaptiveImageGlyphPtr_param = NULL;
	zend_long nsAdaptiveImageGlyphPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAdaptiveImageGlyphPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAdaptiveImageGlyphPtr_param);
	
            handle = (zend_long) ns_adaptiveimageglyph_wrap((void *)(uintptr_t) nsAdaptiveImageGlyphPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, destroy)
{
	zval *glyph_param = NULL;
	zend_long glyph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &glyph_param);
	
            ns_adaptiveimageglyph_destroy((uintptr_t) glyph);
        
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, contentIdentifier)
{
	zval *glyph_param = NULL;
	zend_long glyph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &glyph_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, contentDescription)
{
	zval *glyph_param = NULL;
	zend_long glyph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &glyph_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_description((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSAdaptiveImageGlyph_NSAdaptiveImageGlyph, contentTypeIdentifier)
{
	zval *glyph_param = NULL;
	zend_long glyph;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(glyph)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &glyph_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_adaptiveimageglyph_content_type_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

