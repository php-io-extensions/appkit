# Objective-C bridge — phpize does not emit correct rules for .m sources.
NS_OBJC_CFLAGS = -fobjc-arc -x objective-c -Wno-deprecated-declarations

$(builddir)/src/ns-app.lo: $(srcdir)/src/ns-app.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-app.m -o $@

$(builddir)/src/ns-window.lo: $(srcdir)/src/ns-window.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-window.m -o $@

$(builddir)/src/ns-view.lo: $(srcdir)/src/ns-view.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-view.m -o $@

$(builddir)/src/ns-menu.lo: $(srcdir)/src/ns-menu.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menu.m -o $@

$(builddir)/src/ns-button.lo: $(srcdir)/src/ns-button.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-button.m -o $@

$(builddir)/src/ns-switch.lo: $(srcdir)/src/ns-switch.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-switch.m -o $@

$(builddir)/src/ns-slider.lo: $(srcdir)/src/ns-slider.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-slider.m -o $@

$(builddir)/src/ns-stepper.lo: $(srcdir)/src/ns-stepper.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-stepper.m -o $@

$(builddir)/src/ns-progressindicator.lo: $(srcdir)/src/ns-progressindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-progressindicator.m -o $@

$(builddir)/src/ns-popupbutton.lo: $(srcdir)/src/ns-popupbutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popupbutton.m -o $@

$(builddir)/src/ns-combobox.lo: $(srcdir)/src/ns-combobox.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-combobox.m -o $@

$(builddir)/src/ns-segmentedcontrol.lo: $(srcdir)/src/ns-segmentedcontrol.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-segmentedcontrol.m -o $@

$(builddir)/src/ns-textfield.lo: $(srcdir)/src/ns-textfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfield.m -o $@

$(builddir)/src/ns-securetextfield.lo: $(srcdir)/src/ns-securetextfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-securetextfield.m -o $@

$(builddir)/src/ns-textview.lo: $(srcdir)/src/ns-textview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textview.m -o $@

$(builddir)/src/ns-colorwell.lo: $(srcdir)/src/ns-colorwell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorwell.m -o $@

$(builddir)/src/ns-datepicker.lo: $(srcdir)/src/ns-datepicker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-datepicker.m -o $@

$(builddir)/src/ns-imageview.lo: $(srcdir)/src/ns-imageview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-imageview.m -o $@

$(builddir)/src/ns-box.lo: $(srcdir)/src/ns-box.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-box.m -o $@

$(builddir)/src/ns-stackview.lo: $(srcdir)/src/ns-stackview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-stackview.m -o $@

$(builddir)/src/ns-scrollview.lo: $(srcdir)/src/ns-scrollview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrollview.m -o $@

$(builddir)/src/ns-splitview.lo: $(srcdir)/src/ns-splitview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitview.m -o $@

$(builddir)/src/ns-tabview.lo: $(srcdir)/src/ns-tabview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabview.m -o $@

$(builddir)/src/ns-gridview.lo: $(srcdir)/src/ns-gridview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridview.m -o $@

$(builddir)/src/ns-tableview.lo: $(srcdir)/src/ns-tableview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableview.m -o $@

$(builddir)/src/ns-outlineview.lo: $(srcdir)/src/ns-outlineview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-outlineview.m -o $@

$(builddir)/src/ns-collectionview.lo: $(srcdir)/src/ns-collectionview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionview.m -o $@

$(builddir)/src/ns-toolbar.lo: $(srcdir)/src/ns-toolbar.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-toolbar.m -o $@

$(builddir)/src/ns-popover.lo: $(srcdir)/src/ns-popover.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popover.m -o $@

$(builddir)/src/ns-statusitem.lo: $(srcdir)/src/ns-statusitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusitem.m -o $@

$(builddir)/src/ns-alert.lo: $(srcdir)/src/ns-alert.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-alert.m -o $@

$(builddir)/src/ns-openpanel.lo: $(srcdir)/src/ns-openpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-openpanel.m -o $@

$(builddir)/src/ns-savepanel.lo: $(srcdir)/src/ns-savepanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-savepanel.m -o $@

$(builddir)/src/ns-event.lo: $(srcdir)/src/ns-event.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-event.m -o $@

$(builddir)/src/ns-responder.lo: $(srcdir)/src/ns-responder.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-responder.m -o $@

$(builddir)/src/ns-control.lo: $(srcdir)/src/ns-control.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-control.m -o $@

$(builddir)/src/ns-cell.lo: $(srcdir)/src/ns-cell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cell.m -o $@

