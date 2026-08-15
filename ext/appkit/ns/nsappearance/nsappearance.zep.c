
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

#include "ns-appearance.h"
#include <stdint.h>



/**
 * NSAppearance — Aqua / Dark Aqua and custom drawing appearances.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSAppearance_NSAppearance)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSAppearance, NSAppearance, appkit, ns_nsappearance_nsappearance, appkit_ns_nsappearance_nsappearance_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, wrap)
{
	zval *nsAppearancePtr_param = NULL;
	zend_long nsAppearancePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsAppearancePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsAppearancePtr_param);
	
            handle = (zend_long) ns_appearance_wrap((void *)(uintptr_t) nsAppearancePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, destroy)
{
	zval *appearance_param = NULL;
	zend_long appearance;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &appearance_param);
	
            ns_appearance_destroy((uintptr_t) appearance);
        
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, named)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_appearance_named(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_appearance_create(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, currentDrawing)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_appearance_current_drawing();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, name)
{
	zval *appearance_param = NULL;
	zend_long appearance;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &appearance_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_appearance_name((uintptr_t) appearance, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, allowsVibrancy)
{
	zend_bool result = 0;
	zval *appearance_param = NULL;
	zend_long appearance;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &appearance_param);
	
            result = ns_appearance_allows_vibrancy((uintptr_t) appearance) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, bestMatch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval names;
	zval *appearance_param = NULL, *names_param = NULL;
	zend_long appearance;

	ZVAL_UNDEF(&names);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(appearance)
		Z_PARAM_ARRAY(names)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &appearance_param, &names_param);
	zephir_get_arrval(&names, names_param);
	
            char buf[4096];
            buf[0] = '\0';
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(names), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            if (ns_appearance_best_match((uintptr_t) appearance, cnames, count, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSAppearance_NSAppearance, nsAppearance)
{
	zval *appearance_param = NULL;
	zend_long appearance, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &appearance_param);
	
            ptr = (zend_long)(uintptr_t) ns_appearance_nsappearance((uintptr_t) appearance);
        
	RETURN_LONG(ptr);
}

