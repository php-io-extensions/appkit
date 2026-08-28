PHP_ARG_ENABLE(appkit, whether to enable appkit, [ --enable-appkit   Enable Appkit])

if test "$PHP_APPKIT" = "yes"; then

	

	APPKIT_SHARED_LIBADD="$APPKIT_SHARED_LIBADD -framework Foundation -framework AppKit -framework QuartzCore -framework CoreImage -framework Symbols"

	AC_DEFINE(HAVE_APPKIT, 1, [Whether you have Appkit])
	appkit_sources="appkit.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c appkit/bridge/bridge.zep.c
	appkit/ns/nsalert/nsalert.zep.c
	appkit/ns/nsapplication/nsapplication.zep.c
	appkit/ns/nsbox/nsbox.zep.c
	appkit/ns/nsbutton/nsbutton.zep.c
	appkit/ns/nscell/nscell.zep.c
	appkit/ns/nsclipview/nsclipview.zep.c
	appkit/ns/nscollectionview/nscollectionview.zep.c
	appkit/ns/nscollectionviewflowlayout/nscollectionviewflowlayout.zep.c
	appkit/ns/nscollectionviewflowlayoutinvalidationcontext/nscollectionviewflowlayoutinvalidationcontext.zep.c
	appkit/ns/nscollectionviewgridlayout/nscollectionviewgridlayout.zep.c
	appkit/ns/nscollectionviewitem/nscollectionviewitem.zep.c
	appkit/ns/nscollectionviewlayout/nscollectionviewlayout.zep.c
	appkit/ns/nscollectionviewlayoutattributes/nscollectionviewlayoutattributes.zep.c
	appkit/ns/nscollectionviewlayoutinvalidationcontext/nscollectionviewlayoutinvalidationcontext.zep.c
	appkit/ns/nscollectionviewupdateitem/nscollectionviewupdateitem.zep.c
	appkit/ns/nscolor/nscolor.zep.c
	appkit/ns/nscolorwell/nscolorwell.zep.c
	appkit/ns/nscombobox/nscombobox.zep.c
	appkit/ns/nscomboboxcell/nscomboboxcell.zep.c
	appkit/ns/nscontrol/nscontrol.zep.c
	appkit/ns/nsdatepicker/nsdatepicker.zep.c
	appkit/ns/nsdatepickercell/nsdatepickercell.zep.c
	appkit/ns/nsevent/nsevent.zep.c
	appkit/ns/nsfont/nsfont.zep.c
	appkit/ns/nsfontdescriptor/nsfontdescriptor.zep.c
	appkit/ns/nsgridcell/nsgridcell.zep.c
	appkit/ns/nsgridcolumn/nsgridcolumn.zep.c
	appkit/ns/nsgridrow/nsgridrow.zep.c
	appkit/ns/nsgridview/nsgridview.zep.c
	appkit/ns/nsimage/nsimage.zep.c
	appkit/ns/nsimagerep/nsimagerep.zep.c
	appkit/ns/nsimagesymbolconfiguration/nsimagesymbolconfiguration.zep.c
	appkit/ns/nsimageview/nsimageview.zep.c
	appkit/ns/nslayoutmanager/nslayoutmanager.zep.c
	appkit/ns/nsmenu/nsmenu.zep.c
	appkit/ns/nsmenuitem/nsmenuitem.zep.c
	appkit/ns/nsnotificationcenter/nsnotificationcenter.zep.c
	appkit/ns/nsopenpanel/nsopenpanel.zep.c
	appkit/ns/nsoutlineview/nsoutlineview.zep.c
	appkit/ns/nspathcell/nspathcell.zep.c
	appkit/ns/nspathcomponentcell/nspathcomponentcell.zep.c
	appkit/ns/nspathcontrol/nspathcontrol.zep.c
	appkit/ns/nspathcontrolitem/nspathcontrolitem.zep.c
	appkit/ns/nspopover/nspopover.zep.c
	appkit/ns/nspopupbutton/nspopupbutton.zep.c
	appkit/ns/nsprogressindicator/nsprogressindicator.zep.c
	appkit/ns/nsresponder/nsresponder.zep.c
	appkit/ns/nssavepanel/nssavepanel.zep.c
	appkit/ns/nsscreen/nsscreen.zep.c
	appkit/ns/nsscrollview/nsscrollview.zep.c
	appkit/ns/nssearchfield/nssearchfield.zep.c
	appkit/ns/nssearchfieldcell/nssearchfieldcell.zep.c
	appkit/ns/nssecuretextfield/nssecuretextfield.zep.c
	appkit/ns/nssecuretextfieldcell/nssecuretextfieldcell.zep.c
	appkit/ns/nssegmentedcell/nssegmentedcell.zep.c
	appkit/ns/nssegmentedcontrol/nssegmentedcontrol.zep.c
	appkit/ns/nsslider/nsslider.zep.c
	appkit/ns/nsslidercell/nsslidercell.zep.c
	appkit/ns/nssplitview/nssplitview.zep.c
	appkit/ns/nsstackview/nsstackview.zep.c
	appkit/ns/nsstatusbar/nsstatusbar.zep.c
	appkit/ns/nsstatusbarbutton/nsstatusbarbutton.zep.c
	appkit/ns/nsstatusitem/nsstatusitem.zep.c
	appkit/ns/nsstepper/nsstepper.zep.c
	appkit/ns/nssteppercell/nssteppercell.zep.c
	appkit/ns/nsswitch/nsswitch.zep.c
	appkit/ns/nstablecellview/nstablecellview.zep.c
	appkit/ns/nstablecolumn/nstablecolumn.zep.c
	appkit/ns/nstableheadercell/nstableheadercell.zep.c
	appkit/ns/nstableheaderview/nstableheaderview.zep.c
	appkit/ns/nstablerowview/nstablerowview.zep.c
	appkit/ns/nstableview/nstableview.zep.c
	appkit/ns/nstabview/nstabview.zep.c
	appkit/ns/nstabviewitem/nstabviewitem.zep.c
	appkit/ns/nstext/nstext.zep.c
	appkit/ns/nstextcontainer/nstextcontainer.zep.c
	appkit/ns/nstextfield/nstextfield.zep.c
	appkit/ns/nstextfieldcell/nstextfieldcell.zep.c
	appkit/ns/nstextstorage/nstextstorage.zep.c
	appkit/ns/nstextview/nstextview.zep.c
	appkit/ns/nstoolbar/nstoolbar.zep.c
	appkit/ns/nstoolbaritem/nstoolbaritem.zep.c
	appkit/ns/nstoolbaritemgroup/nstoolbaritemgroup.zep.c
	appkit/ns/nsview/nsview.zep.c
	appkit/ns/nsviewcontroller/nsviewcontroller.zep.c
	appkit/ns/nsvisualeffectview/nsvisualeffectview.zep.c
	appkit/ns/nswindow/nswindow.zep.c
	appkit/quartzcore/calayer/calayer.zep.c"
	PHP_NEW_EXTENSION(appkit, $appkit_sources, $ext_shared,, -fobjc-arc -Wno-deprecated-declarations)
	shared_objects_appkit="$shared_objects_appkit src/ca-layer.lo src/ns-alert.lo src/ns-application.lo src/ns-box.lo src/ns-bridge.lo src/ns-button.lo src/ns-cell.lo src/ns-clipview.lo src/ns-collectionview.lo src/ns-collectionviewflowlayout.lo src/ns-collectionviewgridlayout.lo src/ns-collectionviewlayout.lo src/ns-color.lo src/ns-colorwell.lo src/ns-combobox.lo src/ns-comboboxcell.lo src/ns-control.lo src/ns-datepicker.lo src/ns-datepickercell.lo src/ns-event.lo src/ns-font.lo src/ns-fontdescriptor.lo src/ns-gridview.lo src/ns-image.lo src/ns-imagerep.lo src/ns-imageview.lo src/ns-layoutmanager.lo src/ns-menu.lo src/ns-menuitem.lo src/ns-notificationcenter.lo src/ns-openpanel.lo src/ns-outlineview.lo src/ns-pathcell.lo src/ns-pathcomponentcell.lo src/ns-pathcontrol.lo src/ns-pathcontrolitem.lo src/ns-popover.lo src/ns-popupbutton.lo src/ns-progressindicator.lo src/ns-responder.lo src/ns-savepanel.lo src/ns-screen.lo src/ns-scrollview.lo src/ns-searchfield.lo src/ns-searchfieldcell.lo src/ns-securetextfield.lo src/ns-segmentedcell.lo src/ns-segmentedcontrol.lo src/ns-slider.lo src/ns-slidercell.lo src/ns-splitview.lo src/ns-stackview.lo src/ns-statusbar.lo src/ns-statusbarbutton.lo src/ns-statusitem.lo src/ns-stepper.lo src/ns-steppercell.lo src/ns-switch.lo src/ns-tablecellview.lo src/ns-tablecolumn.lo src/ns-tableheadercell.lo src/ns-tableheaderview.lo src/ns-tablerowview.lo src/ns-tableview.lo src/ns-tabview.lo src/ns-tabviewitem.lo src/ns-text.lo src/ns-textcontainer.lo src/ns-textfield.lo src/ns-textfieldcell.lo src/ns-textstorage.lo src/ns-textview.lo src/ns-toolbar.lo src/ns-toolbaritem.lo src/ns-toolbaritemgroup.lo src/ns-view.lo src/ns-viewcontroller.lo src/ns-visualeffectview.lo src/ns-window.lo"
	PHP_ADD_BUILD_DIR([$ext_builddir/kernel/])
	for dir in "appkit/bridge appkit/ns/nsalert appkit/ns/nsapplication appkit/ns/nsbox appkit/ns/nsbutton appkit/ns/nscell appkit/ns/nsclipview appkit/ns/nscollectionview appkit/ns/nscollectionviewflowlayout appkit/ns/nscollectionviewflowlayoutinvalidationcontext appkit/ns/nscollectionviewgridlayout appkit/ns/nscollectionviewitem appkit/ns/nscollectionviewlayout appkit/ns/nscollectionviewlayoutattributes appkit/ns/nscollectionviewlayoutinvalidationcontext appkit/ns/nscollectionviewupdateitem appkit/ns/nscolor appkit/ns/nscolorwell appkit/ns/nscombobox appkit/ns/nscomboboxcell appkit/ns/nscontrol appkit/ns/nsdatepicker appkit/ns/nsdatepickercell appkit/ns/nsevent appkit/ns/nsfont appkit/ns/nsfontdescriptor appkit/ns/nsgridcell appkit/ns/nsgridcolumn appkit/ns/nsgridrow appkit/ns/nsgridview appkit/ns/nsimage appkit/ns/nsimagerep appkit/ns/nsimagesymbolconfiguration appkit/ns/nsimageview appkit/ns/nslayoutmanager appkit/ns/nsmenu appkit/ns/nsmenuitem appkit/ns/nsnotificationcenter appkit/ns/nsopenpanel appkit/ns/nsoutlineview appkit/ns/nspathcell appkit/ns/nspathcomponentcell appkit/ns/nspathcontrol appkit/ns/nspathcontrolitem appkit/ns/nspopover appkit/ns/nspopupbutton appkit/ns/nsprogressindicator appkit/ns/nsresponder appkit/ns/nssavepanel appkit/ns/nsscreen appkit/ns/nsscrollview appkit/ns/nssearchfield appkit/ns/nssearchfieldcell appkit/ns/nssecuretextfield appkit/ns/nssecuretextfieldcell appkit/ns/nssegmentedcell appkit/ns/nssegmentedcontrol appkit/ns/nsslider appkit/ns/nsslidercell appkit/ns/nssplitview appkit/ns/nsstackview appkit/ns/nsstatusbar appkit/ns/nsstatusbarbutton appkit/ns/nsstatusitem appkit/ns/nsstepper appkit/ns/nssteppercell appkit/ns/nsswitch appkit/ns/nstablecellview appkit/ns/nstablecolumn appkit/ns/nstableheadercell appkit/ns/nstableheaderview appkit/ns/nstablerowview appkit/ns/nstableview appkit/ns/nstabview appkit/ns/nstabviewitem appkit/ns/nstext appkit/ns/nstextcontainer appkit/ns/nstextfield appkit/ns/nstextfieldcell appkit/ns/nstextstorage appkit/ns/nstextview appkit/ns/nstoolbar appkit/ns/nstoolbaritem appkit/ns/nstoolbaritemgroup appkit/ns/nsview appkit/ns/nsviewcontroller appkit/ns/nsvisualeffectview appkit/ns/nswindow appkit/quartzcore/calayer"; do
		PHP_ADD_BUILD_DIR([$ext_builddir/$dir])
	done
	PHP_ADD_BUILD_DIR([$ext_builddir/src])
	PHP_ADD_MAKEFILE_FRAGMENT
	PHP_SUBST(APPKIT_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([appkit], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([appkit], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/appkit], [php_APPKIT.h])

fi
