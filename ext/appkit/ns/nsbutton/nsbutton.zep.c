
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
#include "src/ns-button.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSButton_NSButton)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSButton, NSButton, appkit, ns_nsbutton_nsbutton, appkit_ns_nsbutton_nsbutton_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithTitleImageTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long image, target;
	zval *title_param = NULL, *image_param = NULL, *target_param = NULL, *action_param = NULL, _0, _1;
	zval title, action;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(title)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &title_param, &image_param, &target_param, &action_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, image);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nsbutton_button_with_title_image_target_action(&title, &_0, &_1, &action));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithTitleTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long target;
	zval *title_param = NULL, *target_param = NULL, *action_param = NULL, _0;
	zval title, action;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(title)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &title_param, &target_param, &action_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, target);
	RETURN_MM_LONG(ns_nsbutton_button_with_title_target_action(&title, &_0, &action));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, buttonWithImageTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *image_param = NULL, *target_param = NULL, *action_param = NULL, _0, _1;
	zend_long image, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &image_param, &target_param, &action_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, image);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nsbutton_button_with_image_target_action(&_0, &_1, &action));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, checkboxWithTitleTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long target;
	zval *title_param = NULL, *target_param = NULL, *action_param = NULL, _0;
	zval title, action;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(title)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &title_param, &target_param, &action_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, target);
	RETURN_MM_LONG(ns_nsbutton_checkbox_with_title_target_action(&title, &_0, &action));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, radioButtonWithTitleTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long target;
	zval *title_param = NULL, *target_param = NULL, *action_param = NULL, _0;
	zval title, action;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&action);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(title)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &title_param, &target_param, &action_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, target);
	RETURN_MM_LONG(ns_nsbutton_radio_button_with_title_target_action(&title, &_0, &action));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setButtonType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ns_nsbutton_set_button_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, title)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_set_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, alternateTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_alternate_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setAlternateTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_set_alternate_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, hasDestructiveAction)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_has_destructive_action(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setHasDestructiveAction)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_has_destructive_action(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, sound)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_sound(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setSound)
{
	zval *handle_param = NULL, *sound_param = NULL, _0, _1;
	zend_long handle, sound;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sound_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sound);
	ns_nsbutton_set_sound(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, isSpringLoaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_is_spring_loaded(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setSpringLoaded)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_spring_loaded(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, maxAcceleratorLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_max_accelerator_level(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setMaxAcceleratorLevel)
{
	zval *handle_param = NULL, *level_param = NULL, _0, _1;
	zend_long handle, level;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(level)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &level_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, level);
	ns_nsbutton_set_max_accelerator_level(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setPeriodicDelayInterval)
{
	double delay, interval;
	zval *handle_param = NULL, *delay_param = NULL, *interval_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(delay)
		Z_PARAM_ZVAL(interval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &delay_param, &interval_param);
	delay = zephir_get_doubleval(delay_param);
	interval = zephir_get_doubleval(interval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, delay);
	ZVAL_DOUBLE(&_2, interval);
	ns_nsbutton_set_periodic_delay_interval(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, getPeriodicDelayInterval)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_get_periodic_delay_interval(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, bezelStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_bezel_style(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setBezelStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	ns_nsbutton_set_bezel_style(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, isBordered)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_is_bordered(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setBordered)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_bordered(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, isTransparent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_is_transparent(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setTransparent)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_transparent(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, showsBorderOnlyWhileMouseInside)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_shows_border_only_while_mouse_inside(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setShowsBorderOnlyWhileMouseInside)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_shows_border_only_while_mouse_inside(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, bezelColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_bezel_color(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setBezelColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	ns_nsbutton_set_bezel_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, contentTintColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_content_tint_color(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setContentTintColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	ns_nsbutton_set_content_tint_color(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, image)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_image(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nsbutton_set_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, alternateImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_alternate_image(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setAlternateImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nsbutton_set_alternate_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, imagePosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_image_position(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setImagePosition)
{
	zval *handle_param = NULL, *position_param = NULL, _0, _1;
	zend_long handle, position;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &position_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, position);
	ns_nsbutton_set_image_position(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, imageScaling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_image_scaling(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setImageScaling)
{
	zval *handle_param = NULL, *scaling_param = NULL, _0, _1;
	zend_long handle, scaling;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scaling)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scaling_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scaling);
	ns_nsbutton_set_image_scaling(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, imageHugsTitle)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_image_hugs_title(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setImageHugsTitle)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_image_hugs_title(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, symbolConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_symbol_configuration(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setSymbolConfiguration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	ns_nsbutton_set_symbol_configuration(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_state(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setState)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	ns_nsbutton_set_state(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, allowsMixedState)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsbutton_allows_mixed_state(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setAllowsMixedState)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_set_allows_mixed_state(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setNextState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_set_next_state(&_0);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, highlight)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ns_nsbutton_highlight(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, keyEquivalent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_key_equivalent(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setKeyEquivalent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval keyEquivalent;
	zval *handle_param = NULL, *keyEquivalent_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&keyEquivalent);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(keyEquivalent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &keyEquivalent_param);
	zephir_get_strval(&keyEquivalent, keyEquivalent_param);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_set_key_equivalent(&_0, &keyEquivalent);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, keyEquivalentModifierMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_key_equivalent_modifier_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, setKeyEquivalentModifierMask)
{
	zval *handle_param = NULL, *mask_param = NULL, _0, _1;
	zend_long handle, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	ns_nsbutton_set_key_equivalent_modifier_mask(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, performKeyEquivalent)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	r = ns_nsbutton_perform_key_equivalent(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, compressWithPrioritizedCompressionOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prioritizedOptions;
	zval *handle_param = NULL, *prioritizedOptions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&prioritizedOptions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(prioritizedOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &prioritizedOptions_param);
	zephir_get_arrval(&prioritizedOptions, prioritizedOptions_param);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_compress_with_prioritized_compression_options(&_0, &prioritizedOptions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, minimumSizeWithPrioritizedCompressionOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prioritizedOptions;
	zval *handle_param = NULL, *prioritizedOptions_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&prioritizedOptions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(prioritizedOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &prioritizedOptions_param);
	zephir_get_arrval(&prioritizedOptions, prioritizedOptions_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_nsbutton_minimum_size_with_prioritized_compression_options(&result, &_0, &prioritizedOptions);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSButton_NSButton, activeCompressionOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsbutton_active_compression_options(&_0));
}

