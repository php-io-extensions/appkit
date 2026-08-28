
extern zend_class_entry *appkit_ns_nsviewcontroller_nsviewcontroller_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSViewController_NSViewController);

PHP_METHOD(AppKit_NS_NSViewController_NSViewController, initWithNibNameBundle);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nibName);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, nibBundle);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, representedObject);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setRepresentedObject);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, title);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setTitle);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, view);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewIfLoaded);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, commitEditingWithDelegateDidCommitSelectorContextInfo);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, commitEditing);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, discardEditing);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidLoad);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, isViewLoaded);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillAppear);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidAppear);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillDisappear);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidDisappear);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredContentSize);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setPreferredContentSize);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, updateViewConstraints);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillLayout);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewDidLayout);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAnimator);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, dismissViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, dismissController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentedViewControllers);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentingViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsSheet);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsModalWindow);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehavior);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehaviorHasFullSizeContent);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, parentViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, childViewControllers);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setChildViewControllers);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, addChildViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, removeFromParentViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, insertChildViewControllerAtIndex);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, removeChildViewControllerAtIndex);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredContentSizeDidChangeForViewController);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, viewWillTransitionToSize);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, storyboard);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, extensionContext);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, sourceItemView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setSourceItemView);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredScreenOrigin);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, setPreferredScreenOrigin);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredMinimumSize);
PHP_METHOD(AppKit_NS_NSViewController_NSViewController, preferredMaximumSize);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_initwithnibnamebundle, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, nibName)
	ZEND_ARG_TYPE_INFO(0, bundle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nibname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nibbundle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_representedobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setrepresentedobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, representedObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_title, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, title)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_view, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewifloaded, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadview, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadviewifneeded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_commiteditingwithdelegatedidcommitselectorcontextinfo, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_INFO(0, didCommitSelector)
	ZEND_ARG_TYPE_INFO(0, contextInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_commitediting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_discardediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidload, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_isviewloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwillappear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidappear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilldisappear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdiddisappear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredcontentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setpreferredcontentsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_updateviewconstraints, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilllayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidlayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleranimator, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, animator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_dismissviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_dismisscontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentedviewcontrollers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentingviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrollerassheet, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrollerasmodalwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleraspopoverrelativetorectofviewpreferrededgebehavior, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positioningView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredEdge, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleraspopoverrelativetorectofviewpreferrededgebehaviorhasfullsizecontent, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positioningView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preferredEdge, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasFullSizeContent, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_parentviewcontroller, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_childviewcontrollers, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setchildviewcontrollers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, childViewControllers, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_addchildviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childViewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_removefromparentviewcontroller, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_insertchildviewcontrolleratindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childViewController, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_removechildviewcontrolleratindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredcontentsizedidchangeforviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewController, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilltransitiontosize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_storyboard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_extensioncontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_sourceitemview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setsourceitemview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceItemView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredscreenorigin, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setpreferredscreenorigin, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredminimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredmaximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsviewcontroller_nsviewcontroller_method_entry) {
	PHP_ME(AppKit_NS_NSViewController_NSViewController, initWithNibNameBundle, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_initwithnibnamebundle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, nibName, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nibname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, nibBundle, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_nibbundle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, representedObject, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_representedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setRepresentedObject, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setrepresentedobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, title, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setTitle, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, view, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_view, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewIfLoaded, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewifloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, loadView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, loadViewIfNeeded, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_loadviewifneeded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, commitEditingWithDelegateDidCommitSelectorContextInfo, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_commiteditingwithdelegatedidcommitselectorcontextinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, commitEditing, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_commitediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, discardEditing, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_discardediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewDidLoad, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidload, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, isViewLoaded, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_isviewloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewWillAppear, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwillappear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewDidAppear, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidappear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewWillDisappear, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilldisappear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewDidDisappear, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdiddisappear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, preferredContentSize, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredcontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setPreferredContentSize, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setpreferredcontentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, updateViewConstraints, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_updateviewconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewWillLayout, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilllayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewDidLayout, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewdidlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentViewControllerAnimator, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleranimator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, dismissViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_dismissviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, dismissController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_dismisscontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentedViewControllers, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentedviewcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentingViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentingviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsSheet, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrollerassheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsModalWindow, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrollerasmodalwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehavior, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleraspopoverrelativetorectofviewpreferrededgebehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, presentViewControllerAsPopoverRelativeToRectOfViewPreferredEdgeBehaviorHasFullSizeContent, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_presentviewcontrolleraspopoverrelativetorectofviewpreferrededgebehaviorhasfullsizecontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, parentViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_parentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, childViewControllers, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_childviewcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setChildViewControllers, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setchildviewcontrollers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, addChildViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_addchildviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, removeFromParentViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_removefromparentviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, insertChildViewControllerAtIndex, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_insertchildviewcontrolleratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, removeChildViewControllerAtIndex, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_removechildviewcontrolleratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, preferredContentSizeDidChangeForViewController, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredcontentsizedidchangeforviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, viewWillTransitionToSize, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_viewwilltransitiontosize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, storyboard, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_storyboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, extensionContext, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_extensioncontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, sourceItemView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_sourceitemview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setSourceItemView, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setsourceitemview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, preferredScreenOrigin, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredscreenorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, setPreferredScreenOrigin, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_setpreferredscreenorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, preferredMinimumSize, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredminimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSViewController_NSViewController, preferredMaximumSize, arginfo_appkit_ns_nsviewcontroller_nsviewcontroller_preferredmaximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