$(builddir)/src/ns-actioncell.lo: $(srcdir)/src/ns-actioncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-actioncell.m -o $@

$(builddir)/src/ns-viewcontroller.lo: $(srcdir)/src/ns-viewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-viewcontroller.m -o $@

$(builddir)/src/ns-windowcontroller.lo: $(srcdir)/src/ns-windowcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-windowcontroller.m -o $@

$(builddir)/src/ns-panel.lo: $(srcdir)/src/ns-panel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-panel.m -o $@

$(builddir)/src/ns-screen.lo: $(srcdir)/src/ns-screen.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-screen.m -o $@

$(builddir)/src/ns-cursor.lo: $(srcdir)/src/ns-cursor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cursor.m -o $@

$(builddir)/src/ns-trackingarea.lo: $(srcdir)/src/ns-trackingarea.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-trackingarea.m -o $@

$(builddir)/src/ns-touch.lo: $(srcdir)/src/ns-touch.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-touch.m -o $@

$(builddir)/src/ns-gesturerecognizer.lo: $(srcdir)/src/ns-gesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gesturerecognizer.m -o $@

$(builddir)/src/ns-clickgesturerecognizer.lo: $(srcdir)/src/ns-clickgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-clickgesturerecognizer.m -o $@

$(builddir)/src/ns-pangesturerecognizer.lo: $(srcdir)/src/ns-pangesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pangesturerecognizer.m -o $@

$(builddir)/src/ns-pressgesturerecognizer.lo: $(srcdir)/src/ns-pressgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pressgesturerecognizer.m -o $@

$(builddir)/src/ns-rotationgesturerecognizer.lo: $(srcdir)/src/ns-rotationgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rotationgesturerecognizer.m -o $@

$(builddir)/src/ns-magnificationgesturerecognizer.lo: $(srcdir)/src/ns-magnificationgesturerecognizer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-magnificationgesturerecognizer.m -o $@

$(builddir)/src/ns-appearance.lo: $(srcdir)/src/ns-appearance.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-appearance.m -o $@

$(builddir)/src/ns-color.lo: $(srcdir)/src/ns-color.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-color.m -o $@

$(builddir)/src/ns-colorspace.lo: $(srcdir)/src/ns-colorspace.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorspace.m -o $@

$(builddir)/src/ns-colorlist.lo: $(srcdir)/src/ns-colorlist.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorlist.m -o $@

$(builddir)/src/ns-colorsampler.lo: $(srcdir)/src/ns-colorsampler.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorsampler.m -o $@

$(builddir)/src/ns-colorpanel.lo: $(srcdir)/src/ns-colorpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorpanel.m -o $@

$(builddir)/src/ns-colorpicker.lo: $(srcdir)/src/ns-colorpicker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-colorpicker.m -o $@

$(builddir)/src/ns-imagerep.lo: $(srcdir)/src/ns-imagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-imagerep.m -o $@

$(builddir)/src/ns-image.lo: $(srcdir)/src/ns-image.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-image.m -o $@

$(builddir)/src/ns-bitmapimagerep.lo: $(srcdir)/src/ns-bitmapimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-bitmapimagerep.m -o $@

$(builddir)/src/ns-cachedimagerep.lo: $(srcdir)/src/ns-cachedimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-cachedimagerep.m -o $@

$(builddir)/src/ns-ciimagerep.lo: $(srcdir)/src/ns-ciimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-ciimagerep.m -o $@

$(builddir)/src/ns-epsimagerep.lo: $(srcdir)/src/ns-epsimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-epsimagerep.m -o $@

$(builddir)/src/ns-pdfimagerep.lo: $(srcdir)/src/ns-pdfimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pdfimagerep.m -o $@

$(builddir)/src/ns-customimagerep.lo: $(srcdir)/src/ns-customimagerep.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-customimagerep.m -o $@

$(builddir)/src/ns-font.lo: $(srcdir)/src/ns-font.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-font.m -o $@

$(builddir)/src/ns-fontdescriptor.lo: $(srcdir)/src/ns-fontdescriptor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontdescriptor.m -o $@

$(builddir)/src/ns-fontmanager.lo: $(srcdir)/src/ns-fontmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontmanager.m -o $@

$(builddir)/src/ns-fontpanel.lo: $(srcdir)/src/ns-fontpanel.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontpanel.m -o $@

$(builddir)/src/ns-fontcollection.lo: $(srcdir)/src/ns-fontcollection.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-fontcollection.m -o $@

