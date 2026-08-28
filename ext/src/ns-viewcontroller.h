#ifndef PHP_APPKIT_NS_VIEWCONTROLLER_H
#define PHP_APPKIT_NS_VIEWCONTROLLER_H

/*
 * Faithful 1:1 binding of AppKit NSViewController.h. Every member of
 * the class (base interface + same-file NSViewControllerPresentation,
 * NSViewControllerPresentationAndTransitionStyles,
 * NSViewControllerContainer, NSViewControllerStoryboardingMethods,
 * and NSExtensionAdditions categories) is either bound or reserved.
 * Nothing is omitted. Adopted NSEditor / NSSeguePerforming /
 * NSUserInterfaceItemIdentification / NSExtensionRequestHandling
 * and the NSViewControllerPresentationAnimator protocol are not
 * class members (protocol methods that are not redeclared here
 * belong to Bridge; the NSEditor methods that this header does
 * declare bind here). The NSViewControllerTransitionOptions
 * typedef is not a class member. Live construction is
 * initWithNibNameBundle (alloc+init glue). Inherited NSResponder
 * members stay on that class. Reserved: initWithCoder: (NSCoder)
 * and transitionFromViewController:toViewController:options:
 * completionHandler: (block). Soft-available viewIfLoaded /
 * loadViewIfNeeded / the hasFullSizeContent popover presenter
 * stay bound. getter=isViewLoaded emits isViewLoaded. Nullable
 * nibName / title cross as var (null = nil). Nullable
 * didCommitSelector crosses as var. contextInfo is int pointer
 * bits. Bundle / representedObject / view / viewIfLoaded /
 * view controllers / animator / sender / storyboard /
 * extensionContext / sourceItemView cross as int handles
 * (0 = nil). Child / presented controller arrays are handles.
 * preferredContentSize / preferredMinimumSize /
 * preferredMaximumSize / viewWillTransitionToSize: follow the
 * NSSize convention; preferredScreenOrigin follows NSPoint.
 * NSRect for the popover presenters is component doubles.
 * NSRectEdge / NSPopoverBehavior /
 * NSViewControllerTransitionOptions cross as int.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Initialization ---- */

/*@zep NS\NSViewController initWithNibNameBundle(var nibName, int bundle) -> int */
zend_long ns_nsviewcontroller_init_with_nib_name_bundle(zval *nibName, zval *bundle);
/*@reserved NS\NSViewController - (nullable instancetype)initWithCoder:(NSCoder *)coder NS_DESIGNATED_INITIALIZER; */

/* ---- Nib and represented object ---- */

/*@zep NS\NSViewController nibName(int handle) -> var */
void ns_nsviewcontroller_nib_name(zval *return_value, zval *handle);

/*@zep NS\NSViewController nibBundle(int handle) -> int */
zend_long ns_nsviewcontroller_nib_bundle(zval *handle);

/*@zep NS\NSViewController representedObject(int handle) -> int */
zend_long ns_nsviewcontroller_represented_object(zval *handle);
/*@zep NS\NSViewController setRepresentedObject(int handle, int representedObject) -> void */
void ns_nsviewcontroller_set_represented_object(zval *handle, zval *representedObject);

/*@zep NS\NSViewController title(int handle) -> var */
void ns_nsviewcontroller_title(zval *return_value, zval *handle);
/*@zep NS\NSViewController setTitle(int handle, var title) -> void */
void ns_nsviewcontroller_set_title(zval *handle, zval *title);

/* ---- View ---- */

/*@zep NS\NSViewController view(int handle) -> int */
zend_long ns_nsviewcontroller_view(zval *handle);
/*@zep NS\NSViewController setView(int handle, int view) -> void */
void ns_nsviewcontroller_set_view(zval *handle, zval *view);

/*@zep NS\NSViewController viewIfLoaded(int handle) -> int */
zend_long ns_nsviewcontroller_view_if_loaded(zval *handle);

/*@zep NS\NSViewController loadView(int handle) -> void */
void ns_nsviewcontroller_load_view(zval *handle);

