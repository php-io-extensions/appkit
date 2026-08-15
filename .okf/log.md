# Directory Update Log

## 2026-08-15 (scroll/ruler/split/tab/page/menu/scrubber wave)

* **New binds**: `NSClipView`, `NSScroller`, `NSRulerView`, `NSRulerMarker`, `NSSplitViewItem`, `NSSplitViewController`, `NSTabViewItem`, `NSTabViewController`, `NSPageController`, `NSVisualEffectView`, `NSMenuItem` (full bind), `NSMenuToolbarItem`, `NSScrubber`.
* **NSMenuItem**: expanded from alias-only stub to full `ns-menuitem` C ABI; `add()` kept as convenience for `NSMenu::addItem`.
* **NSScrubber**: PHP-driven item list with `NSScrubberDataSource` delegate in `ns-scrubber.m`.
* **API pages**: `nsclipview.md` through `nsscrubber.md`.
* **Packaging**: thirteen new `.m` sources in `config.json` / `Makefile.frag`.

## 2026-08-15 (bind collection layouts, grid chrome, status bar, workspace, controller)

* **New binds**: `NSCollectionViewLayout`, `NSCollectionViewFlowLayout`, `NSCollectionViewGridLayout`, `NSCollectionViewCompositionalLayout`, `NSCollectionViewTransitionLayout`, `NSCollectionViewDiffableDataSource`, `NSGridRow`, `NSGridColumn`, `NSGridCell`, `NSStatusBar`, `NSWorkspace`, `NSController`.
* **Collection view**: `setLayout` / `getLayout` attach an `NSCollectionViewLayout` handle.
* **Grid view**: `rowAt` / `columnAt` / `cellAt` / `numberOfRows` / `numberOfColumns` / `sizeForContent`.
* **Status item**: `wrap` / `nsStatusItem` for items created via `NSStatusBar`.
* **API pages**: `nscollectionviewlayout.md` through `nscontroller.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with twelve `.m` sources and twelve `.zep.c` entries.

## 2026-08-15 (bind level indicator, form/matrix, browser, editors, table chrome)

* **New binds**: `NSLevelIndicator` (zep+okf; C ABI already present), `NSLevelIndicatorCell`, `NSForm` (deprecated), `NSFormCell`, `NSMatrix` (deprecated), `NSBrowser`, `NSBrowserCell`, `NSPredicateEditor`, `NSRuleEditor`, `NSStatusBarButton`, `NSTableColumn`, `NSTableHeaderView`, `NSTableHeaderCell`, `NSTableRowView`, `NSTableCellView`, `NSTableViewDiffableDataSource`, `NSCollectionViewItem`.
* **Status item**: `ns_statusitem_button()` helper + `NSStatusItem::button`.
* **API pages**: `nslevelindicator.md` through `nscollectionviewitem.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with seventeen `.m` sources (including `ns-levelindicator.m`) and seventeen `.zep.c` entries.

## 2026-08-15 (bind NSDictionary + wire text checking options)

* **New bind**: `NSDictionary` — Foundation dictionary bridge (`createMutable`, typed setters, `fromArray` / `toArray`, `copyImmutable`).
* **Wired**: `NSTextCheckingController::checkTextInRange` accepts optional `options` dictionary handle.
* **API page**: `nsdictionary.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with `ns-dictionary.m` and `nsdictionary.zep.c`.

## 2026-08-15 (bind text insertion, checking controller, cells, path controls)

* **New binds**: `NSTextInsertionIndicator`, `NSTextCheckingController`, `NSButtonCell`, `NSPopUpButtonCell`, `NSSliderCell`, `NSStepperCell`, `NSSegmentedCell`, `NSPathControl`, `NSPathCell`, `NSPathComponentCell` — ten ObjC modules + ten Zephir classes.
* **API pages**: `nstextinsertionindicator.md`, `nstextcheckingcontroller.md`, `nsbuttoncell.md`, `nspopupbuttoncell.md`, `nsslidercell.md`, `nssteppercell.md`, `nssegmentedcell.md`, `nspathcontrol.md`, `nspathcell.md`, `nspathcomponentcell.md`.
* **Note**: `NSPathStyleNavigationBar` is deprecated (macOS 10.5–10.7). `effectsViewInserter` bound via parent-view subview installer; `menuAtIndex` bound with effective range out-params. `NSPathControl` is view create/destroy (no wrap). Cells follow `createText` / `wrap` / `destroy` / `ns*` ownership.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with ten `.m` sources and ten `.zep.c` entries.

## 2026-08-15 (bind text system remainder)

* **New binds**: `NSSearchField`, `NSSearchFieldCell`, `NSTokenField`, `NSTokenFieldCell`, `NSComboButton`, `NSTextFinder`, `NSSpellChecker`, `NSTextAttachment`, `NSTextAttachmentCell`, `NSTextList`, `NSTextTable` — plus Zephir for already-landed `NSTextContainer`, `NSLayoutManager`, `NSTextStorage`, `NSTextInputContext`.
* **API pages**: `nssearchfield.md`, `nssearchfieldcell.md`, `nstokenfield.md`, `nstokenfieldcell.md`, `nscombobutton.md`, `nstextfinder.md`, `nsspellchecker.md`, `nstextattachment.md`, `nstextattachmentcell.md`, `nstextlist.md`, `nstexttable.md`, `nstextcontainer.md`, `nslayoutmanager.md`, `nstextstorage.md`, `nstextinputcontext.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with fifteen `.m` sources and fifteen `.zep.c` entries.

