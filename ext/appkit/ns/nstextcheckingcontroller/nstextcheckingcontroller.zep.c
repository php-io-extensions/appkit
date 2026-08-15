
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
#include "kernel/array.h"

#include "ns-textcheckingcontroller.h"
#include <stdint.h>



/**
 * NSTextCheckingController — coordinates spell/link checking for a text client.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextCheckingController_NSTextCheckingController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextCheckingController, NSTextCheckingController, appkit, ns_nstextcheckingcontroller_nstextcheckingcontroller, appkit_ns_nstextcheckingcontroller_nstextcheckingcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, createWithClient)
{
	zval *clientPtr_param = NULL;
	zend_long clientPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(clientPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &clientPtr_param);
	
            handle = (zend_long) ns_textcheckingcontroller_create_with_client((void *)(uintptr_t) clientPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, wrap)
{
	zval *nsTextCheckingControllerPtr_param = NULL;
	zend_long nsTextCheckingControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextCheckingControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextCheckingControllerPtr_param);
	
            handle = (zend_long) ns_textcheckingcontroller_wrap((void *)(uintptr_t) nsTextCheckingControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, nsTextCheckingController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_nstextcheckingcontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, client)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_client((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, invalidate)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_invalidate((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, didChangeTextInRange)
{
	zval *controller_param = NULL, *location_param = NULL, *length_param = NULL;
	zend_long controller, location, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &controller_param, &location_param, &length_param);
	
            ns_textcheckingcontroller_did_change_text_in_range((uintptr_t) controller, (int) location, (int) length);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, insertedTextInRange)
{
	zval *controller_param = NULL, *location_param = NULL, *length_param = NULL;
	zend_long controller, location, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &controller_param, &location_param, &length_param);
	
            ns_textcheckingcontroller_inserted_text_in_range((uintptr_t) controller, (int) location, (int) length);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, didChangeSelectedRange)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_did_change_selected_range((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, considerTextCheckingForRange)
{
	zval *controller_param = NULL, *location_param = NULL, *length_param = NULL;
	zend_long controller, location, length;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &controller_param, &location_param, &length_param);
	
            ns_textcheckingcontroller_consider_text_checking_for_range((uintptr_t) controller, (int) location, (int) length);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, checkTextInRange)
{
	zval *controller_param = NULL, *location_param = NULL, *length_param = NULL, *types_param = NULL, *options_param = NULL;
	zend_long controller, location, length, types, options;

	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(types)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &controller_param, &location_param, &length_param, &types_param, &options_param);
	if (!options_param) {
		options = 0;
	} else {
		}
	
            ns_textcheckingcontroller_check_text_in_range((uintptr_t) controller, (int) location, (int) length, (unsigned long long) types, (uintptr_t) options);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, checkTextInSelection)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_check_text_in_selection((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, checkTextInDocument)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_check_text_in_document((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, orderFrontSubstitutionsPanel)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_order_front_substitutions_panel((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, checkSpelling)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_check_spelling((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, showGuessPanel)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_show_guess_panel((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, changeSpelling)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_change_spelling((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, ignoreSpelling)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_ignore_spelling((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, updateCandidates)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_textcheckingcontroller_update_candidates((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, getValidAnnotations)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *controller_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &controller_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int count = ns_textcheckingcontroller_valid_annotations_count((uintptr_t) controller);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_textcheckingcontroller_valid_annotation_at((uintptr_t) controller, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, setSpellCheckerDocumentTag)
{
	zval *controller_param = NULL, *tag_param = NULL;
	zend_long controller, tag;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &tag_param);
	
            ns_textcheckingcontroller_set_spell_checker_document_tag((uintptr_t) controller, (int) tag);
        
}

PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, getSpellCheckerDocumentTag)
{
	zval *controller_param = NULL;
	zend_long controller, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            value = (zend_long) ns_textcheckingcontroller_get_spell_checker_document_tag((uintptr_t) controller);
        
	RETURN_LONG(value);
}

/**
 * @return array [menuHandle, effectiveLocation, effectiveLength]
 */
PHP_METHOD(AppKit_NS_NSTextCheckingController_NSTextCheckingController, menuAtIndex)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool clickedOnSelection;
	zval *controller_param = NULL, *location_param = NULL, *clickedOnSelection_param = NULL, _0;
	zend_long controller, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(location)
		Z_PARAM_BOOL(clickedOnSelection)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &controller_param, &location_param, &clickedOnSelection_param);
	ZEPHIR_INIT_VAR(&out);
	zephir_create_array(&out, 3, 0);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_LONG(&_0, 0);
	zephir_array_fast_append(&out, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 0);
	zephir_array_fast_append(&out, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 0);
	zephir_array_fast_append(&out, &_0);
	
            int effective_location = 0;
            int effective_length = 0;
            uintptr_t menu = ns_textcheckingcontroller_menu_at_index(
                (uintptr_t) controller,
                (int) location,
                clickedOnSelection ? 1 : 0,
                &effective_location,
                &effective_length
            );
            add_index_long(&out, 0, (zend_long) menu);
            add_index_long(&out, 1, (zend_long) effective_location);
            add_index_long(&out, 2, (zend_long) effective_length);
        
	RETURN_CTOR(&out);
}