$(builddir)/src/ns-bezierpath.lo: $(srcdir)/src/ns-bezierpath.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-bezierpath.m -o $@

$(builddir)/src/ns-gradient.lo: $(srcdir)/src/ns-gradient.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gradient.m -o $@

$(builddir)/src/ns-shadow.lo: $(srcdir)/src/ns-shadow.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-shadow.m -o $@

$(builddir)/src/ns-graphicscontext.lo: $(srcdir)/src/ns-graphicscontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-graphicscontext.m -o $@

$(builddir)/src/ns-animationcontext.lo: $(srcdir)/src/ns-animationcontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-animationcontext.m -o $@

$(builddir)/src/ns-animation.lo: $(srcdir)/src/ns-animation.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-animation.m -o $@

$(builddir)/src/ns-viewanimation.lo: $(srcdir)/src/ns-viewanimation.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-viewanimation.m -o $@

$(builddir)/src/ns-text.lo: $(srcdir)/src/ns-text.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-text.m -o $@

$(builddir)/src/ns-textfieldcell.lo: $(srcdir)/src/ns-textfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfieldcell.m -o $@

$(builddir)/src/ns-securetextfieldcell.lo: $(srcdir)/src/ns-securetextfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-securetextfieldcell.m -o $@

$(builddir)/src/ns-textcontainer.lo: $(srcdir)/src/ns-textcontainer.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontainer.m -o $@

$(builddir)/src/ns-layoutmanager.lo: $(srcdir)/src/ns-layoutmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-layoutmanager.m -o $@

$(builddir)/src/ns-textstorage.lo: $(srcdir)/src/ns-textstorage.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textstorage.m -o $@

$(builddir)/src/ns-textinputcontext.lo: $(srcdir)/src/ns-textinputcontext.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textinputcontext.m -o $@

$(builddir)/src/ns-searchfield.lo: $(srcdir)/src/ns-searchfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-searchfield.m -o $@

$(builddir)/src/ns-searchfieldcell.lo: $(srcdir)/src/ns-searchfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-searchfieldcell.m -o $@

$(builddir)/src/ns-tokenfield.lo: $(srcdir)/src/ns-tokenfield.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tokenfield.m -o $@

$(builddir)/src/ns-tokenfieldcell.lo: $(srcdir)/src/ns-tokenfieldcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tokenfieldcell.m -o $@

$(builddir)/src/ns-combobutton.lo: $(srcdir)/src/ns-combobutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-combobutton.m -o $@

$(builddir)/src/ns-textfinder.lo: $(srcdir)/src/ns-textfinder.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textfinder.m -o $@

$(builddir)/src/ns-spellchecker.lo: $(srcdir)/src/ns-spellchecker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-spellchecker.m -o $@

$(builddir)/src/ns-textattachment.lo: $(srcdir)/src/ns-textattachment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textattachment.m -o $@

$(builddir)/src/ns-textattachmentcell.lo: $(srcdir)/src/ns-textattachmentcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textattachmentcell.m -o $@

$(builddir)/src/ns-textlist.lo: $(srcdir)/src/ns-textlist.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlist.m -o $@

$(builddir)/src/ns-texttable.lo: $(srcdir)/src/ns-texttable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-texttable.m -o $@


$(builddir)/src/ns-textblock.lo: $(srcdir)/src/ns-textblock.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textblock.m -o $@

$(builddir)/src/ns-paragraphstyle.lo: $(srcdir)/src/ns-paragraphstyle.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-paragraphstyle.m -o $@

$(builddir)/src/ns-typesetter.lo: $(srcdir)/src/ns-typesetter.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-typesetter.m -o $@

$(builddir)/src/ns-atstypesetter.lo: $(srcdir)/src/ns-atstypesetter.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-atstypesetter.m -o $@

$(builddir)/src/ns-glyphgenerator.lo: $(srcdir)/src/ns-glyphgenerator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-glyphgenerator.m -o $@

$(builddir)/src/ns-textlayoutmanager.lo: $(srcdir)/src/ns-textlayoutmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlayoutmanager.m -o $@

$(builddir)/src/ns-textcontentmanager.lo: $(srcdir)/src/ns-textcontentmanager.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontentmanager.m -o $@

$(builddir)/src/ns-textcontentstorage.lo: $(srcdir)/src/ns-textcontentstorage.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcontentstorage.m -o $@

$(builddir)/src/ns-textlayoutfragment.lo: $(srcdir)/src/ns-textlayoutfragment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlayoutfragment.m -o $@

