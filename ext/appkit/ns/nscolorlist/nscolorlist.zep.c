
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

#include "ns-colorlist.h"
#include <stdint.h>



/**
 * NSColorList — named swatch lists for the color panel.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSColorList_NSColorList)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSColorList, NSColorList, appkit, ns_nscolorlist_nscolorlist, appkit_ns_nscolorlist_nscolorlist_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, wrap)
{
	zval *nsColorListPtr_param = NULL;
	zend_long nsColorListPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsColorListPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsColorListPtr_param);
	
            handle = (zend_long) ns_colorlist_wrap((void *)(uintptr_t) nsColorListPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, destroy)
{
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            ns_colorlist_destroy((uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, availableCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_colorlist_available_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, availableAt)
{
	zval *index_param = NULL;
	zend_long index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            handle = (zend_long) ns_colorlist_available_at((int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, named)
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
	
            handle = (zend_long) ns_colorlist_named(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &name_param);
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}
	
            handle = (zend_long) ns_colorlist_create(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, createFromFile)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *path_param = NULL;
	zval name, path;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &path_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&path, path_param);
	
            handle = (zend_long) ns_colorlist_create_from_file(Z_STRVAL(name), Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, name)
{
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorlist_name((uintptr_t) list, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, isEditable)
{
	zend_bool result = 0;
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            result = ns_colorlist_is_editable((uintptr_t) list) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, setColor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *list_param = NULL, *color_param = NULL, *key_param = NULL;
	zend_long list, color;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(list)
		Z_PARAM_LONG(color)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &list_param, &color_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            ns_colorlist_set_color((uintptr_t) list, (uintptr_t) color, Z_STRVAL(key));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, insertColor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *list_param = NULL, *color_param = NULL, *key_param = NULL, *index_param = NULL;
	zend_long list, color, index;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(list)
		Z_PARAM_LONG(color)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &list_param, &color_param, &key_param, &index_param);
	zephir_get_strval(&key, key_param);
	
            ns_colorlist_insert_color((uintptr_t) list, (uintptr_t) color, Z_STRVAL(key), (int) index);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, removeColorWithKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *list_param = NULL, *key_param = NULL;
	zend_long list;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &list_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            ns_colorlist_remove_color_with_key((uintptr_t) list, Z_STRVAL(key));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, colorWithKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *list_param = NULL, *key_param = NULL;
	zend_long list, handle = 0;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &list_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            handle = (zend_long) ns_colorlist_color_with_key((uintptr_t) list, Z_STRVAL(key));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, allKeysCount)
{
	zval *list_param = NULL;
	zend_long list, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            count = (zend_long) ns_colorlist_all_keys_count((uintptr_t) list);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, allKeyAt)
{
	zval *list_param = NULL, *index_param = NULL;
	zend_long list, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &list_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_colorlist_all_key_at((uintptr_t) list, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, writeToUrl)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *list_param = NULL, *url_param = NULL;
	zend_long list;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(list)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &list_param, &url_param);
	if (!url_param) {
		ZEPHIR_INIT_VAR(&url);
		ZVAL_STRING(&url, "");
	} else {
		zephir_get_strval(&url, url_param);
	}
	
            result = ns_colorlist_write_to_url((uintptr_t) list, Z_STRVAL(url)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, removeFile)
{
	zval *list_param = NULL;
	zend_long list;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            ns_colorlist_remove_file((uintptr_t) list);
        
}

PHP_METHOD(AppKit_NS_NSColorList_NSColorList, nsColorList)
{
	zval *list_param = NULL;
	zend_long list, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(list)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &list_param);
	
            ptr = (zend_long)(uintptr_t) ns_colorlist_nscolorlist((uintptr_t) list);
        
	RETURN_LONG(ptr);
}

