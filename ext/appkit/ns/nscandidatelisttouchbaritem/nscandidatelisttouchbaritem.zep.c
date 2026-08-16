
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

#include "ns-candidatelisttouchbaritem.h"
#include <stdint.h>



/** NSCandidateListTouchBarItem */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCandidateListTouchBarItem, NSCandidateListTouchBarItem, appkit, ns_nscandidatelisttouchbaritem_nscandidatelisttouchbaritem, appkit_ns_nscandidatelisttouchbaritem_nscandidatelisttouchbaritem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, create)
{
	zend_long h = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	 h = (zend_long) ns_candidatelisttouchbaritem_create(Z_STRVAL(identifier)); 
	RETURN_MM_LONG(h);
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, wrap)
{
	zval *ptr_param = NULL;
	zend_long ptr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ptr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ptr_param);
	 handle = (zend_long) ns_candidatelisttouchbaritem_wrap((void *)(uintptr_t) ptr); 
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ns_candidatelisttouchbaritem_destroy((uintptr_t) item); 
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, nsCandidateListTouchBarItem)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 ptr = (zend_long)(uintptr_t) ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem((uintptr_t) item); 
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, setCollapsed)
{
	zend_bool flag;
	zval *item_param = NULL, *flag_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &flag_param);
	 ns_candidatelisttouchbaritem_set_collapsed((uintptr_t) item, flag ? 1 : 0); 
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, isCollapsed)
{
	zend_bool r = 0;
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	 r = ns_candidatelisttouchbaritem_is_collapsed((uintptr_t) item) == 1; 
	RETURN_BOOL(r);
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, setCandidates)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval candidates;
	zval *item_param = NULL, *candidates_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&candidates);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ARRAY(candidates)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &candidates_param);
	zephir_get_arrval(&candidates, candidates_param);
	
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(candidates), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_candidatelisttouchbaritem_set_candidates((uintptr_t) item, cstrings, count);
    
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSCandidateListTouchBarItem_NSCandidateListTouchBarItem, getCandidates)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *item_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &item_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
        int count = ns_candidatelisttouchbaritem_candidates_count((uintptr_t) item); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_candidatelisttouchbaritem_candidate_at((uintptr_t) item, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    
	RETURN_CTOR(&out);
}

