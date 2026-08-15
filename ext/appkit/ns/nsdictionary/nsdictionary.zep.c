
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

#include "ns-dictionary.h"
#include <stdint.h>



/**
 * NSDictionary — Foundation key/value collections (mutable build, immutable copy).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDictionary_NSDictionary)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDictionary, NSDictionary, appkit, ns_nsdictionary_nsdictionary, appkit_ns_nsdictionary_nsdictionary_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, createMutable)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_dictionary_create_mutable();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, wrap)
{
	zval *nsDictionaryPtr_param = NULL;
	zend_long nsDictionaryPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDictionaryPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDictionaryPtr_param);
	
            handle = (zend_long) ns_dictionary_wrap((void *)(uintptr_t) nsDictionaryPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, destroy)
{
	zval *dictionary_param = NULL;
	zend_long dictionary;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dictionary_param);
	
            ns_dictionary_destroy((uintptr_t) dictionary);
        
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, nsDictionary)
{
	zval *dictionary_param = NULL;
	zend_long dictionary, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dictionary_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionary_nsdictionary((uintptr_t) dictionary);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, count)
{
	zval *dictionary_param = NULL;
	zend_long dictionary, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dictionary_param);
	
            value = (zend_long) ns_dictionary_count((uintptr_t) dictionary);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key, value;
	zval *dictionary_param = NULL, *key_param = NULL, *value_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &dictionary_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	zephir_get_strval(&value, value_param);
	
            ns_dictionary_set_string((uintptr_t) dictionary, Z_STRVAL(key), Z_STRVAL(value));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionary_get_string((uintptr_t) dictionary, Z_STRVAL(key), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL, *value_param = NULL;
	zend_long dictionary, value;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &dictionary_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	
            ns_dictionary_set_int((uintptr_t) dictionary, Z_STRVAL(key), (long long) value);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary, value;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	value = 0;
	
            long long out = 0;
            if (ns_dictionary_get_int((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                value = (zend_long) out;
            }
        
	RETURN_MM_LONG(value);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL, *value_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &dictionary_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	value = zephir_get_doubleval(value_param);
	
            ns_dictionary_set_double((uintptr_t) dictionary, Z_STRVAL(key), (double) value);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getDouble)
{
	double value;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	value =  (0.0);
	
            double out = 0.0;
            if (ns_dictionary_get_double((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                value = out;
            }
        
	RETURN_MM_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool value;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL, *value_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &dictionary_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	
            ns_dictionary_set_bool((uintptr_t) dictionary, Z_STRVAL(key), value ? 1 : 0);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, isTrue)
{
	zend_bool result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	result = 0;
	
            int out = 0;
            if (ns_dictionary_get_bool((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                result = out == 1;
            }
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, setDictionary)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL, *valueDictionary_param = NULL;
	zend_long dictionary, valueDictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(valueDictionary)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &dictionary_param, &key_param, &valueDictionary_param);
	zephir_get_strval(&key, key_param);
	
            ns_dictionary_set_dictionary((uintptr_t) dictionary, Z_STRVAL(key), (uintptr_t) valueDictionary);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, getDictionary)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary, handle = 0;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            handle = (zend_long) ns_dictionary_get_dictionary((uintptr_t) dictionary, Z_STRVAL(key));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, hasKey)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *dictionary_param = NULL, *key_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dictionary)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &dictionary_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            result = ns_dictionary_has_key((uintptr_t) dictionary, Z_STRVAL(key)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, copyImmutable)
{
	zval *dictionary_param = NULL;
	zend_long dictionary, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dictionary_param);
	
            handle = (zend_long) ns_dictionary_copy_immutable((uintptr_t) dictionary);
        
	RETURN_LONG(handle);
}

/**
 * Build a mutable dictionary from a PHP associative array.
 * Supports string, int, float, bool values and nested arrays.
 */
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, fromArray)
{
	zend_long handle;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL;
	zval data;

	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_arrval(&data, data_param);
	handle = 0;
	
            zval *val;
            zend_string *key;
            handle = (zend_long) ns_dictionary_create_mutable();
            ZEND_HASH_FOREACH_STR_KEY_VAL(Z_ARRVAL(data), key, val) {
                if (!key) {
                    continue;
                }
                switch (Z_TYPE_P(val)) {
                    case IS_STRING:
                        ns_dictionary_set_string((uintptr_t) handle, ZSTR_VAL(key), Z_STRVAL_P(val));
                        break;
                    case IS_LONG:
                        ns_dictionary_set_int((uintptr_t) handle, ZSTR_VAL(key), (long long) Z_LVAL_P(val));
                        break;
                    case IS_DOUBLE:
                        ns_dictionary_set_double((uintptr_t) handle, ZSTR_VAL(key), Z_DVAL_P(val));
                        break;
                    case IS_TRUE:
                        ns_dictionary_set_bool((uintptr_t) handle, ZSTR_VAL(key), 1);
                        break;
                    case IS_FALSE:
                        ns_dictionary_set_bool((uintptr_t) handle, ZSTR_VAL(key), 0);
                        break;
                    default:
                        break;
                }
            } ZEND_HASH_FOREACH_END();
        
	RETURN_MM_LONG(handle);
}

/**
 * Export string/int/double/bool values to a PHP array (string keys only).
 */
PHP_METHOD(AppKit_NS_NSDictionary_NSDictionary, toArray)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *dictionary_param = NULL;
	zend_long dictionary;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dictionary)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &dictionary_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_dictionary_keys_count((uintptr_t) dictionary);
            int i;
            for (i = 0; i < count; i++) {
                char key[4096];
                char strbuf[4096];
                long long ivalue = 0;
                double dvalue = 0.0;
                int bvalue = 0;
                key[0] = '\0';
                if (!ns_dictionary_key_at((uintptr_t) dictionary, i, key, (int) sizeof(key))) {
                    continue;
                }
                strbuf[0] = '\0';
                if (ns_dictionary_get_string((uintptr_t) dictionary, key, strbuf, (int) sizeof(strbuf))) {
                    add_assoc_string(&out, key, strbuf);
                    continue;
                }
                if (ns_dictionary_get_int((uintptr_t) dictionary, key, &ivalue)) {
                    add_assoc_long(&out, key, (zend_long) ivalue);
                    continue;
                }
                if (ns_dictionary_get_double((uintptr_t) dictionary, key, &dvalue)) {
                    add_assoc_double(&out, key, dvalue);
                    continue;
                }
                if (ns_dictionary_get_bool((uintptr_t) dictionary, key, &bvalue)) {
                    add_assoc_bool(&out, key, bvalue ? 1 : 0);
                }
            }
        
	RETURN_CTOR(&out);
}

