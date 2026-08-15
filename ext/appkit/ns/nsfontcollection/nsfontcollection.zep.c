
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

#include "ns-fontcollection.h"
#include <stdint.h>



/**
 * NSFontCollection — named and query-based font lists.
 * NSMutableFontCollection mutation APIs are exposed on the same class (see OKF).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFontCollection_NSFontCollection)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFontCollection, NSFontCollection, appkit, ns_nsfontcollection_nsfontcollection, appkit_ns_nsfontcollection_nsfontcollection_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, wrap)
{
	zval *nsFontCollectionPtr_param = NULL;
	zend_long nsFontCollectionPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsFontCollectionPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsFontCollectionPtr_param);
	
            handle = (zend_long) ns_fontcollection_wrap((void *)(uintptr_t) nsFontCollectionPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, destroy)
{
	zval *collection_param = NULL;
	zend_long collection;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            ns_fontcollection_destroy((uintptr_t) collection);
        
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, withDescriptor)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            handle = (zend_long) ns_fontcollection_with_descriptor((uintptr_t) descriptor);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, withAllAvailable)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_fontcollection_with_all_available();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, withName)
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
	
            handle = (zend_long) ns_fontcollection_with_name(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, withNameVisibility)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long visibility, handle = 0;
	zval *name_param = NULL, *visibility_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(visibility)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &visibility_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_fontcollection_with_name_visibility(Z_STRVAL(name), (unsigned) visibility);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, show)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *collection_param = NULL, *name_param = NULL, *visibility_param = NULL;
	zend_long collection, visibility;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(collection)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(visibility)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &collection_param, &name_param, &visibility_param);
	zephir_get_strval(&name, name_param);
	
            result = ns_fontcollection_show((uintptr_t) collection, Z_STRVAL(name), (unsigned) visibility) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, hide)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long visibility;
	zval *name_param = NULL, *visibility_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(visibility)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &visibility_param);
	zephir_get_strval(&name, name_param);
	
            result = ns_fontcollection_hide(Z_STRVAL(name), (unsigned) visibility) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, rename)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long visibility;
	zval *oldName_param = NULL, *visibility_param = NULL, *newName_param = NULL;
	zval oldName, newName;

	ZVAL_UNDEF(&oldName);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(oldName)
		Z_PARAM_LONG(visibility)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &oldName_param, &visibility_param, &newName_param);
	zephir_get_strval(&oldName, oldName_param);
	zephir_get_strval(&newName, newName_param);
	
            result = ns_fontcollection_rename(Z_STRVAL(oldName), (unsigned) visibility, Z_STRVAL(newName)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, allNamesCount)
{
	zend_long count = 0;
	
            count = (zend_long) ns_fontcollection_all_names_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, allNameAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontcollection_all_name_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, queryDescriptorsCount)
{
	zval *collection_param = NULL;
	zend_long collection, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            count = (zend_long) ns_fontcollection_query_descriptors_count((uintptr_t) collection);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, queryDescriptorAt)
{
	zval *collection_param = NULL, *index_param = NULL;
	zend_long collection, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &index_param);
	
            handle = (zend_long) ns_fontcollection_query_descriptor_at((uintptr_t) collection, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, exclusionDescriptorsCount)
{
	zval *collection_param = NULL;
	zend_long collection, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            count = (zend_long) ns_fontcollection_exclusion_descriptors_count((uintptr_t) collection);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, exclusionDescriptorAt)
{
	zval *collection_param = NULL, *index_param = NULL;
	zend_long collection, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &index_param);
	
            handle = (zend_long) ns_fontcollection_exclusion_descriptor_at((uintptr_t) collection, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, matchingDescriptorsCount)
{
	zval *collection_param = NULL;
	zend_long collection, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            count = (zend_long) ns_fontcollection_matching_descriptors_count((uintptr_t) collection);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, matchingDescriptorAt)
{
	zval *collection_param = NULL, *index_param = NULL;
	zend_long collection, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &index_param);
	
            handle = (zend_long) ns_fontcollection_matching_descriptor_at((uintptr_t) collection, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, matchingDescriptorsForFamilyCount)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval family;
	zval *collection_param = NULL, *family_param = NULL;
	zend_long collection, count = 0;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &collection_param, &family_param);
	zephir_get_strval(&family, family_param);
	
            count = (zend_long) ns_fontcollection_matching_descriptors_for_family_count((uintptr_t) collection, Z_STRVAL(family));
        
	RETURN_MM_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, matchingDescriptorForFamilyAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval family;
	zval *collection_param = NULL, *family_param = NULL, *index_param = NULL;
	zend_long collection, index, handle = 0;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(collection)
		Z_PARAM_STR(family)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &collection_param, &family_param, &index_param);
	zephir_get_strval(&family, family_param);
	
            handle = (zend_long) ns_fontcollection_matching_descriptor_for_family_at((uintptr_t) collection, Z_STRVAL(family), (int) index);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, mutableWithDescriptor)
{
	zval *descriptor_param = NULL;
	zend_long descriptor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &descriptor_param);
	
            handle = (zend_long) ns_fontcollection_mutable_with_descriptor((uintptr_t) descriptor);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, mutableWithAllAvailable)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_fontcollection_mutable_with_all_available();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, mutableWithName)
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
	
            handle = (zend_long) ns_fontcollection_mutable_with_name(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, mutableWithNameVisibility)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long visibility, handle = 0;
	zval *name_param = NULL, *visibility_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(visibility)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &visibility_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_fontcollection_mutable_with_name_visibility(Z_STRVAL(name), (unsigned) visibility);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, addQueryForDescriptor)
{
	zval *collection_param = NULL, *descriptor_param = NULL;
	zend_long collection, descriptor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &descriptor_param);
	
            ns_fontcollection_add_query_for_descriptor((uintptr_t) collection, (uintptr_t) descriptor);
        
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, removeQueryForDescriptor)
{
	zval *collection_param = NULL, *descriptor_param = NULL;
	zend_long collection, descriptor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(collection)
		Z_PARAM_LONG(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &collection_param, &descriptor_param);
	
            ns_fontcollection_remove_query_for_descriptor((uintptr_t) collection, (uintptr_t) descriptor);
        
}

PHP_METHOD(AppKit_NS_NSFontCollection_NSFontCollection, nsFontCollection)
{
	zval *collection_param = NULL;
	zend_long collection, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(collection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &collection_param);
	
            ptr = (zend_long)(uintptr_t) ns_fontcollection_nsfontcollection((uintptr_t) collection);
        
	RETURN_LONG(ptr);
}

