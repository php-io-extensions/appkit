
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

#include "ns-fontmanager.h"
#include <stdint.h>



/**
 * NSFontManager — shared font conversion and discovery.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSFontManager_NSFontManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFontManager, NSFontManager, appkit, ns_nsfontmanager_nsfontmanager, appkit_ns_nsfontmanager_nsfontmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_fontmanager_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, destroy)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_fontmanager_destroy((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, isMultiple)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_fontmanager_is_multiple((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, selectedFont)
{
	zval *manager_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            handle = (zend_long) ns_fontmanager_selected_font((uintptr_t) manager);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, setSelectedFont)
{
	zend_bool isMultiple;
	zval *manager_param = NULL, *font_param = NULL, *isMultiple_param = NULL;
	zend_long manager, font;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(isMultiple)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &manager_param, &font_param, &isMultiple_param);
	if (!isMultiple_param) {
		isMultiple = 0;
	} else {
		}
	
            ns_fontmanager_set_selected_font((uintptr_t) manager, (uintptr_t) font, isMultiple ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontWithFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double size;
	zval family;
	zval *manager_param = NULL, *family_param = NULL, *traits_param = NULL, *weight_param = NULL, *size_param = NULL;
	zend_long manager, traits, weight, handle = 0;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(manager)
		Z_PARAM_STR(family)
		Z_PARAM_LONG(traits)
		Z_PARAM_LONG(weight)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &manager_param, &family_param, &traits_param, &weight_param, &size_param);
	zephir_get_strval(&family, family_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_fontmanager_font_with_family((uintptr_t) manager, Z_STRVAL(family), (unsigned) traits, (int) weight, (double) size);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, traitsOfFont)
{
	zval *manager_param = NULL, *font_param = NULL;
	zend_long manager, font, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &font_param);
	
            value = (zend_long) ns_fontmanager_traits_of_font((uintptr_t) manager, (uintptr_t) font);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, weightOfFont)
{
	zval *manager_param = NULL, *font_param = NULL;
	zend_long manager, font, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &font_param);
	
            value = (zend_long) ns_fontmanager_weight_of_font((uintptr_t) manager, (uintptr_t) font);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontsCount)
{
	zval *manager_param = NULL;
	zend_long manager, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            count = (zend_long) ns_fontmanager_available_fonts_count((uintptr_t) manager);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontAt)
{
	zval *manager_param = NULL, *index_param = NULL;
	zend_long manager, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_at((uintptr_t) manager, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontFamiliesCount)
{
	zval *manager_param = NULL;
	zend_long manager, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            count = (zend_long) ns_fontmanager_available_font_families_count((uintptr_t) manager);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontFamilyAt)
{
	zval *manager_param = NULL, *index_param = NULL;
	zend_long manager, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_family_at((uintptr_t) manager, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFont)
{
	zval *manager_param = NULL, *font_param = NULL;
	zend_long manager, font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &font_param);
	
            handle = (zend_long) ns_fontmanager_convert_font((uintptr_t) manager, (uintptr_t) font);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToSize)
{
	double size;
	zval *manager_param = NULL, *font_param = NULL, *size_param = NULL;
	zend_long manager, font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &font_param, &size_param);
	size = zephir_get_doubleval(size_param);
	
            handle = (zend_long) ns_fontmanager_convert_font_to_size((uintptr_t) manager, (uintptr_t) font, (double) size);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToFace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval face;
	zval *manager_param = NULL, *font_param = NULL, *face_param = NULL;
	zend_long manager, font, handle = 0;

	ZVAL_UNDEF(&face);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_STR(face)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &manager_param, &font_param, &face_param);
	zephir_get_strval(&face, face_param);
	
            handle = (zend_long) ns_fontmanager_convert_font_to_face((uintptr_t) manager, (uintptr_t) font, Z_STRVAL(face));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval family;
	zval *manager_param = NULL, *font_param = NULL, *family_param = NULL;
	zend_long manager, font, handle = 0;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &manager_param, &font_param, &family_param);
	zephir_get_strval(&family, family_param);
	
            handle = (zend_long) ns_fontmanager_convert_font_to_family((uintptr_t) manager, (uintptr_t) font, Z_STRVAL(family));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToHaveTrait)
{
	zval *manager_param = NULL, *font_param = NULL, *trait_param = NULL;
	zend_long manager, font, trait, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_LONG(trait)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &font_param, &trait_param);
	
            handle = (zend_long) ns_fontmanager_convert_font_to_have_trait((uintptr_t) manager, (uintptr_t) font, (unsigned) trait);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertFontToNotHaveTrait)
{
	zval *manager_param = NULL, *font_param = NULL, *trait_param = NULL;
	zend_long manager, font, trait, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_LONG(trait)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &font_param, &trait_param);
	
            handle = (zend_long) ns_fontmanager_convert_font_to_not_have_trait((uintptr_t) manager, (uintptr_t) font, (unsigned) trait);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, convertWeight)
{
	zend_bool up;
	zval *manager_param = NULL, *font_param = NULL, *up_param = NULL;
	zend_long manager, font, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(font)
		Z_PARAM_BOOL(up)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &font_param, &up_param);
	
            handle = (zend_long) ns_fontmanager_convert_weight((uintptr_t) manager, (uintptr_t) font, up ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, isEnabled)
{
	zend_bool result = 0;
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            result = ns_fontmanager_is_enabled((uintptr_t) manager) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, setEnabled)
{
	zend_bool enabled;
	zval *manager_param = NULL, *enabled_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &enabled_param);
	
            ns_fontmanager_set_enabled((uintptr_t) manager, enabled ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, currentFontAction)
{
	zval *manager_param = NULL;
	zend_long manager, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            value = (zend_long) ns_fontmanager_current_font_action((uintptr_t) manager);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontPanel)
{
	zend_bool create;
	zval *manager_param = NULL, *create_param = NULL;
	zend_long manager, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(create)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &manager_param, &create_param);
	if (!create_param) {
		create = 1;
	} else {
		}
	
            handle = (zend_long) ns_fontmanager_font_panel((uintptr_t) manager, create ? 1 : 0);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, orderFrontFontPanel)
{
	zval *manager_param = NULL;
	zend_long manager;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ns_fontmanager_order_front_font_panel((uintptr_t) manager);
        
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, fontNamedHasTraits)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *manager_param = NULL, *name_param = NULL, *traits_param = NULL;
	zend_long manager, traits;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(traits)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &manager_param, &name_param, &traits_param);
	zephir_get_strval(&name, name_param);
	
            result = ns_fontmanager_font_named_has_traits((uintptr_t) manager, Z_STRVAL(name), (unsigned) traits) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontNamesWithTraitsCount)
{
	zval *manager_param = NULL, *traits_param = NULL;
	zend_long manager, traits, count = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(traits)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &manager_param, &traits_param);
	
            count = (zend_long) ns_fontmanager_available_font_names_with_traits_count((uintptr_t) manager, (unsigned) traits);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, availableFontNameWithTraitsAt)
{
	zval *manager_param = NULL, *traits_param = NULL, *index_param = NULL;
	zend_long manager, traits, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_LONG(traits)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &manager_param, &traits_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_available_font_name_with_traits_at((uintptr_t) manager, (unsigned) traits, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, localizedNameForFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval family, face;
	zval *manager_param = NULL, *family_param = NULL, *face_param = NULL;
	zend_long manager;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&face);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(manager)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(face)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &manager_param, &family_param, &face_param);
	zephir_get_strval(&family, family_param);
	if (!face_param) {
		ZEPHIR_INIT_VAR(&face);
		ZVAL_STRING(&face, "");
	} else {
		zephir_get_strval(&face, face_param);
	}
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_fontmanager_localized_name_for_family((uintptr_t) manager, Z_STRVAL(family), Z_STRVAL(face), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSFontManager_NSFontManager, nsFontManager)
{
	zval *manager_param = NULL;
	zend_long manager, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(manager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &manager_param);
	
            ptr = (zend_long)(uintptr_t) ns_fontmanager_nsfontmanager((uintptr_t) manager);
        
	RETURN_LONG(ptr);
}

