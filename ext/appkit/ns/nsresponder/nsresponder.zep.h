
extern zend_class_entry *appkit_ns_nsresponder_nsresponder_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSResponder_NSResponder);

PHP_METHOD(AppKit_NS_NSResponder_NSResponder, init);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, nextResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, setNextResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tryToPerformWith);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, performKeyEquivalent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, validRequestorForSendTypeReturnType);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseDown);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseDown);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseDown);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseUp);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseUp);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseUp);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseMoved);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseDragged);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, scrollWheel);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rightMouseDragged);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, otherMouseDragged);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseEntered);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, mouseExited);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, keyDown);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, keyUp);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, flagsChanged);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tabletPoint);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, tabletProximity);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, cursorUpdate);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, magnifyWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, rotateWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, swipeWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, beginGestureWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, endGestureWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, smartMagnifyWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, changeModeWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesBeganWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesMovedWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesEndedWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, touchesCancelledWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, quickLookWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, pressureChangeWithEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, contextMenuKeyDown);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, noResponderFor);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, resignFirstResponder);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, interpretKeyEvents);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, flushBufferedKeyEvents);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, menu);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, setMenu);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, showContextHelp);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, helpRequested);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, shouldBeTreatedAsInkEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wantsScrollEventsForSwipeTrackingOnAxis);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, wantsForwardedScrollEventsForAxis);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, supplementalTargetForActionSender);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, undoManager);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, validateProposedFirstResponderForEvent);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, presentErrorModalForWindowDelegateDidPresentSelectorContextInfo);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, presentError);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, willPresentError);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, performTextFinderAction);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, newWindowForTab);
PHP_METHOD(AppKit_NS_NSResponder_NSResponder, showWritingTools);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_nextresponder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_setnextresponder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nextResponder, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_trytoperformwith, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_performkeyequivalent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_validrequestorforsendtypereturntype, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, sendType)
	ZEND_ARG_INFO(0, returnType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mousedown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_rightmousedown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_othermousedown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mouseup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_rightmouseup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_othermouseup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mousemoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mousedragged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_scrollwheel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_rightmousedragged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_othermousedragged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mouseentered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_mouseexited, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_keydown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_keyup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_flagschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_tabletpoint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_tabletproximity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_cursorupdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_magnifywithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_rotatewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_swipewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_begingesturewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_endgesturewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_smartmagnifywithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_changemodewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_touchesbeganwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_touchesmovedwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_touchesendedwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_touchescancelledwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_quicklookwithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_pressurechangewithevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_contextmenukeydown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_noresponderfor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventSelector, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_acceptsfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_becomefirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_resignfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_interpretkeyevents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, eventArray, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_flushbufferedkeyevents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_showcontexthelp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_helprequested, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_shouldbetreatedasinkevent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_wantsscrolleventsforswipetrackingonaxis, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_wantsforwardedscrolleventsforaxis, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_supplementaltargetforactionsender, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_undomanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_validateproposedfirstresponderforevent, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, responder, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_presenterrormodalforwindowdelegatedidpresentselectorcontextinfo, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_INFO(0, didPresentSelector)
	ZEND_ARG_TYPE_INFO(0, contextInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_presenterror, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_willpresenterror, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_performtextfinderaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_newwindowfortab, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsresponder_nsresponder_showwritingtools, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsresponder_nsresponder_method_entry) {
	PHP_ME(AppKit_NS_NSResponder_NSResponder, init, arginfo_appkit_ns_nsresponder_nsresponder_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, nextResponder, arginfo_appkit_ns_nsresponder_nsresponder_nextresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, setNextResponder, arginfo_appkit_ns_nsresponder_nsresponder_setnextresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, tryToPerformWith, arginfo_appkit_ns_nsresponder_nsresponder_trytoperformwith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, performKeyEquivalent, arginfo_appkit_ns_nsresponder_nsresponder_performkeyequivalent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, validRequestorForSendTypeReturnType, arginfo_appkit_ns_nsresponder_nsresponder_validrequestorforsendtypereturntype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseDown, arginfo_appkit_ns_nsresponder_nsresponder_mousedown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, rightMouseDown, arginfo_appkit_ns_nsresponder_nsresponder_rightmousedown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, otherMouseDown, arginfo_appkit_ns_nsresponder_nsresponder_othermousedown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseUp, arginfo_appkit_ns_nsresponder_nsresponder_mouseup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, rightMouseUp, arginfo_appkit_ns_nsresponder_nsresponder_rightmouseup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, otherMouseUp, arginfo_appkit_ns_nsresponder_nsresponder_othermouseup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseMoved, arginfo_appkit_ns_nsresponder_nsresponder_mousemoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseDragged, arginfo_appkit_ns_nsresponder_nsresponder_mousedragged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, scrollWheel, arginfo_appkit_ns_nsresponder_nsresponder_scrollwheel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, rightMouseDragged, arginfo_appkit_ns_nsresponder_nsresponder_rightmousedragged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, otherMouseDragged, arginfo_appkit_ns_nsresponder_nsresponder_othermousedragged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseEntered, arginfo_appkit_ns_nsresponder_nsresponder_mouseentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, mouseExited, arginfo_appkit_ns_nsresponder_nsresponder_mouseexited, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, keyDown, arginfo_appkit_ns_nsresponder_nsresponder_keydown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, keyUp, arginfo_appkit_ns_nsresponder_nsresponder_keyup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, flagsChanged, arginfo_appkit_ns_nsresponder_nsresponder_flagschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, tabletPoint, arginfo_appkit_ns_nsresponder_nsresponder_tabletpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, tabletProximity, arginfo_appkit_ns_nsresponder_nsresponder_tabletproximity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, cursorUpdate, arginfo_appkit_ns_nsresponder_nsresponder_cursorupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, magnifyWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_magnifywithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, rotateWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_rotatewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, swipeWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_swipewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, beginGestureWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_begingesturewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, endGestureWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_endgesturewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, smartMagnifyWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_smartmagnifywithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, changeModeWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_changemodewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, touchesBeganWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_touchesbeganwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, touchesMovedWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_touchesmovedwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, touchesEndedWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_touchesendedwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, touchesCancelledWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_touchescancelledwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, quickLookWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_quicklookwithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, pressureChangeWithEvent, arginfo_appkit_ns_nsresponder_nsresponder_pressurechangewithevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, contextMenuKeyDown, arginfo_appkit_ns_nsresponder_nsresponder_contextmenukeydown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, noResponderFor, arginfo_appkit_ns_nsresponder_nsresponder_noresponderfor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, acceptsFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_acceptsfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, becomeFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_becomefirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, resignFirstResponder, arginfo_appkit_ns_nsresponder_nsresponder_resignfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, interpretKeyEvents, arginfo_appkit_ns_nsresponder_nsresponder_interpretkeyevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, flushBufferedKeyEvents, arginfo_appkit_ns_nsresponder_nsresponder_flushbufferedkeyevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, menu, arginfo_appkit_ns_nsresponder_nsresponder_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, setMenu, arginfo_appkit_ns_nsresponder_nsresponder_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, showContextHelp, arginfo_appkit_ns_nsresponder_nsresponder_showcontexthelp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, helpRequested, arginfo_appkit_ns_nsresponder_nsresponder_helprequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, shouldBeTreatedAsInkEvent, arginfo_appkit_ns_nsresponder_nsresponder_shouldbetreatedasinkevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, wantsScrollEventsForSwipeTrackingOnAxis, arginfo_appkit_ns_nsresponder_nsresponder_wantsscrolleventsforswipetrackingonaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, wantsForwardedScrollEventsForAxis, arginfo_appkit_ns_nsresponder_nsresponder_wantsforwardedscrolleventsforaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, supplementalTargetForActionSender, arginfo_appkit_ns_nsresponder_nsresponder_supplementaltargetforactionsender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, undoManager, arginfo_appkit_ns_nsresponder_nsresponder_undomanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, validateProposedFirstResponderForEvent, arginfo_appkit_ns_nsresponder_nsresponder_validateproposedfirstresponderforevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, presentErrorModalForWindowDelegateDidPresentSelectorContextInfo, arginfo_appkit_ns_nsresponder_nsresponder_presenterrormodalforwindowdelegatedidpresentselectorcontextinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, presentError, arginfo_appkit_ns_nsresponder_nsresponder_presenterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, willPresentError, arginfo_appkit_ns_nsresponder_nsresponder_willpresenterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, performTextFinderAction, arginfo_appkit_ns_nsresponder_nsresponder_performtextfinderaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, newWindowForTab, arginfo_appkit_ns_nsresponder_nsresponder_newwindowfortab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSResponder_NSResponder, showWritingTools, arginfo_appkit_ns_nsresponder_nsresponder_showwritingtools, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