## 2026-08-15 (bind drawing / animation / text cell family)

* **New binds**: `NSBezierPath`, `NSGradient`, `NSShadow`, `NSGraphicsContext`, `NSAnimationContext`, `NSAnimation`, `NSViewAnimation`, `NSText`, `NSTextFieldCell`, `NSSecureTextFieldCell` — ten ObjC modules + ten Zephir classes.
* **API pages**: `nsbezierpath.md`, `nsgradient.md`, `nsshadow.md`, `nsgraphicscontext.md`, `nsanimationcontext.md`, `nsanimation.md`, `nsviewanimation.md`, `nstext.md`, `nstextfieldcell.md`, `nssecuretextfieldcell.md`.
* **Note**: `NSViewAnimation` start/stop/isAnimating delegate to `NSAnimation` C ABI on the same handle. `NSAnimationContext.runAnimationGroup` block API is not bound — use `beginGrouping`/`endGrouping`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with ten `.m` sources and ten `.zep.c` entries.

## 2026-08-15 (bind NSFont family)

* **New binds**: `NSFont`, `NSFontDescriptor`, `NSFontManager`, `NSFontPanel`, `NSFontCollection` — five ObjC modules + five Zephir classes.
* **API pages**: `nsfont.md`, `nsfontdescriptor.md`, `nsfontmanager.md`, `nsfontpanel.md`, `nsfontcollection.md`.
* **Note**: `NSMutableFontCollection` mutation APIs bound as part of `NSFontCollection`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with five `.m` sources and five `.zep.c` entries.

## 2026-08-15 (bind NSImage / NSImageRep family)

* **New binds**: `NSImageRep`, `NSImage`, `NSBitmapImageRep`, `NSCachedImageRep`, `NSCIImageRep`, `NSEPSImageRep`, `NSPDFImageRep`, `NSCustomImageRep` — eight ObjC modules + eight Zephir classes.
* **API pages**: `nsimagerep.md`, `nsimage.md`, `nsbitmapimagerep.md`, `nscachedimagerep.md`, `nsciimagerep.md`, `nsepsimagerep.md`, `nspdfimagerep.md`, `nscustomimagerep.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with eight `.m` sources, eight `.zep.c` entries, and `-framework CoreImage` for `NSCIImageRep`.

## 2026-08-15 (bind NSMagnificationGestureRecognizer / NSAppearance / NSColor*)

* **New binds**: `NSMagnificationGestureRecognizer`, `NSAppearance`, `NSColor`, `NSColorSpace`, `NSColorList`, `NSColorSampler`, `NSColorPanel`, `NSColorPicker` — eight ObjC modules + eight Zephir classes.
* **API pages**: `nsmagnificationgesturerecognizer.md`, `nsappearance.md`, `nscolor.md`, `nscolorspace.md`, `nscolorlist.md`, `nscolorsampler.md`, `nscolorpanel.md`, `nscolorpicker.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with eight `.m` sources and eight `.zep.c` entries.

## 2026-08-15 (bind NSPanel / NSScreen / NSCursor / NSTrackingArea / NSTouch / gesture recognizers)

