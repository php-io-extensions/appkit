
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

#include "ns-docktile.h"
#include <stdint.h>



/**
 * NSDockTile — application or mini-window dock tile.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDockTile_NSDockTile)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDockTile, NSDockTile, appkit, ns_nsdocktile_nsdocktile, appkit_ns_nsdocktile_nsdocktile_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, applicationDockTile)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_docktile_application();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, wrap)
{
	zval *nsDockTilePtr_param = NULL;
	zend_long nsDockTilePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDockTilePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDockTilePtr_param);
	
            handle = (zend_long) ns_docktile_wrap((void *)(uintptr_t) nsDockTilePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, destroy)
{
	zval *tile_param = NULL;
	zend_long tile;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            ns_docktile_destroy((uintptr_t) tile);
        
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, nsDockTile)
{
	zval *tile_param = NULL;
	zend_long tile, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            ptr = (zend_long)(uintptr_t) ns_docktile_nsdocktile((uintptr_t) tile);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, getSize)
{
	zval size;
	zval *tile_param = NULL;
	zend_long tile;

	ZVAL_UNDEF(&size);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            double w = 0.0, h = 0.0;
            ns_docktile_size((uintptr_t) tile, &w, &h);
            array_init(&size);
            add_index_double(&size, 0, w);
            add_index_double(&size, 1, h);
        
	RETURN_CTORW(&size);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setContentView)
{
	zval *tile_param = NULL, *view_param = NULL;
	zend_long tile, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tile)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &tile_param, &view_param);
	
            ns_docktile_set_content_view((uintptr_t) tile, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, contentView)
{
	zval *tile_param = NULL;
	zend_long tile, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            handle = (zend_long) ns_docktile_content_view((uintptr_t) tile);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, display)
{
	zval *tile_param = NULL;
	zend_long tile;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            ns_docktile_display((uintptr_t) tile);
        
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setShowsApplicationBadge)
{
	zend_bool flag;
	zval *tile_param = NULL, *flag_param = NULL;
	zend_long tile;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tile)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &tile_param, &flag_param);
	
            ns_docktile_set_shows_application_badge((uintptr_t) tile, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, showsApplicationBadge)
{
	zend_bool result = 0;
	zval *tile_param = NULL;
	zend_long tile;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            result = ns_docktile_shows_application_badge((uintptr_t) tile) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, setBadgeLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *tile_param = NULL, *label_param = NULL;
	zend_long tile;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(tile)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &tile_param, &label_param);
	zephir_get_strval(&label, label_param);
	
            ns_docktile_set_badge_label((uintptr_t) tile, Z_STRVAL(label));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, badgeLabel)
{
	zval label;
	zval *tile_param = NULL;
	zend_long tile;

	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            char buf[512];
            if (ns_docktile_badge_label((uintptr_t) tile, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&label, buf);
            } else {
                ZVAL_EMPTY_STRING(&label);
            }
        
	RETURN_CTORW(&label);
}

PHP_METHOD(AppKit_NS_NSDockTile_NSDockTile, owner)
{
	zval *tile_param = NULL;
	zend_long tile, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(tile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &tile_param);
	
            ptr = (zend_long)(uintptr_t) ns_docktile_owner((uintptr_t) tile);
        
	RETURN_LONG(ptr);
}