$(builddir)/src/ns-textlinefragment.lo: $(srcdir)/src/ns-textlinefragment.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textlinefragment.m -o $@

$(builddir)/src/ns-textelement.lo: $(srcdir)/src/ns-textelement.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textelement.m -o $@

$(builddir)/src/ns-textparagraph.lo: $(srcdir)/src/ns-textparagraph.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textparagraph.m -o $@

$(builddir)/src/ns-textselection.lo: $(srcdir)/src/ns-textselection.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textselection.m -o $@

$(builddir)/src/ns-textviewportlayoutcontroller.lo: $(srcdir)/src/ns-textviewportlayoutcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textviewportlayoutcontroller.m -o $@

$(builddir)/src/ns-adaptiveimageglyph.lo: $(srcdir)/src/ns-adaptiveimageglyph.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-adaptiveimageglyph.m -o $@

$(builddir)/src/ns-textinsertionindicator.lo: $(srcdir)/src/ns-textinsertionindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textinsertionindicator.m -o $@

$(builddir)/src/ns-textcheckingcontroller.lo: $(srcdir)/src/ns-textcheckingcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-textcheckingcontroller.m -o $@

$(builddir)/src/ns-buttoncell.lo: $(srcdir)/src/ns-buttoncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-buttoncell.m -o $@

$(builddir)/src/ns-popupbuttoncell.lo: $(srcdir)/src/ns-popupbuttoncell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-popupbuttoncell.m -o $@

$(builddir)/src/ns-slidercell.lo: $(srcdir)/src/ns-slidercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-slidercell.m -o $@

$(builddir)/src/ns-steppercell.lo: $(srcdir)/src/ns-steppercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-steppercell.m -o $@

$(builddir)/src/ns-segmentedcell.lo: $(srcdir)/src/ns-segmentedcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-segmentedcell.m -o $@

$(builddir)/src/ns-pathcontrol.lo: $(srcdir)/src/ns-pathcontrol.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcontrol.m -o $@

$(builddir)/src/ns-pathcell.lo: $(srcdir)/src/ns-pathcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcell.m -o $@

$(builddir)/src/ns-pathcomponentcell.lo: $(srcdir)/src/ns-pathcomponentcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pathcomponentcell.m -o $@

$(builddir)/src/ns-dictionary.lo: $(srcdir)/src/ns-dictionary.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-dictionary.m -o $@

$(builddir)/src/ns-levelindicator.lo: $(srcdir)/src/ns-levelindicator.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-levelindicator.m -o $@

$(builddir)/src/ns-levelindicatorcell.lo: $(srcdir)/src/ns-levelindicatorcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-levelindicatorcell.m -o $@

$(builddir)/src/ns-form.lo: $(srcdir)/src/ns-form.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-form.m -o $@

$(builddir)/src/ns-formcell.lo: $(srcdir)/src/ns-formcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-formcell.m -o $@

$(builddir)/src/ns-matrix.lo: $(srcdir)/src/ns-matrix.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-matrix.m -o $@

$(builddir)/src/ns-browser.lo: $(srcdir)/src/ns-browser.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-browser.m -o $@

$(builddir)/src/ns-browsercell.lo: $(srcdir)/src/ns-browsercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-browsercell.m -o $@

$(builddir)/src/ns-predicateeditor.lo: $(srcdir)/src/ns-predicateeditor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-predicateeditor.m -o $@

$(builddir)/src/ns-ruleeditor.lo: $(srcdir)/src/ns-ruleeditor.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-ruleeditor.m -o $@

$(builddir)/src/ns-statusbarbutton.lo: $(srcdir)/src/ns-statusbarbutton.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusbarbutton.m -o $@

$(builddir)/src/ns-tablecolumn.lo: $(srcdir)/src/ns-tablecolumn.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablecolumn.m -o $@

$(builddir)/src/ns-tableheaderview.lo: $(srcdir)/src/ns-tableheaderview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableheaderview.m -o $@

$(builddir)/src/ns-tableheadercell.lo: $(srcdir)/src/ns-tableheadercell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableheadercell.m -o $@

$(builddir)/src/ns-tablerowview.lo: $(srcdir)/src/ns-tablerowview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablerowview.m -o $@

$(builddir)/src/ns-tablecellview.lo: $(srcdir)/src/ns-tablecellview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tablecellview.m -o $@

$(builddir)/src/ns-tableviewdiffable.lo: $(srcdir)/src/ns-tableviewdiffable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tableviewdiffable.m -o $@

