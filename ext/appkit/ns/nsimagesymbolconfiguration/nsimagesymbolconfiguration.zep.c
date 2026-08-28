
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
#include "src/ns-image.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSImageSymbolConfiguration, NSImageSymbolConfiguration, appkit, ns_nsimagesymbolconfiguration_nsimagesymbolconfiguration, appkit_ns_nsimagesymbolconfiguration_nsimagesymbolconfiguration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithPointSizeWeightScale)
{
	zend_long scale;
	zval *pointSize_param = NULL, *weight_param = NULL, *scale_param = NULL, _0, _1, _2;
	double pointSize, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(pointSize)
		Z_PARAM_ZVAL(weight)
		Z_PARAM_LONG(scale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &pointSize_param, &weight_param, &scale_param);
	pointSize = zephir_get_doubleval(pointSize_param);
	weight = zephir_get_doubleval(weight_param);
	ZVAL_DOUBLE(&_0, pointSize);
	ZVAL_DOUBLE(&_1, weight);
	ZVAL_LONG(&_2, scale);
	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_with_point_size_weight_scale(&_0, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithPointSizeWeight)
{
	zval *pointSize_param = NULL, *weight_param = NULL, _0, _1;
	double pointSize, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(pointSize)
		Z_PARAM_ZVAL(weight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pointSize_param, &weight_param);
	pointSize = zephir_get_doubleval(pointSize_param);
	weight = zephir_get_doubleval(weight_param);
	ZVAL_DOUBLE(&_0, pointSize);
	ZVAL_DOUBLE(&_1, weight);
	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_with_point_size_weight(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithTextStyleScale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long scale;
	zval *style_param = NULL, *scale_param = NULL, _0;
	zval style;

	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(style)
		Z_PARAM_LONG(scale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &style_param, &scale_param);
	zephir_get_strval(&style, style_param);
	ZVAL_LONG(&_0, scale);
	RETURN_MM_LONG(ns_nsimagesymbolconfiguration_configuration_with_text_style_scale(&style, &_0));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithTextStyle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *style_param = NULL;
	zval style;

	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &style_param);
	zephir_get_strval(&style, style_param);
	RETURN_MM_LONG(ns_nsimagesymbolconfiguration_configuration_with_text_style(&style));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithScale)
{
	zval *scale_param = NULL, _0;
	zend_long scale;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(scale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &scale_param);
	ZVAL_LONG(&_0, scale);
	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_with_scale(&_0));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationPreferringMonochrome)
{

	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_preferring_monochrome());
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationPreferringHierarchical)
{

	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_preferring_hierarchical());
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithHierarchicalColor)
{
	zval *hierarchicalColor_param = NULL, _0;
	zend_long hierarchicalColor;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(hierarchicalColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &hierarchicalColor_param);
	ZVAL_LONG(&_0, hierarchicalColor);
	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_with_hierarchical_color(&_0));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationWithPaletteColors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *paletteColors_param = NULL;
	zval paletteColors;

	ZVAL_UNDEF(&paletteColors);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(paletteColors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &paletteColors_param);
	zephir_get_arrval(&paletteColors, paletteColors_param);
	RETURN_MM_LONG(ns_nsimagesymbolconfiguration_configuration_with_palette_colors(&paletteColors));
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationPreferringMulticolor)
{

	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_preferring_multicolor());
}

PHP_METHOD(AppKit_NS_NSImageSymbolConfiguration_NSImageSymbolConfiguration, configurationByApplyingConfiguration)
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
	RETURN_LONG(ns_nsimagesymbolconfiguration_configuration_by_applying_configuration(&_0, &_1));
}

