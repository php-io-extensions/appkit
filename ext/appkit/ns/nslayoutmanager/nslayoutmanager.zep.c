
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
#include "src/ns-layoutmanager.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutManager_NSLayoutManager)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutManager, NSLayoutManager, appkit, ns_nslayoutmanager_nslayoutmanager, appkit_ns_nslayoutmanager_nslayoutmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, init)
{

	RETURN_LONG(ns_nslayoutmanager_init());
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textStorage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_text_storage(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextStorage)
{
	zval *handle_param = NULL, *textStorage_param = NULL, _0, _1;
	zend_long handle, textStorage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textStorage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textStorage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textStorage);
	ns_nslayoutmanager_set_text_storage(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, replaceTextStorage)
{
	zval *handle_param = NULL, *newTextStorage_param = NULL, _0, _1;
	zend_long handle, newTextStorage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newTextStorage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newTextStorage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newTextStorage);
	ns_nslayoutmanager_replace_text_storage(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainers)
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
	ns_nslayoutmanager_text_containers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTextContainer)
{
	zval *handle_param = NULL, *container_param = NULL, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &container_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_add_text_container(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, insertTextContainerAtIndex)
{
	zval *handle_param = NULL, *container_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, container, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &container_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ZVAL_LONG(&_2, index);
	ns_nslayoutmanager_insert_text_container_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTextContainerAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nslayoutmanager_remove_text_container_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedGeometry)
{
	zval *handle_param = NULL, *container_param = NULL, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &container_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_text_container_changed_geometry(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerChangedTextView)
{
	zval *handle_param = NULL, *container_param = NULL, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &container_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_text_container_changed_text_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nslayoutmanager_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsInvisibleCharacters)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_shows_invisible_characters(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsInvisibleCharacters)
{
	zend_bool showsInvisibleCharacters;
	zval *handle_param = NULL, *showsInvisibleCharacters_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsInvisibleCharacters)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showsInvisibleCharacters_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsInvisibleCharacters ? 1 : 0));
	ns_nslayoutmanager_set_shows_invisible_characters(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showsControlCharacters)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_shows_control_characters(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setShowsControlCharacters)
{
	zend_bool showsControlCharacters;
	zval *handle_param = NULL, *showsControlCharacters_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsControlCharacters)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showsControlCharacters_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsControlCharacters ? 1 : 0));
	ns_nslayoutmanager_set_shows_control_characters(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesDefaultHyphenation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_uses_default_hyphenation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesDefaultHyphenation)
{
	zend_bool usesDefaultHyphenation;
	zval *handle_param = NULL, *usesDefaultHyphenation_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesDefaultHyphenation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesDefaultHyphenation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesDefaultHyphenation ? 1 : 0));
	ns_nslayoutmanager_set_uses_default_hyphenation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usesFontLeading)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_uses_font_leading(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setUsesFontLeading)
{
	zend_bool usesFontLeading;
	zval *handle_param = NULL, *usesFontLeading_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(usesFontLeading)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &usesFontLeading_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (usesFontLeading ? 1 : 0));
	ns_nslayoutmanager_set_uses_font_leading(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, allowsNonContiguousLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_allows_non_contiguous_layout(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setAllowsNonContiguousLayout)
{
	zend_bool allowsNonContiguousLayout;
	zval *handle_param = NULL, *allowsNonContiguousLayout_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsNonContiguousLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsNonContiguousLayout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsNonContiguousLayout ? 1 : 0));
	ns_nslayoutmanager_set_allows_non_contiguous_layout(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, hasNonContiguousLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_has_non_contiguous_layout(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, limitsLayoutForSuspiciousContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_limits_layout_for_suspicious_contents(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLimitsLayoutForSuspiciousContents)
{
	zend_bool limitsLayoutForSuspiciousContents;
	zval *handle_param = NULL, *limitsLayoutForSuspiciousContents_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(limitsLayoutForSuspiciousContents)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &limitsLayoutForSuspiciousContents_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (limitsLayoutForSuspiciousContents ? 1 : 0));
	ns_nslayoutmanager_set_limits_layout_for_suspicious_contents(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, backgroundLayoutEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nslayoutmanager_background_layout_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setBackgroundLayoutEnabled)
{
	zend_bool backgroundLayoutEnabled;
	zval *handle_param = NULL, *backgroundLayoutEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(backgroundLayoutEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundLayoutEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (backgroundLayoutEnabled ? 1 : 0));
	ns_nslayoutmanager_set_background_layout_enabled(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultAttachmentScaling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_default_attachment_scaling(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDefaultAttachmentScaling)
{
	zval *handle_param = NULL, *defaultAttachmentScaling_param = NULL, _0, _1;
	zend_long handle, defaultAttachmentScaling;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultAttachmentScaling)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultAttachmentScaling_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultAttachmentScaling);
	ns_nslayoutmanager_set_default_attachment_scaling(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_typesetter(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetter)
{
	zval *handle_param = NULL, *typesetter_param = NULL, _0, _1;
	zend_long handle, typesetter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(typesetter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &typesetter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, typesetter);
	ns_nslayoutmanager_set_typesetter(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, typesetterBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_typesetter_behavior(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTypesetterBehavior)
{
	zval *handle_param = NULL, *typesetterBehavior_param = NULL, _0, _1;
	zend_long handle, typesetterBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(typesetterBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &typesetterBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, typesetterBehavior);
	ns_nslayoutmanager_set_typesetter_behavior(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateGlyphsForCharacterRangeChangeInLengthActualCharacterRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *delta_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, location, length, delta;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(delta)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &location_param, &length_param, &delta_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, delta);
	ns_nslayoutmanager_invalidate_glyphs_for_character_range_change_in_length_actual_character_range(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateLayoutForCharacterRangeActualCharacterRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_invalidate_layout_for_character_range_actual_character_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForCharacterRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_invalidate_display_for_character_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, invalidateDisplayForGlyphRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_invalidate_display_for_glyph_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, processEditingForTextStorageEditedRangeChangeInLengthInvalidatedRange)
{
	zval *handle_param = NULL, *textStorage_param = NULL, *editMask_param = NULL, *location_param = NULL, *length_param = NULL, *delta_param = NULL, *invalidatedLocation_param = NULL, *invalidatedLength_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, textStorage, editMask, location, length, delta, invalidatedLocation, invalidatedLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textStorage)
		Z_PARAM_LONG(editMask)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(delta)
		Z_PARAM_LONG(invalidatedLocation)
		Z_PARAM_LONG(invalidatedLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &textStorage_param, &editMask_param, &location_param, &length_param, &delta_param, &invalidatedLocation_param, &invalidatedLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textStorage);
	ZVAL_LONG(&_2, editMask);
	ZVAL_LONG(&_3, location);
	ZVAL_LONG(&_4, length);
	ZVAL_LONG(&_5, delta);
	ZVAL_LONG(&_6, invalidatedLocation);
	ZVAL_LONG(&_7, invalidatedLength);
	ns_nslayoutmanager_process_editing_for_text_storage_edited_range_change_in_length_invalidated_range(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForCharacterRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_ensure_glyphs_for_character_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureGlyphsForGlyphRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_ensure_glyphs_for_glyph_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForCharacterRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_ensure_layout_for_character_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForGlyphRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_ensure_layout_for_glyph_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForTextContainer)
{
	zval *handle_param = NULL, *container_param = NULL, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &container_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_ensure_layout_for_text_container(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, ensureLayoutForBoundingRectInTextContainer)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *container_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, container);
	ns_nslayoutmanager_ensure_layout_for_bounding_rect_in_text_container(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, numberOfGlyphs)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_number_of_glyphs(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndexIsValidIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_cg_glyph_at_index_is_valid_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, CGGlyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(ns_nslayoutmanager_cg_glyph_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, isValidGlyphIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	r = ns_nslayoutmanager_is_valid_glyph_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, propertyForGlyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(ns_nslayoutmanager_property_for_glyph_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForGlyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(ns_nslayoutmanager_character_index_for_glyph_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForCharacterAtIndex)
{
	zval *handle_param = NULL, *charIndex_param = NULL, _0, _1;
	zend_long handle, charIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(charIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &charIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, charIndex);
	RETURN_LONG(ns_nslayoutmanager_glyph_index_for_character_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTextContainerForGlyphRange)
{
	zval *handle_param = NULL, *container_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, container, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &container_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_set_text_container_for_glyph_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLineFragmentRectForGlyphRangeUsedRect)
{
	double x, y, width, height, usedX, usedY, usedWidth, usedHeight;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *location_param = NULL, *length_param = NULL, *usedX_param = NULL, *usedY_param = NULL, *usedWidth_param = NULL, *usedHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(usedX)
		Z_PARAM_ZVAL(usedY)
		Z_PARAM_ZVAL(usedWidth)
		Z_PARAM_ZVAL(usedHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &location_param, &length_param, &usedX_param, &usedY_param, &usedWidth_param, &usedHeight_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	usedX = zephir_get_doubleval(usedX_param);
	usedY = zephir_get_doubleval(usedY_param);
	usedWidth = zephir_get_doubleval(usedWidth_param);
	usedHeight = zephir_get_doubleval(usedHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, location);
	ZVAL_LONG(&_6, length);
	ZVAL_DOUBLE(&_7, usedX);
	ZVAL_DOUBLE(&_8, usedY);
	ZVAL_DOUBLE(&_9, usedWidth);
	ZVAL_DOUBLE(&_10, usedHeight);
	ns_nslayoutmanager_set_line_fragment_rect_for_glyph_range_used_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setExtraLineFragmentRectUsedRectTextContainer)
{
	double x, y, width, height, usedX, usedY, usedWidth, usedHeight;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *usedX_param = NULL, *usedY_param = NULL, *usedWidth_param = NULL, *usedHeight_param = NULL, *container_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_ZVAL(usedX)
		Z_PARAM_ZVAL(usedY)
		Z_PARAM_ZVAL(usedWidth)
		Z_PARAM_ZVAL(usedHeight)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &usedX_param, &usedY_param, &usedWidth_param, &usedHeight_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	usedX = zephir_get_doubleval(usedX_param);
	usedY = zephir_get_doubleval(usedY_param);
	usedWidth = zephir_get_doubleval(usedWidth_param);
	usedHeight = zephir_get_doubleval(usedHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_DOUBLE(&_5, usedX);
	ZVAL_DOUBLE(&_6, usedY);
	ZVAL_DOUBLE(&_7, usedWidth);
	ZVAL_DOUBLE(&_8, usedHeight);
	ZVAL_LONG(&_9, container);
	ns_nslayoutmanager_set_extra_line_fragment_rect_used_rect_text_container(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLocationForStartOfGlyphRange)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &location_param, &length_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, location);
	ZVAL_LONG(&_4, length);
	ns_nslayoutmanager_set_location_for_start_of_glyph_range(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setNotShownAttributeForGlyphAtIndex)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, *glyphIndex_param = NULL, _0, _1, _2;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &flag_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ZVAL_LONG(&_2, glyphIndex);
	ns_nslayoutmanager_set_not_shown_attribute_for_glyph_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setDrawsOutsideLineFragmentForGlyphAtIndex)
{
	zend_bool flag;
	zval *handle_param = NULL, *flag_param = NULL, *glyphIndex_param = NULL, _0, _1, _2;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flag)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &flag_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flag ? 1 : 0));
	ZVAL_LONG(&_2, glyphIndex);
	ns_nslayoutmanager_set_draws_outside_line_fragment_for_glyph_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setAttachmentSizeForGlyphRange)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &width_param, &height_param, &location_param, &length_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ZVAL_LONG(&_3, location);
	ZVAL_LONG(&_4, length);
	ns_nslayoutmanager_set_attachment_size_for_glyph_range(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, getFirstUnlaidCharacterIndexGlyphIndex)
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
	ns_nslayoutmanager_get_first_unlaid_character_index_glyph_index(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidCharacterIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_first_unlaid_character_index(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstUnlaidGlyphIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_first_unlaid_glyph_index(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textContainerForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flag;
	zval *handle_param = NULL, *glyphIndex_param = NULL, *flag_param = NULL, result, _0, _1, _2;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &glyphIndex_param, &flag_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ZVAL_BOOL(&_2, (flag ? 1 : 0));
	ns_nslayoutmanager_text_container_for_glyph_at_index_effective_range_without_additional_layout(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, usedRectForTextContainer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *container_param = NULL, result, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &container_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_used_rect_for_text_container(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flag;
	zval *handle_param = NULL, *glyphIndex_param = NULL, *flag_param = NULL, result, _0, _1, _2;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &glyphIndex_param, &flag_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ZVAL_BOOL(&_2, (flag ? 1 : 0));
	ns_nslayoutmanager_line_fragment_rect_for_glyph_at_index_effective_range_without_additional_layout(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, lineFragmentUsedRectForGlyphAtIndexEffectiveRangeWithoutAdditionalLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool flag;
	zval *handle_param = NULL, *glyphIndex_param = NULL, *flag_param = NULL, result, _0, _1, _2;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &glyphIndex_param, &flag_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ZVAL_BOOL(&_2, (flag ? 1 : 0));
	ns_nslayoutmanager_line_fragment_used_rect_for_glyph_at_index_effective_range_without_additional_layout(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentRect)
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
	ns_nslayoutmanager_extra_line_fragment_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentUsedRect)
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
	ns_nslayoutmanager_extra_line_fragment_used_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, extraLineFragmentTextContainer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_extra_line_fragment_text_container(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, locationForGlyphAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_location_for_glyph_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, notShownAttributeForGlyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	r = ns_nslayoutmanager_not_shown_attribute_for_glyph_at_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawsOutsideLineFragmentForGlyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	r = ns_nslayoutmanager_draws_outside_line_fragment_for_glyph_at_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, attachmentSizeForGlyphAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_attachment_size_for_glyph_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, truncatedGlyphRangeInLineFragmentForGlyphAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_truncated_glyph_range_in_line_fragment_for_glyph_at_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForCharacterRangeActualCharacterRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_glyph_range_for_character_range_actual_character_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterRangeForGlyphRangeActualGlyphRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_character_range_for_glyph_range_actual_glyph_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForTextContainer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *container_param = NULL, result, _0, _1;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &container_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, container);
	ns_nslayoutmanager_glyph_range_for_text_container(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rangeOfNominallySpacedGlyphsContainingIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_range_of_nominally_spaced_glyphs_containing_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundingRectForGlyphRangeInTextContainer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *container_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, location, length, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &location_param, &length_param, &container_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, container);
	ns_nslayoutmanager_bounding_rect_for_glyph_range_in_text_container(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectInTextContainer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *container_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, container);
	ns_nslayoutmanager_glyph_range_for_bounding_rect_in_text_container(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphRangeForBoundingRectWithoutAdditionalLayoutInTextContainer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *container_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, container);
	ns_nslayoutmanager_glyph_range_for_bounding_rect_without_additional_layout_in_text_container(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainerFractionOfDistanceThroughGlyph)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *container_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &x_param, &y_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, container);
	ns_nslayoutmanager_glyph_index_for_point_in_text_container_fraction_of_distance_through_glyph(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphIndexForPointInTextContainer)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *container_param = NULL, _0, _1, _2, _3;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, container);
	RETURN_LONG(ns_nslayoutmanager_glyph_index_for_point_in_text_container(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, fractionOfDistanceThroughGlyphForPointInTextContainer)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *container_param = NULL, _0, _1, _2, _3;
	zend_long handle, container;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, container);
	RETURN_DOUBLE(ns_nslayoutmanager_fraction_of_distance_through_glyph_for_point_in_text_container(&_0, &_1, &_2, &_3));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, characterIndexForPointInTextContainerFractionOfDistanceBetweenInsertionPoints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *container_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &x_param, &y_param, &container_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, container);
	ns_nslayoutmanager_character_index_for_point_in_text_container_fraction_of_distance_between_insertion_points(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawBackgroundForGlyphRangeAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &length_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_DOUBLE(&_3, x);
	ZVAL_DOUBLE(&_4, y);
	ns_nslayoutmanager_draw_background_for_glyph_range_at_point(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawGlyphsForGlyphRangeAtPoint)
{
	double x, y;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &length_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_DOUBLE(&_3, x);
	ZVAL_DOUBLE(&_4, y);
	ns_nslayoutmanager_draw_glyphs_for_glyph_range_at_point(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawUnderlineForGlyphRangeUnderlineTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin)
{
	double baselineOffset, x, y, width, height, originX, originY;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *underlineVal_param = NULL, *baselineOffset_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *lineLocation_param = NULL, *lineLength_param = NULL, *originX_param = NULL, *originY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12;
	zend_long handle, location, length, underlineVal, lineLocation, lineLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZEND_PARSE_PARAMETERS_START(13, 13)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(underlineVal)
		Z_PARAM_ZVAL(baselineOffset)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(lineLocation)
		Z_PARAM_LONG(lineLength)
		Z_PARAM_ZVAL(originX)
		Z_PARAM_ZVAL(originY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(13, 0, &handle_param, &location_param, &length_param, &underlineVal_param, &baselineOffset_param, &x_param, &y_param, &width_param, &height_param, &lineLocation_param, &lineLength_param, &originX_param, &originY_param);
	baselineOffset = zephir_get_doubleval(baselineOffset_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	originX = zephir_get_doubleval(originX_param);
	originY = zephir_get_doubleval(originY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, underlineVal);
	ZVAL_DOUBLE(&_4, baselineOffset);
	ZVAL_DOUBLE(&_5, x);
	ZVAL_DOUBLE(&_6, y);
	ZVAL_DOUBLE(&_7, width);
	ZVAL_DOUBLE(&_8, height);
	ZVAL_LONG(&_9, lineLocation);
	ZVAL_LONG(&_10, lineLength);
	ZVAL_DOUBLE(&_11, originX);
	ZVAL_DOUBLE(&_12, originY);
	ns_nslayoutmanager_draw_underline_for_glyph_range_underline_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, underlineGlyphRangeUnderlineTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin)
{
	double x, y, width, height, originX, originY;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *underlineVal_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *lineLocation_param = NULL, *lineLength_param = NULL, *originX_param = NULL, *originY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long handle, location, length, underlineVal, lineLocation, lineLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZEND_PARSE_PARAMETERS_START(12, 12)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(underlineVal)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(lineLocation)
		Z_PARAM_LONG(lineLength)
		Z_PARAM_ZVAL(originX)
		Z_PARAM_ZVAL(originY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(12, 0, &handle_param, &location_param, &length_param, &underlineVal_param, &x_param, &y_param, &width_param, &height_param, &lineLocation_param, &lineLength_param, &originX_param, &originY_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	originX = zephir_get_doubleval(originX_param);
	originY = zephir_get_doubleval(originY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, underlineVal);
	ZVAL_DOUBLE(&_4, x);
	ZVAL_DOUBLE(&_5, y);
	ZVAL_DOUBLE(&_6, width);
	ZVAL_DOUBLE(&_7, height);
	ZVAL_LONG(&_8, lineLocation);
	ZVAL_LONG(&_9, lineLength);
	ZVAL_DOUBLE(&_10, originX);
	ZVAL_DOUBLE(&_11, originY);
	ns_nslayoutmanager_underline_glyph_range_underline_type_line_fragment_rect_line_fragment_glyph_range_container_origin(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, drawStrikethroughForGlyphRangeStrikethroughTypeBaselineOffsetLineFragmentRectLineFragmentGlyphRangeContainerOrigin)
{
	double baselineOffset, x, y, width, height, originX, originY;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *strikethroughVal_param = NULL, *baselineOffset_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *lineLocation_param = NULL, *lineLength_param = NULL, *originX_param = NULL, *originY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12;
	zend_long handle, location, length, strikethroughVal, lineLocation, lineLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZEND_PARSE_PARAMETERS_START(13, 13)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(strikethroughVal)
		Z_PARAM_ZVAL(baselineOffset)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(lineLocation)
		Z_PARAM_LONG(lineLength)
		Z_PARAM_ZVAL(originX)
		Z_PARAM_ZVAL(originY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(13, 0, &handle_param, &location_param, &length_param, &strikethroughVal_param, &baselineOffset_param, &x_param, &y_param, &width_param, &height_param, &lineLocation_param, &lineLength_param, &originX_param, &originY_param);
	baselineOffset = zephir_get_doubleval(baselineOffset_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	originX = zephir_get_doubleval(originX_param);
	originY = zephir_get_doubleval(originY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, strikethroughVal);
	ZVAL_DOUBLE(&_4, baselineOffset);
	ZVAL_DOUBLE(&_5, x);
	ZVAL_DOUBLE(&_6, y);
	ZVAL_DOUBLE(&_7, width);
	ZVAL_DOUBLE(&_8, height);
	ZVAL_LONG(&_9, lineLocation);
	ZVAL_LONG(&_10, lineLength);
	ZVAL_DOUBLE(&_11, originX);
	ZVAL_DOUBLE(&_12, originY);
	ns_nslayoutmanager_draw_strikethrough_for_glyph_range_strikethrough_type_baseline_offset_line_fragment_rect_line_fragment_glyph_range_container_origin(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, strikethroughGlyphRangeStrikethroughTypeLineFragmentRectLineFragmentGlyphRangeContainerOrigin)
{
	double x, y, width, height, originX, originY;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *strikethroughVal_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *lineLocation_param = NULL, *lineLength_param = NULL, *originX_param = NULL, *originY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long handle, location, length, strikethroughVal, lineLocation, lineLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZEND_PARSE_PARAMETERS_START(12, 12)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(strikethroughVal)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(lineLocation)
		Z_PARAM_LONG(lineLength)
		Z_PARAM_ZVAL(originX)
		Z_PARAM_ZVAL(originY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(12, 0, &handle_param, &location_param, &length_param, &strikethroughVal_param, &x_param, &y_param, &width_param, &height_param, &lineLocation_param, &lineLength_param, &originX_param, &originY_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	originX = zephir_get_doubleval(originX_param);
	originY = zephir_get_doubleval(originY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, strikethroughVal);
	ZVAL_DOUBLE(&_4, x);
	ZVAL_DOUBLE(&_5, y);
	ZVAL_DOUBLE(&_6, width);
	ZVAL_DOUBLE(&_7, height);
	ZVAL_LONG(&_8, lineLocation);
	ZVAL_LONG(&_9, lineLength);
	ZVAL_DOUBLE(&_10, originX);
	ZVAL_DOUBLE(&_11, originY);
	ns_nslayoutmanager_strikethrough_glyph_range_strikethrough_type_line_fragment_rect_line_fragment_glyph_range_container_origin(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, showAttachmentCellInRectCharacterIndex)
{
	double x, y, width, height;
	zval *handle_param = NULL, *cell_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *attachmentIndex_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, cell, attachmentIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cell)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(attachmentIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &cell_param, &x_param, &y_param, &width_param, &height_param, &attachmentIndex_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cell);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, attachmentIndex);
	ns_nslayoutmanager_show_attachment_cell_in_rect_character_index(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setLayoutRectForTextBlockGlyphRange)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *block_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, block, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &block_param, &location_param, &length_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, block);
	ZVAL_LONG(&_6, location);
	ZVAL_LONG(&_7, length);
	ns_nslayoutmanager_set_layout_rect_for_text_block_glyph_range(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setBoundsRectForTextBlockGlyphRange)
{
	double x, y, width, height;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *block_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, block, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &x_param, &y_param, &width_param, &height_param, &block_param, &location_param, &length_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_LONG(&_5, block);
	ZVAL_LONG(&_6, location);
	ZVAL_LONG(&_7, length);
	ns_nslayoutmanager_set_bounds_rect_for_text_block_glyph_range(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockGlyphRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, block, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &block_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_layout_rect_for_text_block_glyph_range(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockGlyphRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, *location_param = NULL, *length_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, block, location, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &block_param, &location_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_bounds_rect_for_text_block_glyph_range(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutRectForTextBlockAtIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, *glyphIndex_param = NULL, result, _0, _1, _2;
	zend_long handle, block, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &block_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	ZVAL_LONG(&_2, glyphIndex);
	ns_nslayoutmanager_layout_rect_for_text_block_at_index_effective_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, boundsRectForTextBlockAtIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, *glyphIndex_param = NULL, result, _0, _1, _2;
	zend_long handle, block, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &block_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	ZVAL_LONG(&_2, glyphIndex);
	ns_nslayoutmanager_bounds_rect_for_text_block_at_index_effective_range(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *charIndex_param = NULL, result, _0, _1;
	zend_long handle, charIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(charIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &charIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, charIndex);
	ns_nslayoutmanager_temporary_attributes_at_character_index_effective_range(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setTemporaryAttributesForCharacterRange)
{
	zval *handle_param = NULL, *attrs_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, attrs, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attrs)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &attrs_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attrs);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_set_temporary_attributes_for_character_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributesForCharacterRange)
{
	zval *handle_param = NULL, *attrs_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, attrs, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attrs)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &attrs_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attrs);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_add_temporary_attributes_for_character_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, removeTemporaryAttributeForCharacterRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attrName;
	zval *handle_param = NULL, *attrName_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&attrName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(attrName)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &attrName_param, &location_param, &length_param);
	zephir_get_strval(&attrName, attrName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nslayoutmanager_remove_temporary_attribute_for_character_range(&_0, &attrName, &_1, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexEffectiveRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attrName;
	zval *handle_param = NULL, *attrName_param = NULL, *location_param = NULL, result, _0, _1;
	zend_long handle, location;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&attrName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(attrName)
		Z_PARAM_LONG(location)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &attrName_param, &location_param);
	zephir_get_strval(&attrName, attrName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ns_nslayoutmanager_temporary_attribute_at_character_index_effective_range(&result, &_0, &attrName, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributeAtCharacterIndexLongestEffectiveRangeInRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attrName;
	zval *handle_param = NULL, *attrName_param = NULL, *location_param = NULL, *rangeLimitLocation_param = NULL, *rangeLimitLength_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, location, rangeLimitLocation, rangeLimitLength;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&attrName);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(attrName)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(rangeLimitLocation)
		Z_PARAM_LONG(rangeLimitLength)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &attrName_param, &location_param, &rangeLimitLocation_param, &rangeLimitLength_param);
	zephir_get_strval(&attrName, attrName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, rangeLimitLocation);
	ZVAL_LONG(&_3, rangeLimitLength);
	ns_nslayoutmanager_temporary_attribute_at_character_index_longest_effective_range_in_range(&result, &_0, &attrName, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, temporaryAttributesAtCharacterIndexLongestEffectiveRangeInRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *rangeLimitLocation_param = NULL, *rangeLimitLength_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, location, rangeLimitLocation, rangeLimitLength;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(rangeLimitLocation)
		Z_PARAM_LONG(rangeLimitLength)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &location_param, &rangeLimitLocation_param, &rangeLimitLength_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, rangeLimitLocation);
	ZVAL_LONG(&_3, rangeLimitLength);
	ns_nslayoutmanager_temporary_attributes_at_character_index_longest_effective_range_in_range(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, addTemporaryAttributeValueForCharacterRange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attrName;
	zval *handle_param = NULL, *attrName_param = NULL, *value_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, value, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&attrName);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(attrName)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &attrName_param, &value_param, &location_param, &length_param);
	zephir_get_strval(&attrName, attrName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ns_nslayoutmanager_add_temporary_attribute_value_for_character_range(&_0, &attrName, &_1, &_2, &_3);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultLineHeightForFont)
{
	zval *handle_param = NULL, *theFont_param = NULL, _0, _1;
	zend_long handle, theFont;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(theFont)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &theFont_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, theFont);
	RETURN_DOUBLE(ns_nslayoutmanager_default_line_height_for_font(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, defaultBaselineOffsetForFont)
{
	zval *handle_param = NULL, *theFont_param = NULL, _0, _1;
	zend_long handle, theFont;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(theFont)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &theFont_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, theFont);
	RETURN_DOUBLE(ns_nslayoutmanager_default_baseline_offset_for_font(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerMarkersForTextViewParagraphStyleRuler)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *view_param = NULL, *style_param = NULL, *ruler_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, view, style, ruler;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(style)
		Z_PARAM_LONG(ruler)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &view_param, &style_param, &ruler_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, style);
	ZVAL_LONG(&_3, ruler);
	ns_nslayoutmanager_ruler_markers_for_text_view_paragraph_style_ruler(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rulerAccessoryViewForTextViewParagraphStyleRulerEnabled)
{
	zend_bool isEnabled;
	zval *handle_param = NULL, *view_param = NULL, *style_param = NULL, *ruler_param = NULL, *isEnabled_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, view, style, ruler;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(style)
		Z_PARAM_LONG(ruler)
		Z_PARAM_BOOL(isEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &view_param, &style_param, &ruler_param, &isEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ZVAL_LONG(&_2, style);
	ZVAL_LONG(&_3, ruler);
	ZVAL_BOOL(&_4, (isEnabled ? 1 : 0));
	RETURN_LONG(ns_nslayoutmanager_ruler_accessory_view_for_text_view_paragraph_style_ruler_enabled(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, layoutManagerOwnsFirstResponderInWindow)
{
	zval *handle_param = NULL, *window_param = NULL, _0, _1;
	zend_long handle, window, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &window_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, window);
	r = ns_nslayoutmanager_layout_manager_owns_first_responder_in_window(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, firstTextView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_first_text_view(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, textViewForBeginningOfSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_text_view_for_beginning_of_selection(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndexIsValidIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	ns_nslayoutmanager_glyph_at_index_is_valid_index(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphAtIndex)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(ns_nslayoutmanager_glyph_at_index(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForCharacterRangeWithinSelectedCharacterRangeInTextContainerRectCount)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *selLocation_param = NULL, *selLength_param = NULL, *container_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, location, length, selLocation, selLength, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(selLocation)
		Z_PARAM_LONG(selLength)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &location_param, &length_param, &selLocation_param, &selLength_param, &container_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, selLocation);
	ZVAL_LONG(&_4, selLength);
	ZVAL_LONG(&_5, container);
	ns_nslayoutmanager_rect_array_for_character_range_within_selected_character_range_in_text_container_rect_count(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, rectArrayForGlyphRangeWithinSelectedGlyphRangeInTextContainerRectCount)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, *selLocation_param = NULL, *selLength_param = NULL, *container_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, location, length, selLocation, selLength, container;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(selLocation)
		Z_PARAM_LONG(selLength)
		Z_PARAM_LONG(container)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &location_param, &length_param, &selLocation_param, &selLength_param, &container_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, selLocation);
	ZVAL_LONG(&_4, selLength);
	ZVAL_LONG(&_5, container);
	ns_nslayoutmanager_rect_array_for_glyph_range_within_selected_glyph_range_in_text_container_rect_count(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, glyphGenerator)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nslayoutmanager_glyph_generator(&_0));
}

PHP_METHOD(AppKit_NS_NSLayoutManager_NSLayoutManager, setGlyphGenerator)
{
	zval *handle_param = NULL, *glyphGenerator_param = NULL, _0, _1;
	zend_long handle, glyphGenerator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphGenerator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphGenerator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphGenerator);
	ns_nslayoutmanager_set_glyph_generator(&_0, &_1);
}

