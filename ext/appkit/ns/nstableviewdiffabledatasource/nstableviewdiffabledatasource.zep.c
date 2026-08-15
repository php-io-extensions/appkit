
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

#include "ns-tableviewdiffable.h"
#include <stdint.h>



/**
 * Simplified string-identifier NSTableViewDiffableDataSource.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTableViewDiffableDataSource, NSTableViewDiffableDataSource, appkit, ns_nstableviewdiffabledatasource_nstableviewdiffabledatasource, appkit_ns_nstableviewdiffabledatasource_nstableviewdiffabledatasource_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, create)
{
	zval *table_param = NULL;
	zend_long table, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(table)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &table_param);
	
            handle = (zend_long) ns_tableviewdiffable_create((uintptr_t) table);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, destroy)
{
	zval *source_param = NULL;
	zend_long source;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	
            ns_tableviewdiffable_destroy((uintptr_t) source);
        
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, setItemTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval itemId, title;
	zval *source_param = NULL, *itemId_param = NULL, *title_param = NULL;
	zend_long source;

	ZVAL_UNDEF(&itemId);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(source)
		Z_PARAM_STR(itemId)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &source_param, &itemId_param, &title_param);
	zephir_get_strval(&itemId, itemId_param);
	zephir_get_strval(&title, title_param);
	
            ns_tableviewdiffable_set_item_title((uintptr_t) source, Z_STRVAL(itemId), Z_STRVAL(title));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, apply)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool animating;
	zval itemIds;
	zval sectionId;
	zval *source_param = NULL, *sectionId_param = NULL, *itemIds_param = NULL, *animating_param = NULL;
	zend_long source;

	ZVAL_UNDEF(&sectionId);
	ZVAL_UNDEF(&itemIds);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(source)
		Z_PARAM_STR(sectionId)
		Z_PARAM_ARRAY(itemIds)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(animating)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &source_param, &sectionId_param, &itemIds_param, &animating_param);
	zephir_get_strval(&sectionId, sectionId_param);
	zephir_get_arrval(&itemIds, itemIds_param);
	if (!animating_param) {
		animating = 1;
	} else {
		}
	
            zval *item;
            const char *cids[1024];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(itemIds), item) {
                if (count >= 1024) {
                    break;
                }
                convert_to_string(item);
                cids[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_tableviewdiffable_apply((uintptr_t) source, Z_STRVAL(sectionId), cids, count, animating ? 1 : 0);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, itemCount)
{
	zval *source_param = NULL;
	zend_long source, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	
            value = (zend_long) ns_tableviewdiffable_item_count((uintptr_t) source);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSTableViewDiffableDataSource_NSTableViewDiffableDataSource, itemIdAt)
{
	zval *source_param = NULL, *index_param = NULL;
	zend_long source, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &source_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_tableviewdiffable_item_id_at((uintptr_t) source, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