/*@zep NS\NSViewController loadViewIfNeeded(int handle) -> void */
void ns_nsviewcontroller_load_view_if_needed(zval *handle);

/* ---- NSEditor (declared on this class) ---- */

/*@zep NS\NSViewController commitEditingWithDelegateDidCommitSelectorContextInfo(int handle, int delegate, var didCommitSelector, int contextInfo) -> void */
void ns_nsviewcontroller_commit_editing_with_delegate_did_commit_selector_context_info(zval *handle, zval *delegate, zval *didCommitSelector, zval *contextInfo);
/*@zep NS\NSViewController commitEditing(int handle) -> bool */
zend_long ns_nsviewcontroller_commit_editing(zval *handle);
/*@zep NS\NSViewController discardEditing(int handle) -> void */
void ns_nsviewcontroller_discard_editing(zval *handle);

/* ---- Appearance lifecycle ---- */

/*@zep NS\NSViewController viewDidLoad(int handle) -> void */
void ns_nsviewcontroller_view_did_load(zval *handle);

/*@zep NS\NSViewController isViewLoaded(int handle) -> bool */
zend_long ns_nsviewcontroller_is_view_loaded(zval *handle);

/*@zep NS\NSViewController viewWillAppear(int handle) -> void */
void ns_nsviewcontroller_view_will_appear(zval *handle);
/*@zep NS\NSViewController viewDidAppear(int handle) -> void */
void ns_nsviewcontroller_view_did_appear(zval *handle);
/*@zep NS\NSViewController viewWillDisappear(int handle) -> void */
void ns_nsviewcontroller_view_will_disappear(zval *handle);
/*@zep NS\NSViewController viewDidDisappear(int handle) -> void */
void ns_nsviewcontroller_view_did_disappear(zval *handle);

/* ---- Layout ---- */

/*@zep NS\NSViewController preferredContentSize(int handle) -> array */
void ns_nsviewcontroller_preferred_content_size(zval *return_value, zval *handle);
/*@zep NS\NSViewController setPreferredContentSize(int handle, double width, double height) -> void */
void ns_nsviewcontroller_set_preferred_content_size(zval *handle, zval *width, zval *height);

/*@zep NS\NSViewController updateViewConstraints(int handle) -> void */
void ns_nsviewcontroller_update_view_constraints(zval *handle);
/*@zep NS\NSViewController viewWillLayout(int handle) -> void */
void ns_nsviewcontroller_view_will_layout(zval *handle);
/*@zep NS\NSViewController viewDidLayout(int handle) -> void */
void ns_nsviewcontroller_view_did_layout(zval *handle);

/* ---- NSViewControllerPresentation ---- */

/*@zep NS\NSViewController presentViewControllerAnimator(int handle, int viewController, int animator) -> void */
void ns_nsviewcontroller_present_view_controller_animator(zval *handle, zval *viewController, zval *animator);
/*@zep NS\NSViewController dismissViewController(int handle, int viewController) -> void */
void ns_nsviewcontroller_dismiss_view_controller(zval *handle, zval *viewController);
/*@zep NS\NSViewController dismissController(int handle, int sender) -> void */
void ns_nsviewcontroller_dismiss_controller(zval *handle, zval *sender);

/*@zep NS\NSViewController presentedViewControllers(int handle) -> array */
void ns_nsviewcontroller_presented_view_controllers(zval *return_value, zval *handle);

/*@zep NS\NSViewController presentingViewController(int handle) -> int */
zend_long ns_nsviewcontroller_presenting_view_controller(zval *handle);

/* ---- NSViewControllerPresentationAndTransitionStyles ---- */

