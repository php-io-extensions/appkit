
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

#include "ns-pathcontrol.h"
#include <stdint.h>



/**
 * NSPathControl path browser view.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSPathControl_NSPathControl)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPathControl, NSPathControl, appkit, ns_nspathcontrol_nspathcontrol, appkit_ns_nspathcontrol_nspathcontrol_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, create)
{
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long x, y, width, height, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &width_param, &height_param);
	
            handle = (zend_long) ns_pathcontrol_create((double) x, (double) y, (double) width, (double) height);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, destroy)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            ns_pathcontrol_destroy((uintptr_t) control);
        
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setUrlPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *control_param = NULL, *path_param = NULL;
	zend_long control;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &control_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            ns_pathcontrol_set_url_path((uintptr_t) control, Z_STRVAL(path));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getUrlPath)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcontrol_get_url_path((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPathStyle)
{
	zval *control_param = NULL, *style_param = NULL;
	zend_long control, style;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &style_param);
	
            ns_pathcontrol_set_path_style((uintptr_t) control, (int) style);
        
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getPathStyle)
{
	zval *control_param = NULL;
	zend_long control, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            value = (zend_long) ns_pathcontrol_get_path_style((uintptr_t) control);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setEditable)
{
	zend_bool flag;
	zval *control_param = NULL, *flag_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &flag_param);
	
            ns_pathcontrol_set_editable((uintptr_t) control, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, isEditable)
{
	zend_bool result = 0;
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            result = ns_pathcontrol_is_editable((uintptr_t) control) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPlaceholderString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval placeholder;
	zval *control_param = NULL, *placeholder_param = NULL;
	zend_long control;

	ZVAL_UNDEF(&placeholder);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_STR(placeholder)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &control_param, &placeholder_param);
	zephir_get_strval(&placeholder, placeholder_param);
	
            ns_pathcontrol_set_placeholder_string((uintptr_t) control, Z_STRVAL(placeholder));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getPlaceholderString)
{
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_pathcontrol_get_placeholder_string((uintptr_t) control, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setBackgroundColor)
{
	zval *control_param = NULL, *color_param = NULL;
	zend_long control, color;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &control_param, &color_param);
	
            ns_pathcontrol_set_background_color((uintptr_t) control, (uintptr_t) color);
        
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setAllowedTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval types;
	zval *control_param = NULL, *types_param = NULL;
	zend_long control;

	ZVAL_UNDEF(&types);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(control)
		Z_PARAM_ARRAY(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &control_param, &types_param);
	zephir_get_arrval(&types, types_param);
	
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(types), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_pathcontrol_set_allowed_types((uintptr_t) control, cnames, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, pollChange)
{
	zend_bool result = 0;
	zval *control_param = NULL;
	zend_long control;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(control)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &control_param);
	
            result = ns_pathcontrol_poll_change((uintptr_t) control) == 1;
        
	RETURN_BOOL(result);
}

