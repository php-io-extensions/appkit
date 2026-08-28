
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
#include "src/ns-viewcontroller.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSViewController_NSViewController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSViewController, NSViewController, appkit, ns_nsviewcontroller_nsviewcontroller, appkit_ns_nsviewcontroller_nsviewcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, initWithNibNameBundle)
{
	zend_long bundle;
	zval *nibName = NULL, nibName_sub, *bundle_param = NULL, _0;

	ZVAL_UNDEF(&nibName_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(nibName)
		Z_PARAM_LONG(bundle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nibName, &bundle_param);
	ZVAL_LONG(&_0, bundle);
	RETURN_LONG(ns_nsviewcontroller_init_with_nib_name_bundle(nibName, &_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nibName)
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
	ns_nsviewcontroller_nib_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nibBundle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_nib_bundle(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, representedObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_represented_object(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setRepresentedObject)
{
	zval *handle_param = NULL, *representedObject_param = NULL, _0, _1;
	zend_long handle, representedObject;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(representedObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &representedObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, representedObject);
	ns_nsviewcontroller_set_represented_object(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, title)
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
	ns_nsviewcontroller_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setTitle)
{
	zval *handle_param = NULL, *title = NULL, title_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&title_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(title)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &title);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_set_title(&_0, title);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, view)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_view(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setView)
{
	zval *handle_param = NULL, *view_param = NULL, _0, _1;
	zend_long handle, view;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &view_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, view);
	ns_nsviewcontroller_set_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewIfLoaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_view_if_loaded(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_load_view(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_load_view_if_needed(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, commitEditingWithDelegateDidCommitSelectorContextInfo)
{
	zval *handle_param = NULL, *delegate_param = NULL, *didCommitSelector = NULL, didCommitSelector_sub, *contextInfo_param = NULL, _0, _1, _2;
	zend_long handle, delegate, contextInfo;

	ZVAL_UNDEF(&didCommitSelector_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
		Z_PARAM_ZVAL(didCommitSelector)
		Z_PARAM_LONG(contextInfo)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &delegate_param, &didCommitSelector, &contextInfo_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ZVAL_LONG(&_2, contextInfo);
	ns_nsviewcontroller_commit_editing_with_delegate_did_commit_selector_context_info(&_0, &_1, didCommitSelector, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, commitEditing)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsviewcontroller_commit_editing(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, discardEditing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_discard_editing(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidLoad)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_did_load(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, isViewLoaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsviewcontroller_is_view_loaded(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillAppear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_will_appear(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidAppear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_did_appear(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillDisappear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_will_disappear(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidDisappear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_did_disappear(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredContentSize)
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
	ns_nsviewcontroller_preferred_content_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setPreferredContentSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nsviewcontroller_set_preferred_content_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, updateViewConstraints)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_update_view_constraints(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_will_layout(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_view_did_layout(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAnimator)
{
	zval *handle_param = NULL, *viewController_param = NULL, *animator_param = NULL, _0, _1, _2;
	zend_long handle, viewController, animator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
		Z_PARAM_LONG(animator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &viewController_param, &animator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ZVAL_LONG(&_2, animator);
	ns_nsviewcontroller_present_view_controller_animator(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, dismissViewController)
{
	zval *handle_param = NULL, *viewController_param = NULL, _0, _1;
	zend_long handle, viewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ns_nsviewcontroller_dismiss_view_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, dismissController)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nsviewcontroller_dismiss_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentedViewControllers)
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
	ns_nsviewcontroller_presented_view_controllers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentingViewController)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_presenting_view_controller(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsSheet)
{
	zval *handle_param = NULL, *viewController_param = NULL, _0, _1;
	zend_long handle, viewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ns_nsviewcontroller_present_view_controller_as_sheet(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsModalWindow)
{
	zval *handle_param = NULL, *viewController_param = NULL, _0, _1;
	zend_long handle, viewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ns_nsviewcontroller_present_view_controller_as_modal_window(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehavior)
{
	double x, y, width, height;
	zval *handle_param = NULL, *viewController_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *positioningView_param = NULL, *preferredEdge_param = NULL, *behavior_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, viewController, positioningView, preferredEdge, behavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(positioningView)
		Z_PARAM_LONG(preferredEdge)
		Z_PARAM_LONG(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &viewController_param, &x_param, &y_param, &width_param, &height_param, &positioningView_param, &preferredEdge_param, &behavior_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, positioningView);
	ZVAL_LONG(&_7, preferredEdge);
	ZVAL_LONG(&_8, behavior);
	ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehaviorHasFullSizeContent)
{
	zend_bool hasFullSizeContent;
	double x, y, width, height;
	zval *handle_param = NULL, *viewController_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *positioningView_param = NULL, *preferredEdge_param = NULL, *behavior_param = NULL, *hasFullSizeContent_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, viewController, positioningView, preferredEdge, behavior;

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
		Z_PARAM_LONG(viewController)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(positioningView)
		Z_PARAM_LONG(preferredEdge)
		Z_PARAM_LONG(behavior)
		Z_PARAM_BOOL(hasFullSizeContent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &viewController_param, &x_param, &y_param, &width_param, &height_param, &positioningView_param, &preferredEdge_param, &behavior_param, &hasFullSizeContent_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, width);
	ZVAL_DOUBLE(&_5, height);
	ZVAL_LONG(&_6, positioningView);
	ZVAL_LONG(&_7, preferredEdge);
	ZVAL_LONG(&_8, behavior);
	ZVAL_BOOL(&_9, (hasFullSizeContent ? 1 : 0));
	ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior_has_full_size_content(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, parentViewController)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_parent_view_controller(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, childViewControllers)
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
	ns_nsviewcontroller_child_view_controllers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setChildViewControllers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval childViewControllers;
	zval *handle_param = NULL, *childViewControllers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&childViewControllers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(childViewControllers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &childViewControllers_param);
	zephir_get_arrval(&childViewControllers, childViewControllers_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_set_child_view_controllers(&_0, &childViewControllers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, addChildViewController)
{
	zval *handle_param = NULL, *childViewController_param = NULL, _0, _1;
	zend_long handle, childViewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childViewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &childViewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childViewController);
	ns_nsviewcontroller_add_child_view_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, removeFromParentViewController)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsviewcontroller_remove_from_parent_view_controller(&_0);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, insertChildViewControllerAtIndex)
{
	zval *handle_param = NULL, *childViewController_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, childViewController, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childViewController)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &childViewController_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childViewController);
	ZVAL_LONG(&_2, index);
	ns_nsviewcontroller_insert_child_view_controller_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, removeChildViewControllerAtIndex)
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
	ns_nsviewcontroller_remove_child_view_controller_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredContentSizeDidChangeForViewController)
{
	zval *handle_param = NULL, *viewController_param = NULL, _0, _1;
	zend_long handle, viewController;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewController)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewController_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewController);
	ns_nsviewcontroller_preferred_content_size_did_change_for_view_controller(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillTransitionToSize)
{
	double width, height;
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	ZVAL_DOUBLE(&_2, height);
	ns_nsviewcontroller_view_will_transition_to_size(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, storyboard)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_storyboard(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, extensionContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_extension_context(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, sourceItemView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsviewcontroller_source_item_view(&_0));
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setSourceItemView)
{
	zval *handle_param = NULL, *sourceItemView_param = NULL, _0, _1;
	zend_long handle, sourceItemView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceItemView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sourceItemView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceItemView);
	ns_nsviewcontroller_set_source_item_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredScreenOrigin)
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
	ns_nsviewcontroller_preferred_screen_origin(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setPreferredScreenOrigin)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ns_nsviewcontroller_set_preferred_screen_origin(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredMinimumSize)
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
	ns_nsviewcontroller_preferred_minimum_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredMaximumSize)
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
	ns_nsviewcontroller_preferred_maximum_size(&result, &_0);
	RETURN_CCTOR(&result);
}