$(builddir)/src/ns-collectionviewitem.lo: $(srcdir)/src/ns-collectionviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewitem.m -o $@

$(builddir)/src/ns-collectionviewlayout.lo: $(srcdir)/src/ns-collectionviewlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewlayout.m -o $@

$(builddir)/src/ns-collectionviewflowlayout.lo: $(srcdir)/src/ns-collectionviewflowlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewflowlayout.m -o $@

$(builddir)/src/ns-collectionviewgridlayout.lo: $(srcdir)/src/ns-collectionviewgridlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewgridlayout.m -o $@

$(builddir)/src/ns-collectionviewcompositionallayout.lo: $(srcdir)/src/ns-collectionviewcompositionallayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewcompositionallayout.m -o $@

$(builddir)/src/ns-collectionviewtransitionlayout.lo: $(srcdir)/src/ns-collectionviewtransitionlayout.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewtransitionlayout.m -o $@

$(builddir)/src/ns-collectionviewdiffable.lo: $(srcdir)/src/ns-collectionviewdiffable.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-collectionviewdiffable.m -o $@

$(builddir)/src/ns-gridrow.lo: $(srcdir)/src/ns-gridrow.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridrow.m -o $@

$(builddir)/src/ns-gridcolumn.lo: $(srcdir)/src/ns-gridcolumn.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridcolumn.m -o $@

$(builddir)/src/ns-gridcell.lo: $(srcdir)/src/ns-gridcell.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-gridcell.m -o $@

$(builddir)/src/ns-statusbar.lo: $(srcdir)/src/ns-statusbar.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-statusbar.m -o $@

$(builddir)/src/ns-workspace.lo: $(srcdir)/src/ns-workspace.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-workspace.m -o $@

$(builddir)/src/ns-controller.lo: $(srcdir)/src/ns-controller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-controller.m -o $@

$(builddir)/src/ns-clipview.lo: $(srcdir)/src/ns-clipview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-clipview.m -o $@

$(builddir)/src/ns-scroller.lo: $(srcdir)/src/ns-scroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scroller.m -o $@

$(builddir)/src/ns-rulerview.lo: $(srcdir)/src/ns-rulerview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rulerview.m -o $@

$(builddir)/src/ns-rulermarker.lo: $(srcdir)/src/ns-rulermarker.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-rulermarker.m -o $@

$(builddir)/src/ns-splitviewitem.lo: $(srcdir)/src/ns-splitviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitviewitem.m -o $@

$(builddir)/src/ns-splitviewcontroller.lo: $(srcdir)/src/ns-splitviewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-splitviewcontroller.m -o $@

$(builddir)/src/ns-tabviewitem.lo: $(srcdir)/src/ns-tabviewitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabviewitem.m -o $@

$(builddir)/src/ns-tabviewcontroller.lo: $(srcdir)/src/ns-tabviewcontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-tabviewcontroller.m -o $@

$(builddir)/src/ns-pagecontroller.lo: $(srcdir)/src/ns-pagecontroller.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-pagecontroller.m -o $@

$(builddir)/src/ns-visualeffectview.lo: $(srcdir)/src/ns-visualeffectview.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-visualeffectview.m -o $@

$(builddir)/src/ns-menuitem.lo: $(srcdir)/src/ns-menuitem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menuitem.m -o $@

$(builddir)/src/ns-menutoolbaritem.lo: $(srcdir)/src/ns-menutoolbaritem.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-menutoolbaritem.m -o $@

$(builddir)/src/ns-scrubber.lo: $(srcdir)/src/ns-scrubber.m
	$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/ns-scrubber.m -o $@

