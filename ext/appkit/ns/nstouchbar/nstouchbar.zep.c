
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

#include "ns-touchbar.h"
#include <stdint.h>



/** NSTouchBar customization bar */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTouchBar_NSTouchBar)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTouchBar, NSTouchBar, appkit, ns_nstouchbar_nstouchbar, appkit_ns_nstouchbar_nstouchbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, create)
{
	zend_long handle = 0;
	 handle = (zend_long) ns_touchbar_create(); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, wrap)
{
	zval *nsTouchBarPtr_param = NULL;
	zend_long nsTouchBarPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTouchBarPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTouchBarPtr_param);
	 handle = (zend_long) ns_touchbar_wrap((void *)(uintptr_t) nsTouchBarPtr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, destroy)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	 ns_touchbar_destroy((uintptr_t) bar); 
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, nsTouchBar)
{
	zval *bar_param = NULL;
	zend_long bar, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	 ptr = (zend_long)(uintptr_t) ns_touchbar_nstouchbar((uintptr_t) bar); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setCustomizationIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *bar_param = NULL, *identifier_param = NULL;
	zend_long bar;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &bar_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 ns_touchbar_set_customization_identifier((uintptr_t) bar, Z_STRVAL(identifier)); 
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getCustomizationIdentifier)
{
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	 char buf[4096]; buf[0] = '\0'; if (ns_touchbar_get_customization_identifier((uintptr_t) bar, buf, (int) sizeof(buf))) { RETURN_STRING(buf); } RETURN_EMPTY_STRING(); 
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setDefaultItemIdentifiers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifiers;
	zval *bar_param = NULL, *identifiers_param = NULL;
	zend_long bar;

	ZVAL_UNDEF(&identifiers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ARRAY(identifiers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &bar_param, &identifiers_param);
	zephir_get_arrval(&identifiers, identifiers_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(identifiers), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_touchbar_set_default_item_identifiers((uintptr_t) bar, cstrings, count);
    
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getDefaultItemIdentifiers)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bar_param = NULL;
	zend_long bar;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &bar_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
        int count = ns_touchbar_default_item_identifiers_count((uintptr_t) bar);
        int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_touchbar_default_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setTemplateItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *bar_param = NULL, *items_param = NULL;
	zend_long bar;

	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &bar_param, &items_param);
	zephir_get_arrval(&items, items_param);
	
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) {
            if (count >= 256) break;
            convert_to_long(entry);
            handles[count++] = (uintptr_t) Z_LVAL_P(entry);
        } ZEND_HASH_FOREACH_END();
        ns_touchbar_set_template_items((uintptr_t) bar, handles, count);
    
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, getItemIdentifiers)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *bar_param = NULL;
	zend_long bar;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &bar_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
        int count = ns_touchbar_item_identifiers_count((uintptr_t) bar); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_touchbar_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, itemForIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *bar_param = NULL, *identifier_param = NULL;
	zend_long bar, h = 0;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &bar_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_touchbar_item_for_identifier((uintptr_t) bar, Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, isVisible)
{
	zend_bool r = 0;
	zval *bar_param = NULL;
	zend_long bar;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bar_param);
	 r = ns_touchbar_is_visible((uintptr_t) bar) == 1; 
	RETURN_BOOL(r);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, assignToResponder)
{
	zval *bar_param = NULL, *responder_param = NULL;
	zend_long bar, responder;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(bar)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &bar_param, &responder_param);
	 ns_touchbar_assign_to_responder((uintptr_t) bar, (uintptr_t) responder); 
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, touchBarFromResponder)
{
	zval *responder_param = NULL;
	zend_long responder, h = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(responder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &responder_param);
	 h = (zend_long) ns_touchbar_from_responder((uintptr_t) responder); 
	RETURN_LONG(h);
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, setAutomaticCustomizeTouchBarMenuItemEnabled)
{
	zval *enabled_param = NULL;
	zend_bool enabled;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enabled_param);
	 ns_touchbar_set_automatic_customize_menu_item_enabled(enabled ? 1 : 0); 
}

PHP_METHOD(AppKit_NS_NSTouchBar_NSTouchBar, isAutomaticCustomizeTouchBarMenuItemEnabled)
{
	zend_bool r = 0;
	 r = ns_touchbar_is_automatic_customize_menu_item_enabled() == 1; 
	RETURN_BOOL(r);
}