/*@zep NS\NSViewController presentViewControllerAsSheet(int handle, int viewController) -> void */
void ns_nsviewcontroller_present_view_controller_as_sheet(zval *handle, zval *viewController);
/*@zep NS\NSViewController presentViewControllerAsModalWindow(int handle, int viewController) -> void */
void ns_nsviewcontroller_present_view_controller_as_modal_window(zval *handle, zval *viewController);
/*@zep NS\NSViewController presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehavior(int handle, int viewController, double x, double y, double width, double height, int positioningView, int preferredEdge, int behavior) -> void */
void ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior(zval *handle, zval *viewController, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge, zval *behavior);
/*@zep NS\NSViewController presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehaviorHasFullSizeContent(int handle, int viewController, double x, double y, double width, double height, int positioningView, int preferredEdge, int behavior, bool hasFullSizeContent) -> void */
void ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior_has_full_size_content(zval *handle, zval *viewController, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge, zval *behavior, zval *hasFullSizeContent);
/*@reserved NS\NSViewController - (void)transitionFromViewController:(NSViewController *)fromViewController toViewController:(NSViewController *)toViewController options:(NSViewControllerTransitionOptions)options completionHandler:(void (^ _Nullable)(void))completion API_AVAILABLE(macos(10.10)); */

/* ---- NSViewControllerContainer ---- */

/*@zep NS\NSViewController parentViewController(int handle) -> int */
zend_long ns_nsviewcontroller_parent_view_controller(zval *handle);

/*@zep NS\NSViewController childViewControllers(int handle) -> array */
void ns_nsviewcontroller_child_view_controllers(zval *return_value, zval *handle);
/*@zep NS\NSViewController setChildViewControllers(int handle, array childViewControllers) -> void */
void ns_nsviewcontroller_set_child_view_controllers(zval *handle, zval *childViewControllers);

/*@zep NS\NSViewController addChildViewController(int handle, int childViewController) -> void */
void ns_nsviewcontroller_add_child_view_controller(zval *handle, zval *childViewController);
/*@zep NS\NSViewController removeFromParentViewController(int handle) -> void */
void ns_nsviewcontroller_remove_from_parent_view_controller(zval *handle);
/*@zep NS\NSViewController insertChildViewControllerAtIndex(int handle, int childViewController, int index) -> void */
void ns_nsviewcontroller_insert_child_view_controller_at_index(zval *handle, zval *childViewController, zval *index);
/*@zep NS\NSViewController removeChildViewControllerAtIndex(int handle, int index) -> void */
void ns_nsviewcontroller_remove_child_view_controller_at_index(zval *handle, zval *index);

/*@zep NS\NSViewController preferredContentSizeDidChangeForViewController(int handle, int viewController) -> void */
void ns_nsviewcontroller_preferred_content_size_did_change_for_view_controller(zval *handle, zval *viewController);
/*@zep NS\NSViewController viewWillTransitionToSize(int handle, double width, double height) -> void */
void ns_nsviewcontroller_view_will_transition_to_size(zval *handle, zval *width, zval *height);

/* ---- NSViewControllerStoryboardingMethods ---- */

/*@zep NS\NSViewController storyboard(int handle) -> int */
zend_long ns_nsviewcontroller_storyboard(zval *handle);

/* ---- NSExtensionAdditions ---- */

/*@zep NS\NSViewController extensionContext(int handle) -> int */
zend_long ns_nsviewcontroller_extension_context(zval *handle);

/*@zep NS\NSViewController sourceItemView(int handle) -> int */
zend_long ns_nsviewcontroller_source_item_view(zval *handle);
/*@zep NS\NSViewController setSourceItemView(int handle, int sourceItemView) -> void */
void ns_nsviewcontroller_set_source_item_view(zval *handle, zval *sourceItemView);

/*@zep NS\NSViewController preferredScreenOrigin(int handle) -> array */
void ns_nsviewcontroller_preferred_screen_origin(zval *return_value, zval *handle);
/*@zep NS\NSViewController setPreferredScreenOrigin(int handle, double x, double y) -> void */
void ns_nsviewcontroller_set_preferred_screen_origin(zval *handle, zval *x, zval *y);

/*@zep NS\NSViewController preferredMinimumSize(int handle) -> array */
void ns_nsviewcontroller_preferred_minimum_size(zval *return_value, zval *handle);
/*@zep NS\NSViewController preferredMaximumSize(int handle) -> array */
void ns_nsviewcontroller_preferred_maximum_size(zval *return_value, zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_VIEWCONTROLLER_H */
