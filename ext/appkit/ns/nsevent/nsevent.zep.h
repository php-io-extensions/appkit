
extern zend_class_entry *appkit_ns_nsevent_nsevent_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSEvent_NSEvent);

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, type);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, modifierFlags);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, timestamp);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, window);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, windowNumber);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, clickCount);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, buttonNumber);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventNumber);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressure);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, locationInWindow);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaX);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaY);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deltaZ);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, hasPreciseScrollingDeltas);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, scrollingDeltaX);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, scrollingDeltaY);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, momentumPhase);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isDirectionInvertedFromDevice);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, characters);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, charactersIgnoringModifiers);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, charactersByApplyingModifiers);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isARepeat);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyCode);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, trackingNumber);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, userData);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, trackingArea);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, subtype);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, data1);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, data2);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventWithEventRef);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, eventWithCGEvent);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isMouseCoalescingEnabled);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, setMouseCoalescingEnabled);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, magnification);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, deviceID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, rotation);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteX);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteY);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, absoluteZ);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, buttonMask);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tilt);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tangentialPressure);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorDefined);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, tabletID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, systemTabletID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, vendorPointingDeviceType);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceSerialNumber);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, uniqueID);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, capabilityMask);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pointingDeviceType);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isEnteringProximity);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, touchesMatchingPhaseInView);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, allTouches);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, touchesForView);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, coalescedTouchesForTouch);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, phase);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stage);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stageTransition);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, associatedEventsMask);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressureBehavior);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, isSwipeTrackingFromScrollEventsEnabled);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, startPeriodicEventsAfterDelayWithPeriod);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, stopPeriodicEvents);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, enterExitEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberTrackingNumberUserData);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseLocation);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, modifierFlagsClass);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, pressedMouseButtons);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, doubleClickInterval);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyRepeatDelay);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyRepeatInterval);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, removeMonitor);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_modifierflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_timestamp, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_windownumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_clickcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_buttonnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_eventnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pressure, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_locationinwindow, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_deltax, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_deltay, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_deltaz, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_hasprecisescrollingdeltas, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_scrollingdeltax, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_scrollingdeltay, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_momentumphase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_isdirectioninvertedfromdevice, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_characters, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_charactersignoringmodifiers, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_charactersbyapplyingmodifiers, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_isarepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_keycode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_trackingnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_userdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_trackingarea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_subtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_data1, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_data2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_eventwitheventref, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventRef, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_eventwithcgevent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cgEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_ismousecoalescingenabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_setmousecoalescingenabled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_magnification, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_deviceid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_rotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_absolutex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_absolutey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_absolutez, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_buttonmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_tilt, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_tangentialpressure, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_vendordefined, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_vendorid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_tabletid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pointingdeviceid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_systemtabletid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_vendorpointingdevicetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pointingdeviceserialnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_uniqueid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_capabilitymask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pointingdevicetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_isenteringproximity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_touchesmatchingphaseinview, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, phase, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_alltouches, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_touchesforview, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_coalescedtouchesfortouch, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_phase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_stage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_stagetransition, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_associatedeventsmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pressurebehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_isswipetrackingfromscrolleventsenabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_startperiodiceventsafterdelaywithperiod, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, delay, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, period, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_stopperiodicevents, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mouseeventwithtypelocationmodifierflagstimestampwindownumbercontexteventnumberclickcountpressure, 0, 10, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, windowNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clickCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pressure, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_keyeventwithtypelocationmodifierflagstimestampwindownumbercontextcharacterscharactersignoringmodifiersisarepeatkeycode, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, windowNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, characters, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, charactersIgnoringModifiers, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_enterexiteventwithtypelocationmodifierflagstimestampwindownumbercontexteventnumbertrackingnumberuserdata, 0, 10, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, windowNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackingNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_othereventwithtypelocationmodifierflagstimestampwindownumbercontextsubtypedata1data2, 0, 10, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, windowNumber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subtype, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mouselocation, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_modifierflagsclass, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_pressedmousebuttons, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_doubleclickinterval, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_keyrepeatdelay, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_keyrepeatinterval, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_removemonitor, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, eventMonitor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsevent_nsevent_method_entry) {
	PHP_ME(AppKit_NS_NSEvent_NSEvent, type, arginfo_appkit_ns_nsevent_nsevent_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, modifierFlags, arginfo_appkit_ns_nsevent_nsevent_modifierflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, timestamp, arginfo_appkit_ns_nsevent_nsevent_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, window, arginfo_appkit_ns_nsevent_nsevent_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, windowNumber, arginfo_appkit_ns_nsevent_nsevent_windownumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, clickCount, arginfo_appkit_ns_nsevent_nsevent_clickcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, buttonNumber, arginfo_appkit_ns_nsevent_nsevent_buttonnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, eventNumber, arginfo_appkit_ns_nsevent_nsevent_eventnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pressure, arginfo_appkit_ns_nsevent_nsevent_pressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, locationInWindow, arginfo_appkit_ns_nsevent_nsevent_locationinwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, deltaX, arginfo_appkit_ns_nsevent_nsevent_deltax, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, deltaY, arginfo_appkit_ns_nsevent_nsevent_deltay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, deltaZ, arginfo_appkit_ns_nsevent_nsevent_deltaz, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, hasPreciseScrollingDeltas, arginfo_appkit_ns_nsevent_nsevent_hasprecisescrollingdeltas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, scrollingDeltaX, arginfo_appkit_ns_nsevent_nsevent_scrollingdeltax, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, scrollingDeltaY, arginfo_appkit_ns_nsevent_nsevent_scrollingdeltay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, momentumPhase, arginfo_appkit_ns_nsevent_nsevent_momentumphase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, isDirectionInvertedFromDevice, arginfo_appkit_ns_nsevent_nsevent_isdirectioninvertedfromdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, characters, arginfo_appkit_ns_nsevent_nsevent_characters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, charactersIgnoringModifiers, arginfo_appkit_ns_nsevent_nsevent_charactersignoringmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, charactersByApplyingModifiers, arginfo_appkit_ns_nsevent_nsevent_charactersbyapplyingmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, isARepeat, arginfo_appkit_ns_nsevent_nsevent_isarepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, keyCode, arginfo_appkit_ns_nsevent_nsevent_keycode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, trackingNumber, arginfo_appkit_ns_nsevent_nsevent_trackingnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, userData, arginfo_appkit_ns_nsevent_nsevent_userdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, trackingArea, arginfo_appkit_ns_nsevent_nsevent_trackingarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, subtype, arginfo_appkit_ns_nsevent_nsevent_subtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, data1, arginfo_appkit_ns_nsevent_nsevent_data1, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, data2, arginfo_appkit_ns_nsevent_nsevent_data2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, eventWithEventRef, arginfo_appkit_ns_nsevent_nsevent_eventwitheventref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, eventWithCGEvent, arginfo_appkit_ns_nsevent_nsevent_eventwithcgevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, isMouseCoalescingEnabled, arginfo_appkit_ns_nsevent_nsevent_ismousecoalescingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, setMouseCoalescingEnabled, arginfo_appkit_ns_nsevent_nsevent_setmousecoalescingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, magnification, arginfo_appkit_ns_nsevent_nsevent_magnification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, deviceID, arginfo_appkit_ns_nsevent_nsevent_deviceid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, rotation, arginfo_appkit_ns_nsevent_nsevent_rotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, absoluteX, arginfo_appkit_ns_nsevent_nsevent_absolutex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, absoluteY, arginfo_appkit_ns_nsevent_nsevent_absolutey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, absoluteZ, arginfo_appkit_ns_nsevent_nsevent_absolutez, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, buttonMask, arginfo_appkit_ns_nsevent_nsevent_buttonmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, tilt, arginfo_appkit_ns_nsevent_nsevent_tilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, tangentialPressure, arginfo_appkit_ns_nsevent_nsevent_tangentialpressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, vendorDefined, arginfo_appkit_ns_nsevent_nsevent_vendordefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, vendorID, arginfo_appkit_ns_nsevent_nsevent_vendorid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, tabletID, arginfo_appkit_ns_nsevent_nsevent_tabletid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pointingDeviceID, arginfo_appkit_ns_nsevent_nsevent_pointingdeviceid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, systemTabletID, arginfo_appkit_ns_nsevent_nsevent_systemtabletid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, vendorPointingDeviceType, arginfo_appkit_ns_nsevent_nsevent_vendorpointingdevicetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pointingDeviceSerialNumber, arginfo_appkit_ns_nsevent_nsevent_pointingdeviceserialnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, uniqueID, arginfo_appkit_ns_nsevent_nsevent_uniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, capabilityMask, arginfo_appkit_ns_nsevent_nsevent_capabilitymask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pointingDeviceType, arginfo_appkit_ns_nsevent_nsevent_pointingdevicetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, isEnteringProximity, arginfo_appkit_ns_nsevent_nsevent_isenteringproximity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, touchesMatchingPhaseInView, arginfo_appkit_ns_nsevent_nsevent_touchesmatchingphaseinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, allTouches, arginfo_appkit_ns_nsevent_nsevent_alltouches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, touchesForView, arginfo_appkit_ns_nsevent_nsevent_touchesforview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, coalescedTouchesForTouch, arginfo_appkit_ns_nsevent_nsevent_coalescedtouchesfortouch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, phase, arginfo_appkit_ns_nsevent_nsevent_phase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, stage, arginfo_appkit_ns_nsevent_nsevent_stage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, stageTransition, arginfo_appkit_ns_nsevent_nsevent_stagetransition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, associatedEventsMask, arginfo_appkit_ns_nsevent_nsevent_associatedeventsmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pressureBehavior, arginfo_appkit_ns_nsevent_nsevent_pressurebehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, isSwipeTrackingFromScrollEventsEnabled, arginfo_appkit_ns_nsevent_nsevent_isswipetrackingfromscrolleventsenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, startPeriodicEventsAfterDelayWithPeriod, arginfo_appkit_ns_nsevent_nsevent_startperiodiceventsafterdelaywithperiod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, stopPeriodicEvents, arginfo_appkit_ns_nsevent_nsevent_stopperiodicevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure, arginfo_appkit_ns_nsevent_nsevent_mouseeventwithtypelocationmodifierflagstimestampwindownumbercontexteventnumberclickcountpressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode, arginfo_appkit_ns_nsevent_nsevent_keyeventwithtypelocationmodifierflagstimestampwindownumbercontextcharacterscharactersignoringmodifiersisarepeatkeycode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, enterExitEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberTrackingNumberUserData, arginfo_appkit_ns_nsevent_nsevent_enterexiteventwithtypelocationmodifierflagstimestampwindownumbercontexteventnumbertrackingnumberuserdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2, arginfo_appkit_ns_nsevent_nsevent_othereventwithtypelocationmodifierflagstimestampwindownumbercontextsubtypedata1data2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseLocation, arginfo_appkit_ns_nsevent_nsevent_mouselocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, modifierFlagsClass, arginfo_appkit_ns_nsevent_nsevent_modifierflagsclass, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, pressedMouseButtons, arginfo_appkit_ns_nsevent_nsevent_pressedmousebuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, doubleClickInterval, arginfo_appkit_ns_nsevent_nsevent_doubleclickinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, keyRepeatDelay, arginfo_appkit_ns_nsevent_nsevent_keyrepeatdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, keyRepeatInterval, arginfo_appkit_ns_nsevent_nsevent_keyrepeatinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, removeMonitor, arginfo_appkit_ns_nsevent_nsevent_removemonitor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
