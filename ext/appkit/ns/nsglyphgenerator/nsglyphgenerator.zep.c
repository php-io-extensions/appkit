
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-glyphgenerator.h"
#include <stdint.h>



/**
 * NSGlyphGenerator — shared glyph generator (deprecated).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSGlyphGenerator_NSGlyphGenerator)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSGlyphGenerator, NSGlyphGenerator, appkit, ns_nsglyphgenerator_nsglyphgenerator, appkit_ns_nsglyphgenerator_nsglyphgenerator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSGlyphGenerator_NSGlyphGenerator, sharedGlyphGenerator)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_glyphgenerator_shared_glyph_generator();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGlyphGenerator_NSGlyphGenerator, wrap)
{
	zval *nsGlyphGeneratorPtr_param = NULL;
	zend_long nsGlyphGeneratorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsGlyphGeneratorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsGlyphGeneratorPtr_param);
	
            handle = (zend_long) ns_glyphgenerator_wrap((void *)(uintptr_t) nsGlyphGeneratorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSGlyphGenerator_NSGlyphGenerator, destroy)
{
	zval *generator_param = NULL;
	zend_long generator;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(generator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &generator_param);
	
            ns_glyphgenerator_destroy((uintptr_t) generator);
        
}

