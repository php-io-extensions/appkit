
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
#include "src/ns-fontdescriptor.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSFontDescriptor_NSFontDescriptor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSFontDescriptor, NSFontDescriptor, appkit, ns_nsfontdescriptor_nsfontdescriptor, appkit_ns_nsfontdescriptor_nsfontdescriptor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, postscriptName)
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
	ns_nsfontdescriptor_postscript_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, pointSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsfontdescriptor_point_size(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matrix)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfontdescriptor_matrix(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, symbolicTraits)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfontdescriptor_symbolic_traits(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, requiresFontAssetRequest)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsfontdescriptor_requires_font_asset_request(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, objectForKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attribute;
	zval *handle_param = NULL, *attribute_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&attribute);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(attribute)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &attribute_param);
	zephir_get_strval(&attribute, attribute_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsfontdescriptor_object_for_key(&_0, &attribute));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsfontdescriptor_font_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithFontAttributes)
{
	zval *attributes_param = NULL, _0;
	zend_long attributes;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attributes_param);
	ZVAL_LONG(&_0, attributes);
	RETURN_LONG(ns_nsfontdescriptor_font_descriptor_with_font_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithNameSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double size;
	zval *fontName_param = NULL, *size_param = NULL, _0;
	zval fontName;

	ZVAL_UNDEF(&fontName);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(fontName)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &fontName_param, &size_param);
	zephir_get_strval(&fontName, fontName_param);
	size = zephir_get_doubleval(size_param);
	ZVAL_DOUBLE(&_0, size);
	RETURN_MM_LONG(ns_nsfontdescriptor_font_descriptor_with_name_size(&fontName, &_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithNameMatrix)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long matrix;
	zval *fontName_param = NULL, *matrix_param = NULL, _0;
	zval fontName;

	ZVAL_UNDEF(&fontName);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(fontName)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &fontName_param, &matrix_param);
	zephir_get_strval(&fontName, fontName_param);
	ZVAL_LONG(&_0, matrix);
	RETURN_MM_LONG(ns_nsfontdescriptor_font_descriptor_with_name_matrix(&fontName, &_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, initWithFontAttributes)
{
	zval *attributes_param = NULL, _0;
	zend_long attributes;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attributes_param);
	ZVAL_LONG(&_0, attributes);
	RETURN_LONG(ns_nsfontdescriptor_init_with_font_attributes(&_0));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingFontDescriptorsWithMandatoryKeys)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *mandatoryKeys_param = NULL, result, _0, _1;
	zend_long handle, mandatoryKeys;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mandatoryKeys)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &mandatoryKeys_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mandatoryKeys);
	ns_nsfontdescriptor_matching_font_descriptors_with_mandatory_keys(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, matchingFontDescriptorWithMandatoryKeys)
{
	zval *handle_param = NULL, *mandatoryKeys_param = NULL, _0, _1;
	zend_long handle, mandatoryKeys;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mandatoryKeys)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mandatoryKeys_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mandatoryKeys);
	RETURN_LONG(ns_nsfontdescriptor_matching_font_descriptor_with_mandatory_keys(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorByAddingAttributes)
{
	zval *handle_param = NULL, *attributes_param = NULL, _0, _1;
	zend_long handle, attributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attributes);
	RETURN_LONG(ns_nsfontdescriptor_font_descriptor_by_adding_attributes(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithSymbolicTraits)
{
	zval *handle_param = NULL, *symbolicTraits_param = NULL, _0, _1;
	zend_long handle, symbolicTraits;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(symbolicTraits)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &symbolicTraits_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, symbolicTraits);
	RETURN_LONG(ns_nsfontdescriptor_font_descriptor_with_symbolic_traits(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithSize)
{
	double newPointSize;
	zval *handle_param = NULL, *newPointSize_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(newPointSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newPointSize_param);
	newPointSize = zephir_get_doubleval(newPointSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, newPointSize);
	RETURN_LONG(ns_nsfontdescriptor_font_descriptor_with_size(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithMatrix)
{
	zval *handle_param = NULL, *matrix_param = NULL, _0, _1;
	zend_long handle, matrix;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &matrix_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	RETURN_LONG(ns_nsfontdescriptor_font_descriptor_with_matrix(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithFace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newFace;
	zval *handle_param = NULL, *newFace_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&newFace);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(newFace)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &newFace_param);
	zephir_get_strval(&newFace, newFace_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsfontdescriptor_font_descriptor_with_face(&_0, &newFace));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newFamily;
	zval *handle_param = NULL, *newFamily_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&newFamily);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(newFamily)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &newFamily_param);
	zephir_get_strval(&newFamily, newFamily_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsfontdescriptor_font_descriptor_with_family(&_0, &newFamily));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, fontDescriptorWithDesign)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval design;
	zval *handle_param = NULL, *design_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&design);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(design)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &design_param);
	zephir_get_strval(&design, design_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsfontdescriptor_font_descriptor_with_design(&_0, &design));
}

PHP_METHOD(AppKit_NS_NSFontDescriptor_NSFontDescriptor, preferredFontDescriptorForTextStyleOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long options;
	zval *style_param = NULL, *options_param = NULL, _0;
	zval style;

	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(style)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &style_param, &options_param);
	zephir_get_strval(&style, style_param);
	ZVAL_LONG(&_0, options);
	RETURN_MM_LONG(ns_nsfontdescriptor_preferred_font_descriptor_for_text_style_options(&style, &_0));
}

