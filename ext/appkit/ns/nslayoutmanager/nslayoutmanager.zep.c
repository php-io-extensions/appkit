
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

#include "ns-layoutmanager.h"
#include <stdint.h>



/**
 * NSLayoutManager — maps text storage into text containers.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutManager_NSLayoutManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutManager, NSLayoutManager, appkit, ns_nslayoutmanager_nslayoutmanager, appkit_ns_nslayoutmanager_nslayoutmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_layoutmanager_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, wrap)
{
	zval *nsLayoutManagerPtr_param = NULL;
	zend_long nsLayoutManagerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsLayoutManagerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsLayoutManagerPtr_param);
	
            handle = (zend_long) ns_layoutmanager_wrap((void *)(uintptr_t) nsLayoutManagerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, destroy)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_layoutmanager_destroy((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, nsLayoutManager)
{
	zval *manager_param = NULL;
	zend_long manager, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ptr = (zend_long)(uintptr_t) ns_layoutmanager_nslayoutmanager((uintptr_t) manager);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage)
{
	zval *manager_param = NULL, *storage_param = NULL;
	zend_long manager, storage;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(storage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &storage_param);
	
            ns_layoutmanager_replace_text_storage((uintptr_t) manager, (uintptr_t) storage);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer)
{
	zval *manager_param = NULL, *container_param = NULL;
	zend_long manager, container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &container_param);
	
            ns_layoutmanager_add_text_container((uintptr_t) manager, (uintptr_t) container);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex)
{
	zval *manager_param = NULL, *index_param = NULL;
	zend_long manager, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &index_param);
	
            ns_layoutmanager_remove_text_container_at_index((uintptr_t) manager, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainersCount)
{
	zval *manager_param = NULL;
	zend_long manager, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            value = (zend_long) ns_layoutmanager_text_containers_count((uintptr_t) manager);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry)
{
	zval *manager_param = NULL, *container_param = NULL;
	zend_long manager, container;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &container_param);
	
            ns_layoutmanager_text_container_changed_geometry((uintptr_t) manager, (uintptr_t) container);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_layoutmanager_set_shows_invisible_characters((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_layoutmanager_shows_invisible_characters((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_layoutmanager_set_shows_control_characters((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_layoutmanager_shows_control_characters((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation)
{
	zend_bool flag;
	zval *manager_param = NULL, *flag_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &flag_param);
	
            ns_layoutmanager_set_uses_default_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_layoutmanager_uses_default_hyphenation((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultFont)
{
	zval *manager_param = NULL, *font_param = NULL;
	zend_long manager, font;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &font_param);
	
            ns_layoutmanager_set_default_font((uintptr_t) manager, (uintptr_t) font);
        
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultFont)
{
	zval *manager_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            handle = (zend_long) ns_layoutmanager_default_font((uintptr_t) manager);
        
	RETURN_LONG(handle);
}