shared_objects_appkit += src/ns-app.lo src/ns-window.lo src/ns-view.lo src/ns-menu.lo src/ns-button.lo src/ns-switch.lo src/ns-slider.lo src/ns-stepper.lo src/ns-progressindicator.lo src/ns-popupbutton.lo src/ns-combobox.lo src/ns-segmentedcontrol.lo src/ns-textfield.lo src/ns-securetextfield.lo src/ns-textview.lo src/ns-colorwell.lo src/ns-datepicker.lo src/ns-imageview.lo src/ns-box.lo src/ns-stackview.lo src/ns-scrollview.lo src/ns-splitview.lo src/ns-tabview.lo src/ns-gridview.lo src/ns-tableview.lo src/ns-outlineview.lo src/ns-collectionview.lo src/ns-toolbar.lo src/ns-popover.lo src/ns-statusitem.lo src/ns-alert.lo src/ns-openpanel.lo src/ns-savepanel.lo src/ns-event.lo src/ns-responder.lo src/ns-control.lo src/ns-cell.lo src/ns-actioncell.lo src/ns-viewcontroller.lo src/ns-windowcontroller.lo src/ns-panel.lo src/ns-screen.lo src/ns-cursor.lo src/ns-trackingarea.lo src/ns-touch.lo src/ns-gesturerecognizer.lo src/ns-clickgesturerecognizer.lo src/ns-pangesturerecognizer.lo src/ns-pressgesturerecognizer.lo src/ns-rotationgesturerecognizer.lo src/ns-magnificationgesturerecognizer.lo src/ns-appearance.lo src/ns-color.lo src/ns-colorspace.lo src/ns-colorlist.lo src/ns-colorsampler.lo src/ns-colorpanel.lo src/ns-colorpicker.lo src/ns-imagerep.lo src/ns-image.lo src/ns-bitmapimagerep.lo src/ns-cachedimagerep.lo src/ns-ciimagerep.lo src/ns-epsimagerep.lo src/ns-pdfimagerep.lo src/ns-customimagerep.lo src/ns-font.lo src/ns-fontdescriptor.lo src/ns-fontmanager.lo src/ns-fontpanel.lo src/ns-fontcollection.lo src/ns-bezierpath.lo src/ns-gradient.lo src/ns-shadow.lo src/ns-graphicscontext.lo src/ns-animationcontext.lo src/ns-animation.lo src/ns-viewanimation.lo src/ns-text.lo src/ns-textfieldcell.lo src/ns-securetextfieldcell.lo src/ns-textcontainer.lo src/ns-layoutmanager.lo src/ns-textstorage.lo src/ns-textinputcontext.lo src/ns-searchfield.lo src/ns-searchfieldcell.lo src/ns-tokenfield.lo src/ns-tokenfieldcell.lo src/ns-combobutton.lo src/ns-textfinder.lo src/ns-spellchecker.lo src/ns-textattachment.lo src/ns-textattachmentcell.lo src/ns-textlist.lo src/ns-texttable.lo src/ns-textblock.lo src/ns-paragraphstyle.lo src/ns-typesetter.lo src/ns-atstypesetter.lo src/ns-glyphgenerator.lo src/ns-textlayoutmanager.lo src/ns-textcontentmanager.lo src/ns-textcontentstorage.lo src/ns-textlayoutfragment.lo src/ns-textlinefragment.lo src/ns-textelement.lo src/ns-textparagraph.lo src/ns-textselection.lo src/ns-textviewportlayoutcontroller.lo src/ns-adaptiveimageglyph.lo src/ns-textinsertionindicator.lo src/ns-textcheckingcontroller.lo src/ns-buttoncell.lo src/ns-popupbuttoncell.lo src/ns-slidercell.lo src/ns-steppercell.lo src/ns-segmentedcell.lo src/ns-pathcontrol.lo src/ns-pathcell.lo src/ns-pathcomponentcell.lo src/ns-dictionary.lo src/ns-levelindicator.lo src/ns-levelindicatorcell.lo src/ns-form.lo src/ns-formcell.lo src/ns-matrix.lo src/ns-browser.lo src/ns-browsercell.lo src/ns-predicateeditor.lo src/ns-ruleeditor.lo src/ns-statusbarbutton.lo src/ns-tablecolumn.lo src/ns-tableheaderview.lo src/ns-tableheadercell.lo src/ns-tablerowview.lo src/ns-tablecellview.lo src/ns-tableviewdiffable.lo src/ns-collectionviewitem.lo src/ns-collectionviewlayout.lo src/ns-collectionviewflowlayout.lo src/ns-collectionviewgridlayout.lo src/ns-collectionviewcompositionallayout.lo src/ns-collectionviewtransitionlayout.lo src/ns-collectionviewdiffable.lo src/ns-gridrow.lo src/ns-gridcolumn.lo src/ns-gridcell.lo src/ns-statusbar.lo src/ns-workspace.lo src/ns-controller.lo src/ns-clipview.lo src/ns-scroller.lo src/ns-rulerview.lo src/ns-rulermarker.lo src/ns-splitviewitem.lo src/ns-splitviewcontroller.lo src/ns-tabviewitem.lo src/ns-tabviewcontroller.lo src/ns-pagecontroller.lo src/ns-visualeffectview.lo src/ns-menuitem.lo src/ns-menutoolbaritem.lo src/ns-scrubber.lo