* **New binds**: `NSPanel`, `NSScreen`, `NSCursor`, `NSTrackingArea`, `NSTouch`, `NSGestureRecognizer`, `NSClickGestureRecognizer`, `NSPanGestureRecognizer`, `NSPressGestureRecognizer`, `NSRotationGestureRecognizer` — ten ObjC modules + ten Zephir classes.
* **API pages**: `nspanel.md`, `nsscreen.md`, `nscursor.md`, `nstrackingarea.md`, `nstouch.md`, `nsgesturerecognizer.md`, `nsclickgesturerecognizer.md`, `nspangesturerecognizer.md`, `nspressgesturerecognizer.md`, `nsrotationgesturerecognizer.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with ten `.m` sources and ten `.zep.c` entries.
* **Verified**: `zephir generate` + local `make -j1` in `ext/` succeeds.

## 2026-08-15 (bind NSResponder / NSControl / NSCell / NSActionCell / NSViewController / NSWindowController)

* **New binds**: `NSResponder`, `NSControl`, `NSCell`, `NSActionCell`, `NSViewController`, `NSWindowController` — six ObjC modules + six Zephir classes.
* **API pages**: `nsresponder.md`, `nscontrol.md`, `nscell.md`, `nsactioncell.md`, `nsviewcontroller.md`, `nswindowcontroller.md`.
* **Packaging**: `config.json`, `Makefile.frag`, `patch-config-m4.py` extended with six `.m` sources and six `.zep.c` entries.

## 2026-08-15 (move lists / chrome / dialogs / NSEvent)

* **Moved from metal**: `NSOutlineView`, `NSCollectionView`, `NSToolbar`, `NSPopover`, `NSStatusItem`, `NSAlert`, `NSOpenPanel`, `NSSavePanel`, `NSEvent` (keyboard + mouse only — no GameController).
* **API pages**: added `nsoutlineview.md`, `nscollectionview.md`, `nstoolbar.md`, `nspopover.md`, `nsstatusitem.md`, `nsalert.md`, `nsopenpanel.md`, `nssavepanel.md`, `nsevent.md`.
* **Poll hooks**: `ns_app_poll` now calls `ns_event_begin_frame` / `ns_event_handle_event` before `sendEvent`.
* **Packaging**: nine new ObjC modules + nine Zephir classes; `metal-lists`, `metal-chrome`, `metal-dialogs`, and keyboard/mouse half of `metal-input` split into dedicated `ns-*` files.

## 2026-08-15 (move layout / image / table / picks remainder)

* **Moved from metal**: `NSColorWell`, `NSDatePicker`, `NSImageView`, `NSBox`, `NSStackView`, `NSScrollView`, `NSSplitView`, `NSTabView`, `NSGridView`, `NSTableView`.
* **API pages**: added `nscolorwell.md`, `nsdatepicker.md`, `nsimageview.md`, `nsbox.md`, `nsstackview.md`, `nsscrollview.md`, `nssplitview.md`, `nstabview.md`, `nsgridview.md`, `nstableview.md`.
* **Packaging**: ten new ObjC modules + ten Zephir classes; `metal-picks` colorwell/datepicker, `metal-image`, `metal-layout`, and `metal-table` C ABI split into dedicated `ns-*` files.

## 2026-08-15 (move toggles / values / picks)

* **Moved from metal**: checkbox + radio folded into `NSButton` (`createCheckbox` / `createRadio` — no separate Checkbox/Radio classes); `NSSwitch`, `NSSlider`, `NSStepper`, `NSProgressIndicator`, `NSPopUpButton`, `NSComboBox`, `NSSegmentedControl`.
* **API pages**: updated `nsbutton.md`; added `nsswitch.md`, `nsslider.md`, `nsstepper.md`, `nsprogressindicator.md`, `nspopupbutton.md`, `nscombobox.md`, `nssegmentedcontrol.md`.
* **Packaging**: seven new ObjC modules + seven Zephir classes; `NSButton` C ABI extended for checkbox/radio.

## 2026-08-15 (move NSButton / NSTextField / NSSecureTextField / NSTextView)

* **Moved from metal**: `NSButton` (`ns-button`), `NSTextField` + static label (`ns-textfield`), `NSSecureTextField` (`ns-securetextfield`), `NSTextView` (`ns-textview`).
* **API pages**: `api/nsbutton.md`, `nstextfield.md`, `nssecuretextfield.md`, `nstextview.md`.
* **Packaging**: `config.json` / `Makefile.frag` / `patch-config-m4.py` extended with four ObjC modules + four Zephir classes.

## 2026-08-15 (build fix — ZEPHIR_REGISTER_CLASS)

* **Trap**: gtk-style `appkit_` prefix on register shortname → `appkit_appkit_ns_*_ce` undeclared. Fixup now strips that prefix (metal pattern). See `traps/zephir-register-double-prefix.md`.

## 2026-08-15 (move NSApplication / NSWindow / NSView / NSMenu)

* **Moved from metal**: `NSApplication` (`ns-app`), `NSWindow` (`ns-window`), plain `NSView` (`ns-view`: create/wrap/addSubview/setFrame/size/nsView — no Metal present), `NSMenu` + `NSMenuItem` (`ns-menu`: installDefault/addItem/pollAction).
* **API pages**: `api/nsapplication.md`, `nswindow.md`, `nsview.md`, `nsmenu.md`. Example: `examples/proof_appkit.php`.
* **Packaging**: `config.json` / `Makefile.frag` / `patch-config-m4.py` limited to the four landed ObjC modules + five Zephir classes.

## 2026-08-14 (scaffold)

* **Initialization**: Created OKF v0.2 knowledge bundle for `php-io-extensions/appkit` grounded in scaffold packaging (`composer.json` 0.1.0, `config.json` AppKit-only frameworks, Darwin `prepare-ext` / `patch-config-m4` / `Makefile.frag` / installers).
* **Creation**: Orientation (overview + standalone Darwin split from metal), architecture (stack + `ns_*` C ABI), conventions (handle ownership + sibling patterns), Darwin traps (Makefile.frag, `APPKIT_SHARED_LIBADD`, whitespace phpize, codesign, not-metal), regenerate playbook, build notes.
* **Note**: Bundle marked `draft`. Zephir classes / `src/ns-*.{h,m}` land in follow-on move/bind work; API index is a target map until pages exist per type.
