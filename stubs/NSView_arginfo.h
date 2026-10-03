/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9543b2505b715e0079f31366bdfc6db41fba4414 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_initWithFrame, 0, 1, IS_STATIC, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_frame, 0, 0, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setFrame, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, frame, NSRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_window, 0, 0, NSWindow, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_menu, 0, 0, NSMenu, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_superview, 0, 0, NSView, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_subviews, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_addSubview, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, view, NSView, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_removeFromSuperview, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_isHidden, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setHidden, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hidden, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_contentHuggingPriorityForOrientation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, NSLayoutConstraintOrientation, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setContentHuggingPriorityForOrientation, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_OBJ_INFO(0, orientation, NSLayoutConstraintOrientation, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_contentCompressionResistancePriorityForOrientation arginfo_class_NSView_contentHuggingPriorityForOrientation

#define arginfo_class_NSView_setContentCompressionResistancePriorityForOrientation arginfo_class_NSView_setContentHuggingPriorityForOrientation

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_fittingSize, 0, 0, NSSize, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_intrinsicContentSize arginfo_class_NSView_fittingSize

#define arginfo_class_NSView_layoutSubtreeIfNeeded arginfo_class_NSView_removeFromSuperview

#define arginfo_class_NSView_visibleRect arginfo_class_NSView_frame

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_scrollPoint, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, point, NSPoint, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_translatesAutoresizingMaskIntoConstraints arginfo_class_NSView_isHidden

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setTranslatesAutoresizingMaskIntoConstraints, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_wantsLayer arginfo_class_NSView_isHidden

#define arginfo_class_NSView_setWantsLayer arginfo_class_NSView_setTranslatesAutoresizingMaskIntoConstraints

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_layerBackgroundColor, 0, 0, NSColor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setLayerBackgroundColor, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, color, NSColor, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_layerContents, 0, 0, NSImage, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setLayerContents, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, image, NSImage, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_layerContentsGravity, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSView_setLayerContentsGravity, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, gravity, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_layerMasksToBounds arginfo_class_NSView_isHidden

#define arginfo_class_NSView_setLayerMasksToBounds arginfo_class_NSView_setTranslatesAutoresizingMaskIntoConstraints

#define arginfo_class_NSView_postsFrameChangedNotifications arginfo_class_NSView_isHidden

#define arginfo_class_NSView_setPostsFrameChangedNotifications arginfo_class_NSView_setTranslatesAutoresizingMaskIntoConstraints

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSView_widthAnchor, 0, 0, NSLayoutAnchor, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSView_heightAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_leadingAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_trailingAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_topAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_bottomAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_centerXAnchor arginfo_class_NSView_widthAnchor

#define arginfo_class_NSView_centerYAnchor arginfo_class_NSView_widthAnchor

ZEND_METHOD(NSView, initWithFrame);
ZEND_METHOD(NSView, frame);
ZEND_METHOD(NSView, setFrame);
ZEND_METHOD(NSView, window);
ZEND_METHOD(NSView, menu);
ZEND_METHOD(NSView, superview);
ZEND_METHOD(NSView, subviews);
ZEND_METHOD(NSView, addSubview);
ZEND_METHOD(NSView, removeFromSuperview);
ZEND_METHOD(NSView, isHidden);
ZEND_METHOD(NSView, setHidden);
ZEND_METHOD(NSView, contentHuggingPriorityForOrientation);
ZEND_METHOD(NSView, setContentHuggingPriorityForOrientation);
ZEND_METHOD(NSView, contentCompressionResistancePriorityForOrientation);
ZEND_METHOD(NSView, setContentCompressionResistancePriorityForOrientation);
ZEND_METHOD(NSView, fittingSize);
ZEND_METHOD(NSView, intrinsicContentSize);
ZEND_METHOD(NSView, layoutSubtreeIfNeeded);
ZEND_METHOD(NSView, visibleRect);
ZEND_METHOD(NSView, scrollPoint);
ZEND_METHOD(NSView, translatesAutoresizingMaskIntoConstraints);
ZEND_METHOD(NSView, setTranslatesAutoresizingMaskIntoConstraints);
ZEND_METHOD(NSView, wantsLayer);
ZEND_METHOD(NSView, setWantsLayer);
ZEND_METHOD(NSView, layerBackgroundColor);
ZEND_METHOD(NSView, setLayerBackgroundColor);
ZEND_METHOD(NSView, layerContents);
ZEND_METHOD(NSView, setLayerContents);
ZEND_METHOD(NSView, layerContentsGravity);
ZEND_METHOD(NSView, setLayerContentsGravity);
ZEND_METHOD(NSView, layerMasksToBounds);
ZEND_METHOD(NSView, setLayerMasksToBounds);
ZEND_METHOD(NSView, postsFrameChangedNotifications);
ZEND_METHOD(NSView, setPostsFrameChangedNotifications);
ZEND_METHOD(NSView, widthAnchor);
ZEND_METHOD(NSView, heightAnchor);
ZEND_METHOD(NSView, leadingAnchor);
ZEND_METHOD(NSView, trailingAnchor);
ZEND_METHOD(NSView, topAnchor);
ZEND_METHOD(NSView, bottomAnchor);
ZEND_METHOD(NSView, centerXAnchor);
ZEND_METHOD(NSView, centerYAnchor);

static const zend_function_entry class_NSView_methods[] = {
	ZEND_ME(NSView, initWithFrame, arginfo_class_NSView_initWithFrame, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSView, frame, arginfo_class_NSView_frame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setFrame, arginfo_class_NSView_setFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, window, arginfo_class_NSView_window, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, menu, arginfo_class_NSView_menu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, superview, arginfo_class_NSView_superview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, subviews, arginfo_class_NSView_subviews, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, addSubview, arginfo_class_NSView_addSubview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, removeFromSuperview, arginfo_class_NSView_removeFromSuperview, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, isHidden, arginfo_class_NSView_isHidden, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setHidden, arginfo_class_NSView_setHidden, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, contentHuggingPriorityForOrientation, arginfo_class_NSView_contentHuggingPriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setContentHuggingPriorityForOrientation, arginfo_class_NSView_setContentHuggingPriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, contentCompressionResistancePriorityForOrientation, arginfo_class_NSView_contentCompressionResistancePriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setContentCompressionResistancePriorityForOrientation, arginfo_class_NSView_setContentCompressionResistancePriorityForOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, fittingSize, arginfo_class_NSView_fittingSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, intrinsicContentSize, arginfo_class_NSView_intrinsicContentSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, layoutSubtreeIfNeeded, arginfo_class_NSView_layoutSubtreeIfNeeded, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, visibleRect, arginfo_class_NSView_visibleRect, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, scrollPoint, arginfo_class_NSView_scrollPoint, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, translatesAutoresizingMaskIntoConstraints, arginfo_class_NSView_translatesAutoresizingMaskIntoConstraints, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setTranslatesAutoresizingMaskIntoConstraints, arginfo_class_NSView_setTranslatesAutoresizingMaskIntoConstraints, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, wantsLayer, arginfo_class_NSView_wantsLayer, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setWantsLayer, arginfo_class_NSView_setWantsLayer, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, layerBackgroundColor, arginfo_class_NSView_layerBackgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setLayerBackgroundColor, arginfo_class_NSView_setLayerBackgroundColor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, layerContents, arginfo_class_NSView_layerContents, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setLayerContents, arginfo_class_NSView_setLayerContents, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, layerContentsGravity, arginfo_class_NSView_layerContentsGravity, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setLayerContentsGravity, arginfo_class_NSView_setLayerContentsGravity, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, layerMasksToBounds, arginfo_class_NSView_layerMasksToBounds, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setLayerMasksToBounds, arginfo_class_NSView_setLayerMasksToBounds, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, postsFrameChangedNotifications, arginfo_class_NSView_postsFrameChangedNotifications, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, setPostsFrameChangedNotifications, arginfo_class_NSView_setPostsFrameChangedNotifications, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, widthAnchor, arginfo_class_NSView_widthAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, heightAnchor, arginfo_class_NSView_heightAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, leadingAnchor, arginfo_class_NSView_leadingAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, trailingAnchor, arginfo_class_NSView_trailingAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, topAnchor, arginfo_class_NSView_topAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, bottomAnchor, arginfo_class_NSView_bottomAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, centerXAnchor, arginfo_class_NSView_centerXAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(NSView, centerYAnchor, arginfo_class_NSView_centerYAnchor, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSView_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("kCAGravityResize", appkit_cfstring_constant((CFStringRef) kCAGravityResize), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityResizeAspect", appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspect), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityResizeAspectFill", appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspectFill), CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("kCAGravityCenter", appkit_cfstring_constant((CFStringRef) kCAGravityCenter), CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSView(zend_class_entry *class_entry_NSResponder)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSView", class_NSView_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSResponder, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
