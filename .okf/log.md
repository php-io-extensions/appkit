# Change log

## 2026-08-31 (AV wave)
* **Binding**: the AVKit/AVFoundation sister seam opens, shaped exactly like QuartzCore:
  `av-` file prefix, `AV\` namespace segment, `-framework AVFoundation -framework AVKit`
  in extra-libs, liftable later if a need appears. Curated minimums (documented like
  NSAttributedString): `NS\NSURL` (two factories + three reads), `AV\AVPlayer` (URL
  factory, play/pause/rate/volume/mute, two status reads; CMTime seeking and item
  plumbing reserved), `AV\AVPlayerView` (initWithFrame, player, controlsStyle,
  videoGravity, fullscreen toggle). GEN_OK, PARITY_OK, built into Herd; playback proven
  against a real mp4 (rate 1, timeControlStatus PLAYING).

## 2026-08-31
* **Packaging**: in-place `phpize`/`make` leftovers stripped from `ext/`
  using the official `scripts/prepare-ext.sh` leftover list (496 object
  files + 97 leftover directories: `Makefile`, `configure`, `modules/`,
  `.libs/`, `*.lo`/`*.dep`/`*.la`/`*.so`/`*.dSYM`, `autom4te.cache/`,
  `build/`, `libtool`, `run-tests.php`, `config.h*`). Ship-ready C left
  intact: 90 `.zep.c` / 90 `.zep.h`, 161 `src/*.{c,h,m}`, 40 kernel
  files, portable `config.m4`, `Makefile.frag`, `php_appkit.h` at 0.8.0.
  Zephir `ext/install` + `ext/clean` wrappers kept — this package's
  prepare-ext does not strip them (gtk does). Did not regenerate.

## 2026-08-30 (style)
* **Binding**: `NS\NSAttributedString` (curated: initWithString, initWithStringAttributes
  via the array-to-NSDictionary marshalling, string, length), `NSButton`
  attributedTitle/setAttributedTitle, and the `NSColor::CGColor` getter — unreserved,
  answering raw pointer bits per the CF convention (valid while the NSColor lives).

## 2026-08-30
* **Marshalling**: inbound collections. `ns_arg_value` / `ns_arg_value_array` /
  `ns_arg_dictionary` / `ns_arg_set` in `src/ns-value.h` convert a PHP array
  recursively — string→NSString, bool/float→NSNumber, int→the live object when the int
  is a registered handle else NSNumber, list→NSArray, assoc→NSDictionary<NSString,id>.
  All 24 `NS_ARG_AS(NSDictionary|NSSet, …)` parameter sites switched to it and their
  `@zep` params flipped `int`→`var` (About panel options, font/descriptor attributes,
  text-view attribute dicts, layout-manager temporary attributes, image/imagerep hints,
  notification userInfo, view fullscreen options, text-checking options). Before this
  none of those methods was callable from PHP: they wanted a dictionary handle nothing
  could mint. Gates green (GEN/PARITY/prepare/install/REFLECTION/guards/surfaces);
  proven headless via NSFontDescriptor attributes + mandatory-keys set on the Mac.

## 2026-08-27

- `scripts/tests/structure-check.php` was silently unusable and had to be
  killed rather than run: it forked one `php -l` per optimizer (3614 spawns,
  minutes on a network volume). Now lints in one `xargs -0 -P 8 -n 32` pass —
  7.4s — and reports failures by mapping the file named in the lint output
  back to its symbol. Once it could actually run it failed 45 classes: the
  script predated `@zep-construct` and counted those methods as unexplained
  extras. Its parser now matches `@zep(?:-construct)?`. Green at
  `STRUCTURE_OK classes=89 symbols=3614` (symbol count agrees with parity).
  Lesson: a guard slow enough that nobody waits for it is a guard nobody runs.
- Version pinned at 0.8.0. The source edits alone left a **stale 0.9.0 `.so`
  installed** — the install gate hardcoded the expected string, so it could
  only ever confirm whatever literal was typed into it. `install-macos.sh` now
  reads `EXPECTED_VERSION` from `config.json` (the file zephir generates
  `ext/php_appkit.h` from), asserts `composer.json` agrees before building,
  and matches the full `Version => X` line from `php --ri`.
  `scripts/tests/install-script-check.php` enforces that the script derives
  the version instead of hardcoding it, and cross-checks
  config.json/composer.json/php_appkit.h. Rebuilt: reports 0.8.0.
  Unlazy ledgers (`GATES.md`, `GATES-slice-zero.md`, `.unlazy/`)
  and the tests that only existed to compare against those inventories
  (`*-header-check.php`, `*-inventory-check.php`) are gone. phpize leftovers
  under `ext/` (Makefile, configure, modules/, `*.lo`, `*.dSYM`, …) are
  stripped; `.gitignore` now matches the sibling gtk/dep-appkit pattern so
  they cannot sneak into a commit. Documented on
  [toolchain.md](/toolchain.md).
- Data-source round-trip verified live (the last unproven Wave B assumption).
  `smoke.php` gained `DATASOURCE_OK` (view-based `NSTableView`:
  `numberOfRowsInTableView:` answered from PHP as `NSInteger`,
  `tableView:viewForTableColumn:row:` answered with a view handle,
  materialized via `viewAtColumnRowMakeIfNecessary`) and `VALUE_RETURN_OK`
  (`NSComboBox` in `usesDataSource` mode: a PHP string returned from
  `comboBox:objectValueForItemAtIndex:` crosses as `NSString` and reads back
  through `stringValue`). Two Bridge gaps surfaced and were fixed:
  1. `id` returns from delegate callables only accepted registry handles —
     now `string`/`float`/`bool` marshal to `NSString`/`NSNumber`
     (documented on [bridge.md](/bridge.md)).
  2. `NSProtocolFromString` cannot resolve protocols nothing links —
     `NSComboBoxDataSource` returned nil, so `delegateNew` returned 0.
     `ns_bridge_register_protocols()` now references every delegate/
     data-source protocol of a bound class ([bridge.md](/bridge.md)).
  Gotcha recorded: `itemObjectValueAtIndex` in data-source mode throws
  `NSRangeException` and kills the process. All gates re-green after rebuild
  (`PARITY_OK` 3614, `AUDIT_OK` 88, `REFLECTION_OK` 89, `SMOKE_OK`).
- Wave B review closed. Three spot-check reviews against the SDK headers
  (tables/outline, collection/grid/stack, chrome/controls) returned one
  finding: `NSTableColumn` `dataCell` / `setDataCell:` / `dataCellForRow:`
  were bound despite living in the SDK `NSDeprecated` category (cell-based
  tables deprecated in 10.10). Demoted to `@reserved`, so the class is now
  `bound=26 reserved=6` of 32. Counts updated on
  [binding-rules.md](/binding-rules.md).
- Wave B never built before this review: `zephir generate` was failing on
  `function URL(...)` in the five path/panel classes. Zephir lexes an all-caps
  identifier as a constant token, so it cannot be a method or parameter name,
  and a trailing underscore does not help (`URL_` is still all-caps). Verified
  empirically that a method named `ABCD` fails identically and mixed-case
  parses, so the rule is all-caps and not `URL`-specific. `gen-zep.php`
  `escapeReserved()` now emits `ucfirst(strtolower())` for all-caps names
  (`URL` → `Url`; single letters lowercase) — safe because PHP resolves method
  names case-insensitively, confirmed by reflection on the installed binary
  (`URL` and `Url` both resolve on `NSPathCell`). Rule on
  [binding-rules.md](/binding-rules.md), diagnosis notes on
  [toolchain.md](/toolchain.md).
- Added [`scripts/verify-reflection.php`](/toolchain.md): asserts the loaded
  extension exposes exactly `@zep` + `@zep-construct` methods per class
  (89 classes, 0 failures). This is the first guard that inspects the built
  `.so`; parity and the header audit both passed throughout the period when
  the extension could not compile, which is how the broken build went
  unnoticed.
- Verification gates met: `PARITY_OK` (3614 calls / 79 sources), `AUDIT_OK`
  (88 classes, 0 failures), `REFLECTION_OK`, clean-tree `install-macos.sh`
  green, and `examples/smoke.php` green on 20 markers — Wave B added
  `TABLE_OK` / `ALERT_OK` / `TOOLBAR_OK` / `STATUS_ITEM_OK` and the five
  setter/getter round-trips as `ROUNDTRIP_OK`. No `NSPhp*` symbol outside
  `ns-bridge.m`.

- Wave B NSSearchField + NSSearchFieldCell landed
  (`src/ns-searchfield.{h,m}`,
  `src/ns-searchfieldcell.{h,m}`):
  SDK `NSSearchField.h` 22 members,
  bound=17 reserved=5 construct=1.
  SDK `NSSearchFieldCell.h` 24 members,
  bound=22 reserved=2.
  Construction is synthesized
  `initWithFrame` (allocs `NSSearchField`)
  and declared `initTextCell` (allocs
  `NSSearchFieldCell`). Reserved on
  NSSearchField: same-file
  `NSSearchField_Deprecated`
  (`rectForSearchTextWhenCentered:` /
  `rectForSearchButtonWhenCentered:` /
  `rectForCancelButtonWhenCentered:`
  and `centersPlaceholder` getter+setter).
  Reserved on NSSearchFieldCell:
  `initWithCoder:` (`NSCoder`) and
  `initImageCell:` (`NS_UNAVAILABLE`).
  Protocol `NSSearchFieldDelegate` is
  Bridge. File-level menu-template tag
  static consts and the
  `NSSearchFieldRecentsAutosaveName`
  typedef are not class members.
  `recentSearches` on the field is an
  array of strings; on the cell it is
  null_resettable (setter `var`).
  `recentsAutosaveName` crosses as `var`.
  The three bounds rects and
  `…RectForBounds:` methods follow the
  NSRect convention. BOOL
  `sendsWholeSearchString` /
  `sendsSearchStringImmediately` have
  no `getter=isX`. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSGridView + same-header NSGridRow,
  NSGridColumn, NSGridCell landed
  (`src/ns-gridview.{h,m}`):
  SDK `NSGridView` 31 members,
  bound=30 reserved=1.
  SDK `NSGridRow` 16 members,
  bound=16 reserved=0 construct=1.
  SDK `NSGridColumn` 14 members,
  bound=14 reserved=0 construct=1.
  SDK `NSGridCell` 13 members,
  bound=13 reserved=0 construct=1.
  Reserved on NSGridView: `initWithCoder:`
  (`NSCoder`). Construction is declared
  `initWithFrame` plus
  `gridViewWithNumberOfColumns:rows:` and
  `gridViewWithViews:`; the three companions
  synthesize `init`. `gridViewWithViews:`
  takes `NSArray<NSArray<NSView *> *>` and
  marshals via `ns_arg_object_array_array`.
  `emptyContentView` is a no-handle class
  property returning an `NSView` handle.
  The `NSGridCellPlacement` /
  `NSGridRowAlignment` typedefs and
  `NSGridViewSizeForContent` are not class
  members. No same-file categories.

- Wave B NSStatusBar + NSStatusItem +
  NSStatusBarButton landed
  (`src/ns-statusbar.{h,m}`,
  `src/ns-statusitem.{h,m}`,
  `src/ns-statusbarbutton.{h,m}`):
  SDK `NSStatusBar.h` 5 members,
  bound=5 reserved=0.
  SDK `NSStatusItem.h` 37 members,
  bound=12 reserved=25 construct=1.
  SDK `NSStatusBarButton.h` 2 members,
  bound=2 reserved=0 construct=1.
  Construction is the
  `systemStatusBar` class property
  (no-handle factory), synthesized
  `init` (allocs `NSStatusItem`),
  and synthesized `initWithFrame`
  (allocs `NSStatusBarButton`).
  Reserved on NSStatusItem: same-file
  `NSStatusItemDeprecated` (`action` /
  `doubleAction` / `target` / `title` /
  `attributedTitle` / `image` /
  `alternateImage` / `enabled` /
  `highlightMode` / `toolTip` / `view`
  each as getter+setter;
  `sendActionOn:`;
  `drawStatusBarBackgroundInRect:withHighlight:`;
  `popUpStatusItemMenu:`).
  File-level
  `NSVariableStatusItemLength` /
  `NSSquareStatusItemLength` and the
  `NSStatusItemBehavior` /
  `NSStatusItemAutosaveName` typedefs
  are not class members.
  `autosaveName` is null_resettable
  and crosses as `var`.
  `appearsDisabled` has no
  `getter=isX`. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSPathControl + NSPathControlItem +
  NSPathCell + NSPathComponentCell landed
  (`src/ns-pathcontrol.{h,m}`,
  `src/ns-pathcontrolitem.{h,m}`,
  `src/ns-pathcell.{h,m}`,
  `src/ns-pathcomponentcell.{h,m}`):
  SDK `NSPathControl.h` 27 members,
  bound=22 reserved=5 construct=1.
  SDK `NSPathControlItem.h` 7 members,
  bound=5 reserved=2 construct=1.
  SDK `NSPathCell.h` 25 members,
  bound=22 reserved=3 construct=2.
  SDK `NSPathComponentCell.h` 4 members,
  bound=4 reserved=0 construct=1.
  Reserved on NSPathControl:
  `placeholderAttributedString`
  getter+setter (`NSAttributedString`)
  and same-file `NSDeprecated`
  (`clickedPathComponentCell` /
  `pathComponentCells` /
  `setPathComponentCells:`).
  Reserved on NSPathControlItem:
  `attributedTitle` getter+setter
  (`NSAttributedString`).
  Reserved on NSPathCell:
  class `pathComponentCellClass`
  (`Class`) and
  `placeholderAttributedString`
  getter+setter. Protocols
  `NSPathControlDelegate` /
  `NSPathCellDelegate` /
  `NSMenuItemValidation` /
  `NSOpenSavePanelDelegate` are
  not class members (Bridge).
  Construction is synthesized
  `initWithFrame` (NSPathControl),
  `init` (NSPathControlItem),
  `initTextCell` / `initImageCell`
  (NSPathCell), and `initTextCell`
  (NSPathComponentCell). `NSURL`
  crosses as a handle (0 = nil).
  Nullable `allowedTypes`
  (`NSArray<NSString *>`) crosses
  as `var` so null means allow-all.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSCollectionViewLayout +
  FlowLayout + GridLayout landed
  (`src/ns-collectionviewlayout.{h,m}`,
  `src/ns-collectionviewflowlayout.{h,m}`,
  `src/ns-collectionviewgridlayout.{h,m}`):
  SDK `NSCollectionViewLayout.h` four
  classes — Layout header=38 bound=35
  reserved=3 construct=1; Attributes
  header=18 bound=18 reserved=0;
  UpdateItem header=3 bound=3
  reserved=0 construct=1;
  InvalidationContext header=12
  bound=12 reserved=0 construct=1.
  SDK `NSCollectionViewFlowLayout.h`
  two classes — FlowLayout header=23
  bound=23 reserved=0 construct=1;
  FlowLayoutInvalidationContext
  header=4 bound=4 reserved=0
  construct=1. SDK
  `NSCollectionViewGridLayout.h`
  header=16 bound=16 reserved=0
  construct=1. Reserved on Layout:
  `registerClass:forDecorationViewOfKind:`
  (`Class`) and class properties
  `layoutAttributesClass` /
  `invalidationContextClass` (`Class`).
  Same-file companions Attributes /
  UpdateItem / InvalidationContext
  bind with Layout; FlowLayout's
  same-file InvalidationContext binds
  with FlowLayout. Same-file
  `NSSubclassingHooks` /
  `NSUpdateSupportHooks` bind on
  Layout. Protocol
  `NSCollectionViewDelegateFlowLayout`
  is not a class member (Bridge).
  Attributes construction is the four
  class factories; every other class
  synthesizes `init`. NSDictionary of
  kind-to-index-path-set crosses as a
  handle. Grid `backgroundColors` is
  null_resettable (setter `var`).
  Compositional and transition
  layouts stay deferred
  (block-heavy). Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSToolbar + NSToolbarItem +
  NSToolbarItemGroup landed
  (`src/ns-toolbar.{h,m}`,
  `src/ns-toolbaritem.{h,m}`,
  `src/ns-toolbaritemgroup.{h,m}`):
  SDK `NSToolbar.h` 45 members,
  bound=31 reserved=14.
  SDK `NSToolbarItem.h` 46 members,
  bound=39 reserved=7.
  SDK `NSToolbarItemGroup.h` 13
  members, bound=12 reserved=1
  construct=1. Reserved on NSToolbar:
  same-file `NSDeprecated`
  (`sizeMode`,
  `centeredItemIdentifier`,
  `fullScreenAccessoryView` /
  min/max height,
  `showsBaselineSeparator` each as
  getter+setter; readonly
  `configurationDictionary`;
  `setConfigurationFromDictionary:`).
  Reserved on NSToolbarItem:
  iOS `UIImage` `image` pair
  (duplicate of the live `NSImage`
  pair); `minSize` / `maxSize`
  getter+setter and readonly
  `allowsDuplicatesInToolbar`
  (`API_DEPRECATED`). Reserved on
  NSToolbarItemGroup: iOS `UIImage`
  images factory (duplicate of the
  live `NSImage` form). Protocols
  `NSToolbarDelegate` /
  `NSToolbarItemValidation` /
  `NSCloudSharingValidation` are
  not class members (Bridge).
  Construction is
  `initWithIdentifier:` / `init`
  (NSToolbar),
  `initWithItemIdentifier:`
  (NSToolbarItem), and synthesized
  `initWithItemIdentifier` (allocs
  `NSToolbarItemGroup`).
  `NSSet<NSString *>` /
  `NSSet<NSToolbarItemIdentifier>`
  marshals as an array of strings
  (`ns_arg_string_set` /
  `ns_ret_string_set` in
  `ns-value.h`). Identifier
  typedefs cross as string;
  nullable `selectedItemIdentifier`
  / `toolTip` / `SEL action` /
  factory `labels` cross as `var`.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSStepper + NSStepperCell landed
  (`src/ns-stepper.{h,m}`,
  `src/ns-steppercell.{h,m}`):
  SDK `NSStepper.h` 10 members,
  bound=10 reserved=0 construct=1.
  SDK `NSStepperCell.h` 10 members,
  bound=10 reserved=0 construct=2.
  Five readwrite properties each
  (`minValue` / `maxValue` /
  `increment` / `valueWraps` /
  `autorepeat`); nothing reserved.
  No same-file categories.
  `NSAccessibilityStepper` is not
  a class member (Bridge).
  BOOL properties have no
  `getter=isX` and emit as
  `valueWraps` / `autorepeat`.
  Neither header declares an
  initializer — construction is
  synthesized `initWithFrame`
  (allocs `NSStepper`) and
  `initTextCell` / `initImageCell`
  (allocs `NSStepperCell`; nearest
  bound ancestor is `NSCell`).
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSCollectionView + NSCollectionViewItem
  landed (`src/ns-collectionview.{h,m}`):
  SDK `NSCollectionView.h` 78 members,
  bound=62 reserved=16 construct=1.
  Same-file companion
  `NSCollectionViewItem` header=10
  bound=10 reserved=0 construct=1.
  Reserved: `registerClass:` forms
  (`Class`);
  `performBatchUpdates:completionHandler:`
  (block); the two
  `draggingImageForItems…:offset:`
  methods (`NSPointPointer` inout);
  and the entire `NSDeprecated`
  category (`newItemForRepresentedObject:`,
  `itemPrototype` /
  `maxNumberOfRows` /
  `maxNumberOfColumns` /
  `minItemSize` / `maxItemSize`
  each as getter+setter). Soft-deprecated
  `selectionIndexes` / `itemAtIndex:` /
  `frameForItemAtIndex:` stay bound.
  Protocols
  `NSCollectionViewDataSource` /
  `NSCollectionViewDelegate` /
  `NSCollectionViewPrefetching` /
  `NSCollectionViewElement` /
  `NSCollectionViewSectionHeaderView`
  are not class members (Bridge).
  Same-file
  `NSIndexPath(NSCollectionViewAdditions)`
  and `NSSet(NSCollectionViewAdditions)`
  bind on those classes, not here.
  Layouts (`NSCollectionViewLayout` /
  `FlowLayout` / `GridLayout`) have
  their own headers and stay deferred.
  Neither class declares an initializer —
  construction is synthesized
  `initWithFrame` (allocs
  `NSCollectionView`) and
  `initWithNibNameBundle` (allocs
  `NSCollectionViewItem`).
  `NSSet` of `NSIndexPath` marshals
  as an array of handles
  (`ns_arg_object_set` /
  `ns_ret_object_set` in
  `ns-value.h`). `NSIndexSet`
  section edits cross as handles.
  `backgroundColors` is
  null_resettable (setter `var`,
  null resets). Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSSavePanel + NSOpenPanel landed
  (`src/ns-savepanel.{h,m}`,
  `src/ns-openpanel.{h,m}`):
  SDK `NSSavePanel.h` 59 members,
  bound=47 reserved=12. SDK
  `NSOpenPanel.h` 23 members, bound=16
  reserved=7. Reserved on NSSavePanel:
  `beginSheetModalForWindow:completionHandler:`
  and `beginWithCompletionHandler:`
  (block); same-file `NSDeprecated`
  (`filename` / `directory` /
  `requiredFileType` /
  `allowedFileTypes` and the
  path-taking beginSheet / runModal /
  `selectText:`). Reserved on
  NSOpenPanel: same-file
  `InheritedAndUnavailable`
  `showsContentTypes` (`NS_UNAVAILABLE`
  getter + setter); same-file
  `NSDeprecated` (`filenames` and the
  path/types-taking begin / runModal
  variants). Protocol
  `NSOpenSavePanelDelegate` is not a
  class member (Bridge).
  `NSObject(NSSavePanelDelegateDeprecated)`
  binds on NSObject, not here.
  Construction is `savePanel` /
  `openPanel` class factories (not
  singletons). `runModal` is the usable
  presentation path. `NSURL` (`URL`,
  `directoryURL`, `URLs`) and `UTType`
  (`currentContentType`,
  `allowedContentTypes`) cross as
  handles. `identifier` is nullable
  `NSUserInterfaceItemIdentifier`
  (var). Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSSegmentedControl + NSSegmentedCell landed
  (`src/ns-segmentedcontrol.{h,m}`,
  `src/ns-segmentedcell.{h,m}`):
  SDK `NSSegmentedControl.h` 44 members,
  bound=44 reserved=0 construct=1.
  SDK `NSSegmentedCell.h` 31 members,
  bound=31 reserved=0 construct=2.
  Nothing reserved. Same-file
  `NSSegmentedControlConvenience`
  (label/image factories) and
  `NSSegmentBackgroundStyle`
  (`interiorBackgroundStyleForSegment:`)
  bind here. Protocol
  `NSUserInterfaceCompression` is not a
  class member; its three methods are
  declared on the control and bind
  there. Typedefs
  `NSSegmentSwitchTracking` /
  `NSSegmentStyle` /
  `NSSegmentDistribution` are not class
  members. Construction is synthesized
  `initWithFrame` on the control and
  `initTextCell` / `initImageCell` on
  the cell. `getter=isSpringLoaded`
  emits `isSpringLoaded`. Nullable SEL
  factory `action` and nullable label /
  toolTip getters cross as `var`.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSAlert landed (`src/ns-alert.{h,m}`):
  SDK `NSAlert.h` 28 members, bound=25
  reserved=3 construct=1. Reserved:
  `beginSheetModalForWindow:completionHandler:`
  (block); deprecated
  `alertWithMessageText:…` and
  `beginSheetModalForWindow:modalDelegate:didEndSelector:contextInfo:`.
  Same-file `NSAlertDeprecated` category
  is reserved. Protocol `NSAlertDelegate`
  is not a class member (Bridge). The
  `NSAlertStyle` typedef and
  `NSModalResponse` / deprecated style
  static consts are not class members.
  This header declares no initializer —
  construction is synthesized `init`
  (allocs `NSAlert`) plus
  `alertWithError:` (factory; `NSError*`
  as handle). `runModal` is the usable
  presentation path. `helpAnchor` is
  nullable `NSHelpAnchorName` (var);
  `messageText` / `informativeText` are
  string; `icon` / `buttons` /
  `delegate` / `accessoryView` /
  `suppressionButton` / `window` cross
  as handles or an array of handles.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSOutlineView landed (`src/ns-outlineview.{h,m}`):
  SDK `NSOutlineView.h` 43 members, bound=40
  reserved=3 construct=1. The three
  reserved members are the NSTableView
  insert/remove/move row primitives
  marked `UNAVAILABLE_ATTRIBUTE`. No
  same-file categories. Protocols
  `NSOutlineViewDelegate` /
  `NSOutlineViewDataSource` and
  `NSAccessibilityOutline` are not
  class members (Bridge). Notification
  names, disclosure-button keys, and
  `NSOutlineViewDropOnItemIndex` are
  not class members. This header
  declares no initializer —
  construction is synthesized
  `initWithFrame` (allocs
  `NSOutlineView`). Redeclared
  `delegate` / `dataSource` /
  `userInterfaceLayoutDirection` bind
  here. Flattened collisions keep the
  short form (`expandItem`) and suffix
  the children form
  (`expandItemExpandChildren`; same for
  collapse/reload). `id` items cross as
  handles (0 = nil = root). Documented
  on [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSVisualEffectView landed
  (`src/ns-visualeffectview.{h,m}`):
  SDK `NSVisualEffectView.h` 13 members,
  bound=13 reserved=0 construct=1. No
  same-file categories; nothing reserved.
  The material / blending / state typedefs
  are not class members. This header
  declares no initializer — construction
  is synthesized `initWithFrame` (allocs
  `NSVisualEffectView`). Inherited
  NSView / NSResponder members stay on
  those classes. `viewDidMoveToWindow`
  and `viewWillMoveToWindow:` are
  redeclared here as `NS_REQUIRES_SUPER`
  overrides and bind here.
  `getter=isEmphasized` emits
  `isEmphasized` / `setEmphasized`.
  Enums and `interiorBackgroundStyle`
  cross as int; nullable `maskImage`
  crosses as a handle. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSColorWell landed (`src/ns-colorwell.{h,m}`):
  SDK `NSColorWell.h` 20 members, bound=18
  reserved=2 construct=1. No same-file
  categories. `bordered` getter/setter is
  `API_DEPRECATED` (`API_TO_BE_DEPRECATED`)
  and reserved. The `NSColorWellStyle`
  typedef is not a class member. The
  `NSColorChanging` protocol is not a
  class member. This header declares no
  initializer — construction is synthesized
  `initWithFrame` (allocs `NSColorWell`)
  plus the `colorWellWithStyle:` class
  factory. Inherited NSControl / NSView
  members stay on those classes.
  `getter=isActive` emits `isActive`.
  NSColor / NSImage / pulldownTarget
  cross as handles; nullable SEL
  `pulldownAction` as `var`;
  `NSColorWellStyle` as int; `drawWellInside:`
  follows the NSRect convention.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSBox landed (`src/ns-box.{h,m}`):
  SDK `NSBox.h` 30 members, bound=27
  reserved=3 construct=1. Same-file
  `NSDeprecated` category is reserved
  (`borderType` getter/setter and
  `setTitleWithMnemonic:` are
  `API_DEPRECATED`). The
  `NSTitlePosition` / `NSBoxType`
  typedefs and the deprecated
  `NSBoxSecondary` / `NSBoxOldStyle`
  static consts are not class members.
  This header declares no initializer —
  construction is synthesized
  `initWithFrame` (allocs `NSBox`).
  Inherited NSView / NSResponder
  members stay on those classes.
  `getter=isTransparent` emits
  `isTransparent` / `setTransparent`.
  titleFont / titleCell / contentView /
  borderColor / fillColor cross as
  handles; title as string; NSSize
  `contentViewMargins` and NSRect
  `borderRect` / `titleRect` /
  `setFrameFromContentFrame:` follow
  the struct convention. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B table support landed (`src/ns-tablecolumn.{h,m}`,
  `src/ns-tablecellview.{h,m}`,
  `src/ns-tablerowview.{h,m}`,
  `src/ns-tableheaderview.{h,m}`,
  `src/ns-tableheadercell.{h,m}`): one file
  per SDK header. Counts:
  `NSTableColumn` header=32 bound=29 reserved=3
  (`initWithCoder:` is `NSCoder`;
  `setResizable:` / `isResizable` are
  `API_DEPRECATED`; comment-only
  soft-deprecated `dataCell` /
  `dataCellForRow:` stay bound);
  `NSTableCellView` header=11 bound=11
  reserved=0 construct=1;
  `NSTableRowView` header=29 bound=29
  reserved=0 construct=1;
  `NSTableHeaderView` header=7 bound=7
  reserved=0 construct=1;
  `NSTableHeaderCell` header=2 bound=2
  reserved=0 construct=1. View subclasses
  synthesize `initWithFrame`; the cell
  synthesizes `initTextCell`. Column
  construction is `initWithIdentifier:`
  (alloc+init glue). Identifier strings
  cross as string; nullable
  `headerToolTip` as var; objects as
  handles. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27


- Wave B NSDatePicker + NSDatePickerCell landed
  (`src/ns-datepicker.{h,m}`,
  `src/ns-datepickercell.{h,m}`): SDK
  `NSDatePicker.h` 34 members, bound=34
  reserved=0 construct=1;
  `NSDatePickerCell.h` 31 members,
  bound=29 reserved=2 (initWithCoder
  NSCoder; initImageCell NS_UNAVAILABLE).
  No same-file categories. Protocol
  `NSDatePickerCellDelegate` is not a
  class member. File-level legacy
  `static const` style/mode/flag aliases
  are not class members. Construction is
  synthesized `initWithFrame` on the
  control and declared `initTextCell` on
  the cell. `NSDate` (`dateValue`,
  `minDate`, `maxDate`) crosses as a
  registry handle, not an epoch double
  (flag for Angel). `NSTimeInterval`
  crosses as double; enums as int;
  `NSCalendar` / `NSLocale` / `NSTimeZone`
  / `NSColor` / delegate as handles.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSTableView landed (`src/ns-tableview.{h,m}`):
  SDK `NSTableView.h` 159 members, bound=136
  reserved=23. Same-file `NSDeprecated`
  category is reserved (`API_DEPRECATED`).
  Also reserved: `initWithCoder:` (`NSCoder`),
  `dragImageForRowsWithIndexes:tableColumns:event:offset:`
  (`NSPointPointer` inout),
  `enumerateAvailableRowViewsUsingBlock:` (block).
  Diffable data source is a different class
  (`NSTableViewDiffableDataSource.h`) and is
  not bound here. Protocols
  (`NSTableViewDelegate`, `NSTableViewDataSource`)
  and `NSObject(NSTableViewDataSourceDeprecated)`
  are not class members. Notification names
  and `NSTableViewRowViewKey` are not class
  members. Companion types with their own
  headers (`NSTableColumn`, `NSTableCellView`,
  `NSTableRowView`, `NSTableHeaderView`,
  `NSTableHeaderCell`, `NSTableViewRowAction`)
  are not bound here. Construction is
  `initWithFrame` (alloc+init glue).
  `NSIndexSet` / `NSDictionary` registered
  nibs / `NSColor` / `NSImage` / views /
  columns cross as handles; identifier
  strings as string; nullable `doubleAction`
  / `autosaveName` as var. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSComboBox + NSComboBoxCell landed
  (`src/ns-combobox.{h,m}`,
  `src/ns-comboboxcell.{h,m}`): SDK
  `NSComboBox.h` 37 members, bound=37
  reserved=0 construct=1;
  `NSComboBoxCell.h` 36 members,
  bound=36 reserved=0 construct=1.
  Separate headers — not a same-file
  companion pair. No same-file
  categories. Protocols
  (`NSComboBoxDelegate`,
  `NSComboBoxDataSource`,
  `NSComboBoxCellDataSource`) are not
  class members (Bridge). Notification
  names (`NSComboBoxWillPopUpNotification`
  and siblings) are not class members.
  Neither header declares an initializer
  — construction is synthesized
  `NSComboBox::initWithFrame` and
  `NSComboBoxCell::initTextCell`.
  NSComboBox redeclares `delegate` as
  `id<NSComboBoxDelegate>` and that pair
  binds here. `intercellSpacing` follows
  the NSSize convention. `id` object
  values and `objectValues` cross as
  handles; `completedString:` (cell only)
  is a nullable string. Inherited
  NSTextField / NSTextFieldCell members
  stay on those classes. Nothing
  reserved. Parity and header audit both
  OK. Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Wave B NSStackView landed (`src/ns-stackview.{h,m}`):
  SDK header 36 members, bound=34 reserved=2
  construct=1. Same-file categories
  `NSStackViewGravityAreas` and
  `NSStackViewDeprecated` bind here.
  `NSStackViewDelegate` is not a class
  member (Bridge). This header declares
  no initializer — construction is
  synthesized `initWithFrame` (allocs
  `NSStackView`) plus the
  `stackViewWithViews:` class factory.
  Inherited NSView / NSResponder members
  stay on those classes. `hasEqualSpacing`
  is `API_DEPRECATED` and reserved.
  `alignment` and the clipping / hugging
  priority pair live inside
  `!TARGET_OS_IPHONE` and are bound (the
  audit blanks preprocessor lines).
  `NSEdgeInsets` follows the struct
  convention; view arrays cross as
  handles; `NSLayoutPriority` and
  `NSStackViewVisibilityPriority` (float)
  cross as double. Enums
  (`orientation`, `alignment`,
  `distribution`, `gravity`) cross as
  int. Parity and header audit both OK.
  Documented on
  [binding-rules.md](/binding-rules.md).

## 2026-08-27

- Synthesized construction glue (`@zep-construct`): a concrete
  class whose header declares no initializer now re-emits the
  nearest bound ancestor's designated initializers as construction
  glue, allocing the concrete class. `gen-zep.php` and
  `check-parity.php` treat `@zep-construct` like `@zep`.
  `audit-headers.php` excludes those methods from `bound`
  (printed as `construct=N`) and fails any non-exempt class with
  no construction path. Access-only whitelist:
  `NSApplication`, `NSEvent`, `NSScreen`,
  `NSNotificationCenter`. Wave A classes patched:
  `NSSwitch`, `NSSecureTextField`, `NSSecureTextFieldCell`,
  `NSSliderCell`, `NSClipView`, `NSSplitView`, `NSTabView`,
  `NSProgressIndicator`, `NSTextStorage`, `CALayer`.
  `NSTextStorage::initWithString` returns Apple's
  `NSConcreteTextStorage` (class cluster); smoke asserts
  `isKindOfClass`. Documented on
  [binding-rules.md](/binding-rules.md) and
  [toolchain.md](/toolchain.md).

## 2026-08-27

- Wave A NSNotificationCenter landed
  (`src/ns-notificationcenter.{h,m}`): Foundation
  `NSNotification.h` header 8 members, bound=6 reserved=2.
  There are no same-file categories on this class. The
  same-file companion `NSNotification` is a different
  class and is not bound here. This header declares no
  initializer — the shared center is the class property
  `defaultCenter`, not alloc+init. Inherited NSObject
  members stay on that class. Observe stays in Bridge:
  `addObserver:selector:name:object:` is reserved (PHP
  cannot be an Objective-C observer) and
  `addObserverForName:object:queue:usingBlock:` is
  reserved (block, same observe rule). Post
  (`postNotification:`, `postNotificationName:object:`,
  `postNotificationName:object:userInfo:`) and remove
  (`removeObserver:`, `removeObserver:name:object:`) are
  bound. Flattened collisions:
  `postNotificationNameObject` vs
  `postNotificationNameObjectUserInfo`; `removeObserver`
  vs `removeObserverNameObject`. `object` parameters
  emit as `object_`. Nullable `NSNotificationName`
  crosses as `var`; `userInfo` (`NSDictionary`) and
  notification / observer / object arguments cross as
  handles. `audit-headers.php` gained
  `FRAMEWORK_FALLBACK` so NS-prefixed types that live
  in Foundation resolve after the AppKit search misses.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A CALayer landed (`src/ca-layer.{h,m}`): QuartzCore
  `CALayer.h` has 158 members; this slice binds 8
  (`backgroundColor` / `contentsGravity` /
  `cornerRadius` / `masksToBounds` getter+setter)
  and reserves none. `@audit partial
  QuartzCore\CALayer` sanctions the shortfall —
  Wave A only needs what `NSView.layer` consumers
  set today. PHP class is
  `AppKit\QuartzCore\CALayer\CALayer`. No
  initializer is bound (layers come from
  `NSView::layer` / `makeBackingLayer`). Adopted
  `NSSecureCoding` / `CAMediaTiming` and the
  delegate protocols are not class members.
  `backgroundColor` (nullable `CGColorRef`)
  crosses as int pointer bits (0 = NULL), same
  as `NSColor::colorWithCGColor:`.
  `contentsGravity` (`CALayerContentsGravity`,
  an `NSString` typed enum) crosses as string.
  `cornerRadius` (`CGFloat`) crosses as double.
  `masksToBounds` (`BOOL`) crosses as bool
  under that name (not `isMasksToBounds`).
  Parity `PARITY_OK`; header audit `AUDIT_OK`
  with `PARTIAL`. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSScreen landed (`src/ns-screen.{h,m}`): SDK
  header 29 members, bound=27 reserved=2. Same-file
  anonymous extensions, `NSDisplayLink`, and
  `NSDeprecated` bind here. This header declares no
  initializer — screens come from the class properties
  (`screens` / `mainScreen` / `deepestScreen`), not
  alloc+init. Inherited NSObject members stay on that
  class. `NSScreenColorSpaceDidChangeNotification` is
  an APPKIT_EXTERN constant, not a class member.
  Reserved: `supportedWindowDepths`
  (`NS_RETURNS_INNER_POINTER`, no C-buffer registry)
  and `userSpaceScaleFactor` (`API_DEPRECATED`).
  `displayLinkWithTarget:selector:` returns a
  `CADisplayLink` handle. `screens` marshals as an
  array of handles. `deviceDescription` /
  `colorSpace` cross as handles. `NSRect` /
  `NSEdgeInsets` follow the struct convention.
  `NSWindowDepth` / `NSDisplayGamut` /
  `NSAlignmentOptions` / `NSInteger` cross as int.
  `CGFloat` / `NSTimeInterval` cross as double.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSEvent landed (`src/ns-event.{h,m}`): SDK
  header 82 members, bound=76 reserved=6. The single base
  interface binds here; there are no same-file categories.
  Adopted `NSCopying` / `NSCoding` are not class members
  (this header does not redeclare `encodeWithCoder:` /
  `initWithCoder:` / `copy`). The event-type / mask /
  modifier / pointing-device / button-mask / phase /
  gesture-axis / swipe-tracking / subtype / pressure
  typedefs, the deprecated `NS*Mask` / `NS*EventType`
  aliases, `NSEventMaskFromType`, and the function-key
  Unicode enum are not class members. This header
  declares no initializer — construction is the class
  factory methods (not alloc+init). Inherited NSObject
  members stay on that class. Reserved: `context`
  (`API_DEPRECATED`); `eventRef` (`NS_RETURNS_INNER_POINTER`,
  no EventRef registry); the `CGEvent` getter (`CGEventRef`,
  no CFType registry); `trackSwipeEventWithOptions:
  dampenAmountThresholdMin:max:usingHandler:` (block);
  `addGlobalMonitorForEventsMatchingMask:handler:` and
  `addLocalMonitorForEventsMatchingMask:handler:` (blocks).
  `eventWithEventRef:` / `eventWithCGEvent:` take the
  matching opaque pointer as int pointer bits (0 = NULL).
  `userData` crosses as int pointer bits. Flattened
  collision: instance `modifierFlags` stays
  `modifierFlags`; the class property emits as
  `modifierFlagsClass`. Nullable `characters` /
  `charactersIgnoringModifiers` /
  `charactersByApplyingModifiers:` cross as `var`.
  Window / tracking-area / vendorDefined / touch / view
  / event-monitor objects cross as handles. `NSPoint`
  (`locationInWindow`, `tilt`, `mouseLocation`) is
  `{x, y}`. `NSTimeInterval` / `CGFloat` / `float`
  cross as double. Event / modifier / phase / mask /
  subtype / pressure / touch-phase enums and
  `unsigned long long uniqueID` cross as int. `NSSet`
  of `NSTouch` marshals as a handle array without a
  second message send. `getter=isARepeat` /
  `isDirectionInvertedFromDevice` /
  `isEnteringProximity` / `isMouseCoalescingEnabled` /
  `isSwipeTrackingFromScrollEventsEnabled` emit under
  those names. Parity and header audit both OK.
  Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSFontDescriptor landed (`src/ns-fontdescriptor.{h,m}`): SDK
  header 21 members, bound=21 reserved=0. Same-file category
  `NSFontDescriptor_TextStyles` binds here. Adopted
  `NSCopying` / `NSSecureCoding` are not class members; nor
  are the attribute / trait / variation / feature / design /
  text-style typedefs and `APPKIT_EXTERN` names, the
  `NSFontDescriptorSymbolicTraits` / `NSFontWeight` /
  `NSFontWidth` constants, or the comment-only deprecated
  `NSFontFamilyClass` / `NSFont*Trait` enums.
  `NSFontColorAttribute` is an `APPKIT_EXTERN` constant, not
  a member. Live construction is `initWithFontAttributes:`
  (alloc+init glue) plus the `fontDescriptorWith*` factories.
  Inherited NSObject members stay on that class. Nothing is
  reserved. Nullable `postscriptName` crosses as `var`.
  `NSFontDescriptorSymbolicTraits` crosses as int.
  `NSFontDescriptorSystemDesign` / `NSFontTextStyle` /
  `NSFontDescriptorAttributeName` are `NSString` typedefs
  and cross as string. Font-attribute / options dictionaries,
  affine transforms, mandatory-key sets, and `objectForKey:`
  values cross as handles. Matching-descriptor arrays are
  handles. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSColor landed (`src/ns-color.{h,m}`): SDK
  header 153 members, bound=129 reserved=24. Same-file categories
  `NSDeprecated` and `NSQuartzCoreAdditions` bind here.
  `CIColor(NSAppKitAdditions)` and
  `NSCoder(NSAppKitColorExtensions)` bind on those classes,
  not here. Adopted `NSCopying` / `NSSecureCoding` /
  `NSPasteboardReading` / `NSPasteboardWriting` are not class
  members; nor are the `NSColorType` /
  `NSColorSystemEffect` typedefs, the pattern-leak version
  constant, or `NSSystemColorsDidChangeNotification`. Live
  construction is `init` (alloc+init glue) plus the class
  factory methods. Inherited NSObject members stay on that
  class. Comment-only "soft deprecated" calibrated factories
  stay bound. Reserved: `initWithCoder:` (NSCoder);
  `colorWithColorSpace:components:count:` and `getComponents:`
  (C component buffers); `colorWithName:dynamicProvider:`
  (block); `colorForControlTint:` and the `ignoresAlpha`
  class property (`API_DEPRECATED`); the `CGColor` getter
  (`CGColorRef` / `NS_RETURNS_INNER_POINTER`, no CFType
  registry); and the entire `NSDeprecated` category.
  `colorWithCGColor:` takes CGColorRef as int pointer bits
  (0 = NULL). `colorWithCIColor:` takes a CIColor handle.
  `NSColorType` / `NSColorSystemEffect` / `NSControlTint`
  cross as int. CGFloat components cross as double.
  Catalog / localized name components are non-null
  `NSString` (`string`).
  `alternatingContentBackgroundColors` is handles.
  Color-space / image / bundle / pasteboard objects cross
  as handles. `drawSwatchInRect:` follows the NSRect
  convention. Scalar out-params on
  `getRed:green:blue:alpha:` /
  `getHue:saturation:brightness:alpha:` /
  `getWhite:alpha:` /
  `getCyan:magenta:yellow:black:alpha:` fold into an assoc
  array whose keys are the ObjC parameter names. Parity and
  header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSFont landed (`src/ns-font.{h,m}`): SDK
  header 67 members, bound=60 reserved=7. Same-file categories
  `NSFont_Deprecated` and `NSFont_TextStyles` bind here.
  Adopted `NSCopying` / `NSSecureCoding` are not class
  members; nor are `NSFontIdentityMatrix`, the notification
  names, the `NSGlyph` / `NSFontRenderingMode` /
  `NSMultibyteGlyphPacking` typedefs, or
  `NSConvertGlyphsToPackedGlyphs`. This header declares no
  initializer — construction is the class factory methods
  (not alloc+init). Inherited NSObject members stay on that
  class. Comment-only "soft deprecated" `NSFont_Deprecated`
  members stay bound. Reserved: `fontWithName:matrix:` and
  the `matrix` property (`const CGFloat *` /
  `NS_RETURNS_INNER_POINTER`) and the five bulk glyph-metric
  methods (C glyph/rect/size/packed buffers). `NSFontWeight`
  / `NSFontWidth` are `CGFloat` and cross as double.
  Nullable `familyName` / `displayName` cross as `var`.
  Font / descriptor / transform / character-set /
  graphics-context / options-dictionary objects cross as
  handles. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSViewController landed (`src/ns-viewcontroller.{h,m}`): SDK
  header 54 members, bound=52 reserved=2. Same-file categories
  `NSViewControllerPresentation`,
  `NSViewControllerPresentationAndTransitionStyles`,
  `NSViewControllerContainer`,
  `NSViewControllerStoryboardingMethods`, and
  `NSExtensionAdditions` bind here. Adopted `NSSeguePerforming` /
  `NSUserInterfaceItemIdentification` / `NSExtensionRequestHandling`
  and the `NSViewControllerPresentationAnimator` protocol are not
  class members (undeclared protocol methods belong to Bridge).
  The `NSEditor` methods this header *does* declare
  (`commitEditingWithDelegate:didCommitSelector:contextInfo:`,
  `commitEditing`, `discardEditing`) bind here. The
  `NSViewControllerTransitionOptions` typedef is not a class
  member. Live construction is `initWithNibName:bundle:`
  (alloc+init glue). Inherited NSResponder members stay on that
  class. Reserved: `initWithCoder:` (NSCoder) and
  `transitionFromViewController:toViewController:options:completionHandler:`
  (block). Soft-available `viewIfLoaded` / `loadViewIfNeeded` /
  the `hasFullSizeContent` popover presenter stay bound.
  `getter=isViewLoaded` emits `isViewLoaded`. Nullable `nibName`
  / `title` / `didCommitSelector` cross as `var`. `contextInfo`
  is int pointer bits. Bundle / representedObject / view /
  viewIfLoaded / view controllers / animator / sender /
  storyboard / extensionContext / sourceItemView cross as
  handles. Child / presented controller arrays are handles.
  `preferredContentSize` / min / max sizes and
  `viewWillTransitionToSize:` follow NSSize; `preferredScreenOrigin`
  follows NSPoint; popover presenters take NSRect component
  doubles. `NSRectEdge` / `NSPopoverBehavior` /
  `NSViewControllerTransitionOptions` cross as int. Parity and
  header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSTabViewItem landed (`src/ns-tabviewitem.{h,m}`): SDK
  header 22 members, bound=22 reserved=0. The single base
  interface binds here; there are no same-file categories.
  Adopted `NSCoding` is not a class member (this header does
  not redeclare `encodeWithCoder:` / `initWithCoder:`). The
  `NSTabState` typedef is not a class member. Live
  construction is `initWithIdentifier:` (alloc+init glue)
  plus the `tabViewItemWithViewController:` factory.
  Inherited NSObject members stay on that class. Nullable
  `identifier` / `image` / `view` / `viewController` /
  `tabView` / `initialFirstResponder` cross as int handles
  (0 = nil); nullable `toolTip` crosses as `var`. `label` is
  a non-null `NSString` (`string`). `color` is an `NSColor`
  handle. `tabState` (`NSTabState`) crosses as int.
  `drawLabel:inRect:` takes a BOOL plus NSRect component
  doubles; `sizeOfLabel:` returns `{width, height}`. Parity
  and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSTabView landed (`src/ns-tabview.{h,m}`): SDK
  header 39 members, bound=37 reserved=2. The single base
  interface binds here; there are no same-file categories.
  Adopted `NSTabViewDelegate` is not a class member (delegate
  methods belong to Bridge). `NSTabViewItem` has its own
  header and is not bound here. The `NSTabViewType` /
  `NSTabPosition` / `NSTabViewBorderType` typedefs and
  `NSAppKitVersionNumberWithDirectionalTabs` are not class
  members. This header declares no initializer — construction
  is the inherited `NSView::initWithFrame` (not rebound).
  Inherited NSView / NSResponder members stay on those
  classes. `tabViewType` stays bound (comment-only "use
  tabPosition and tabViewBorderType instead", not
  `API_DEPRECATED`). Reserved: `controlTint` getter/setter
  (`API_DEPRECATED`). Nullable `selectedTabViewItem` /
  delegate / sender / identifier arguments cross as int
  handles (0 = nil). `tabViewItems` is
  `NSArray<NSTabViewItem *>` (handles). `contentRect` /
  `minimumSize` follow the struct convention. `NSPoint` for
  `tabViewItemAtPoint:` is component doubles. Enums
  (`NSTabViewType`, `NSTabPosition`, `NSTabViewBorderType`,
  `NSControlSize`) cross as int. Parity and header audit
  both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSPopover landed (`src/ns-popover.{h,m}`): SDK
  header 27 members, bound=24 reserved=3. The single base
  interface binds here; there are no same-file categories.
  Adopted `NSAppearanceCustomization` / `NSAccessibilityElement`
  / `NSAccessibility` and `NSPopoverDelegate` are not class
  members; nor are notification names, close-reason constants,
  or the `NSPopoverAppearance` / `NSPopoverBehavior` typedefs.
  Live construction is `init` (alloc+init glue). Inherited
  NSResponder members stay on that class. Reserved:
  `initWithCoder:` (NSCoder) and the pre-10.10
  `NSPopoverAppearance appearance` getter/setter (duplicate of
  the live 10.10+ `NSAppearance` property, and `API_DEPRECATED`).
  Soft-available `isDetached` / `hasFullSizeContent` /
  `showRelativeToToolbarItem:` stay bound. Nullable delegate /
  appearance / contentViewController / sender cross as handles.
  `contentSize` is `{width, height}`; `positioningRect` is
  `{x, y, width, height}`. `NSPopoverBehavior` / `NSRectEdge`
  cross as int. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSSplitView landed (`src/ns-splitview.{h,m}`): SDK
  header 26 members, bound=24 reserved=2. Same-file categories
  `NSSplitViewArrangedSubviews` and `NSDeprecated` bind here.
  Adopted `NSSplitViewDelegate` is not a class member; nor are
  the Will/DidResizeSubviews notification names, the
  `NSSplitViewDividerStyle` typedef, or
  `NSSplitViewAutosaveName`. This header declares no
  initializer — construction is the inherited
  `NSView::initWithFrame` (not rebound). Inherited NSView /
  NSResponder members stay on those classes. Reserved:
  `setIsPaneSplitter:` / `isPaneSplitter` (`API_DEPRECATED`).
  The `holdingPriorityForSubviewAtIndex:` pair (inside
  `!TARGET_OS_IPHONE`) is bound; the audit blanks preprocessor
  lines so those methods still count. `getter=isVertical`
  emits `isVertical` / `setVertical`. Nullable `autosaveName`
  crosses as `var`. Arranged subviews are handles;
  `NSLayoutPriority` (float) and divider positions / thickness
  cross as double; `drawDividerInRect:` follows the NSRect
  convention. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSLayoutManager landed (`src/ns-layoutmanager.{h,m}`): SDK
  header 150 members, bound=121 reserved=29. Same-file categories
  `NSTextViewSupport`, `NSLayoutManagerDeprecated`, and
  `NSGlyphGeneration` bind here. Adopted
  `NSLayoutManagerDelegate` / `NSTextLayoutOrientationProvider`
  and the `NSGlyphStorage` protocol (category adoption only;
  protocol methods are not redeclared) are not class members;
  nor are the glyph-property / control-character / typesetter
  enums. Live construction is `init` (alloc+init glue).
  Inherited NSObject members stay on that class. Reserved:
  `initWithCoder:` (NSCoder); `setGlyphs:…` /
  `getGlyphsInRange:…` / `getLineFragmentInsertionPoints:…` /
  `fillBackgroundRectArray:…` (C buffers that cannot cross
  `ns-value.h`); the two `enumerate…usingBlock:` methods
  (blocks); live `showCGGlyphs:…inContext:` (C buffers +
  `CGAffineTransform` + `CGContextRef`); and the
  `API_DEPRECATED` `usesScreenFonts` / `hyphenationFactor`
  properties plus the rest of `NSLayoutManagerDeprecated`.
  Comment-only soft-deprecated `glyphAtIndex:` /
  `glyphAtIndex:isValidIndex:` and the two `rectArrayFor…`
  methods stay bound — `NSRectArray` marshals as a list of
  rect assoc arrays via `ns_ret_rect`. Scalar / `NSRangePointer`
  / `BOOL*` / `CGFloat*` out-params fold into an assoc array
  (`actualCharacterRange`, `{result, isValidIndex}`,
  `{result, effectiveGlyphRange}`, `{result, partialFraction}`,
  `{charIndex, glyphIndex}`). NSDictionary attribute bags and
  `id` temporary-attribute values cross as handles; text
  container / typesetter / font / cell / window objects as
  handles. Flattened collisions keep unique names
  (`CGGlyphAtIndex` / `CGGlyphAtIndexIsValidIndex`, the
  `withoutAdditionalLayout` variants, the two temporary-
  attribute pairs, `glyphIndexForPointInTextContainer` vs the
  fraction form, layout/bounds `forTextBlock` glyphRange vs
  atIndex). Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSClipView landed (`src/ns-clipview.{h,m}`): SDK
  header 22 members, bound=19 reserved=3. The base interface
  plus the same-file class extension bind here.
  `NSView(NSClipViewSuperview)` lives on NSView, not this
  class. This header declares no initializer — construction
  is the inherited `NSView::initWithFrame` (not rebound);
  typical instances come from `NSScrollView.contentView`.
  Inherited NSView / NSResponder members stay on those
  classes. `autoscroll:` is redeclared here and binds here.
  Reserved: `constrainScrollPoint:` and the `copiesOnScroll`
  getter/setter (`API_DEPRECATED`). Nullable `documentView`
  / `documentCursor` cross as handles. `documentRect` /
  `documentVisibleRect` / `constrainBoundsRect:` are
  `{x, y, width, height}`; `contentInsets` follows the
  edge-insets convention. Parity and header audit both OK.
  Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSScrollView landed (`src/ns-scrollview.{h,m}`): SDK
  header 89 members, bound=82 reserved=7. Same-file categories
  `NSRulerSupport` and `NSFindBarSupport` bind here. Adopted
  `NSTextFinderBarContainer` is not a class member; nor are
  notification names (`NSScrollViewWillStartLiveMagnifyNotification`
  and the live-scroll / live-magnify siblings) or the
  `NSScrollElasticity` / `NSScrollViewFindBarPosition` typedefs.
  Live construction is `initWithFrame` (alloc+init glue).
  Inherited NSView / NSResponder members stay on those classes;
  `scrollWheel:` is redeclared here and binds here. Reserved:
  `initWithCoder:` (NSCoder), both Class-taking
  `frameSizeForContentSize:` / `contentSizeForFrameSize:`
  variants, the two `API_DEPRECATED`
  `hasHorizontalScroller:hasVerticalScroller:` variants, and
  class property `rulerViewClass` (Class, getter+setter).
  Flattened collision: `setMagnification` vs
  `setMagnificationCenteredAtPoint`. Nullable document view /
  cursor / scrollers / ruler views cross as handles. NSRect /
  NSSize / NSPoint / NSEdgeInsets follow the struct convention.
  Enums (`NSBorderType`, `NSScrollerStyle`, `NSScrollerKnobStyle`,
  `NSScrollElasticity`, `NSScrollViewFindBarPosition`,
  `NSEventGestureAxis`) cross as int. Parity and header audit
  both OK. Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSTextStorage landed (`src/ns-textstorage.{h,m}`): SDK
  header 15 members, bound=15 reserved=0. The single base
  interface binds here; no same-file categories. The
  `NSObject(NSDeprecatedTextStorageDelegateInterface)` block
  is on NSObject, not this class. Adopted `NSSecureCoding`
  and the `NSTextStorageDelegate` /
  `NSTextStorageObserving` protocols are not class members;
  nor are notification names, `NSTextStorageEditActions`,
  or the deprecated `NSTextStorageEditedOptions` typedef.
  Scripting properties live in `NSTextStorageScripting.h`
  and bind with that header. This header declares no
  initializer — construction is the inherited
  `NSMutableAttributedString` / `NSAttributedString` inits.
  Inherited attributed-string members stay on those
  classes. `layoutManagers` is handles; `editedRange` is
  `{location, length}`; nullable delegate /
  `textStorageObserver` cross as handles. Parity and
  header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSTextView landed (`src/ns-textview.{h,m}`): SDK
  header 235 members, bound=230 reserved=5. Same-file categories
  `NSCompletion`, `NSPasteboard`, `NSDragging`, `NSSharing`,
  `NSTextChecking`, `NSQuickLookPreview`,
  `NSTextView_SharingService`, `NSTextView_TouchBar`,
  `NSTextView_Factory`, `NSTextView_TextHighlight`, and
  `NSDeprecated` bind here. Adopted protocols
  (`NSTextViewDelegate`, `NSColorChanging`,
  `NSMenuItemValidation`, `NSUserInterfaceValidations`,
  `NSTextInputClient`, `NSTextLayoutOrientationProvider`,
  `NSDraggingSource`, `NSStandardKeyBindingResponding`,
  `NSTextInput`, `NSAccessibilityNavigableStaticText`,
  `NSTextContent`, plus Touch Bar delegate protocols) are not
  class members; nor are notification names, enums, or
  pasteboard/touch-bar constants. Live construction is
  `initWithFrame`, `initWithFrame:textContainer:`, and
  `initUsingTextLayoutManager:` (each alloc+init glue). The
  `textViewUsingTextLayoutManager:` / `scrollableTextView` /
  `fieldEditor` / `scrollableDocumentContentTextView` /
  `scrollablePlainDocumentContentTextView` factories are
  single class-method sends. Inherited NSText / NSView /
  NSResponder members stay on those classes;
  `NSTextView(NSSharing)` redeclares the NSText properties
  and those redeclarations bind here. Reserved:
  `initWithCoder:` (NSCoder), `insertText:` /
  `toggleTraditionalCharacterShape:` /
  `toggleBaseWritingDirection:` (`API_DEPRECATED`), and
  `performValidatedReplacementInRange:withAttributedString:`
  (NSAttributedString). Flattened collisions keep unique
  names (`initWithFrame` / `initWithFrameTextContainer`,
  `writeSelectionToPasteboardType` /
  `writeSelectionToPasteboardTypes`,
  `readSelectionFromPasteboard` /
  `readSelectionFromPasteboardType`,
  `setSelectedRange` /
  `setSelectedRangeAffinityStillSelecting`,
  `setSelectedRanges` /
  `setSelectedRangesAffinityStillSelecting`). Class property
  `stronglyReferencesTextStorage` is a no-handle getter.
  Class method `fieldEditor` and instance
  `isFieldEditor` / `setFieldEditor` do not collide.
  NSDictionary attribute bags and object graphs cross as
  handles; `NSArray<NSString*>` / pasteboard-type arrays
  cross as strings; `NSArray<NSValue*>` ranges as handles.
  Scalar / `NSString**` / `NSPointPointer` out-params fold
  into an assoc array (`completions…index`,
  `smartInsert…beforeString/afterString`,
  `dragImage…origin`). Nullable NSString / NSPasteboardType
  cross as `var`. Parity and header audit both OK.
  Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSTextContainer landed (`src/ns-textcontainer.{h,m}`): SDK
  header 31 members, bound=27 reserved=4. Same-file class
  extension and `NSTextContainerDeprecated` bind here; adopted
  `NSTextLayoutOrientationProvider` and the
  `NSLineSweepDirection` / `NSLineMovementDirection` typedefs
  are not class members. Live construction is `initWithSize`
  and the soft-deprecated `initWithContainerSize` (each
  alloc+init glue). Inherited NSObject members stay on that
  class. The audit blanks preprocessor lines, so both
  `textView` declarations are counted: the live weak property
  is bound; the pre-10.12 strong declaration is reserved as a
  duplicate. Also reserved: `initWithCoder:` (NSCoder) and
  `containsPoint:` (`API_DEPRECATED`). Soft-deprecated
  `containerSize` and
  `lineFragmentRectForProposedRect:sweepDirection:movementDirection:remainingRect:`
  stay bound. `remainingRect` out-params are not inputs — the
  return assoc array is the fragment rect plus a
  `remainingRect` key of the same `{x,y,width,height}` shape.
  `exclusionPaths` is handles. Nullable layout manager / text
  view / bezier paths cross as handles. Parity and header
  audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSImageRep landed (`src/ns-imagerep.{h,m}`): SDK
  header 44 members, bound=30 reserved=14. The single base
  interface binds here; no same-file categories. `NSCopying` /
  `NSCoding` and notification names
  (`NSImageRepRegistryDidChangeNotification` and the obsolete
  `NSImageRepRegistryChangedNotification` alias) are not class
  members; nor are `NSImageRepMatchesDevice`,
  `NSImageLayoutDirection`, or `NSImageHintKey`. Live
  construction is `init` (alloc+init glue). Inherited NSObject
  members stay on that class. Reserved: `initWithCoder:`
  (NSCoder), the Class registry
  (`registerImageRepClass:` / `unregisterImageRepClass:` /
  `registeredImageRepClasses` / `imageRepClassForType:` /
  `imageRepClassForData:` and the two deprecated
  `imageRepClassForFileType:` / `imageRepClassForPasteboardType:`),
  `canInitWithData:` (NSData), the four deprecated
  `image*FileTypes` / `image*PasteboardTypes` lists, and
  `CGImageForProposedRect:context:hints:` (CGImageRef plus
  nullable `NSRect *` inout). Live UTI lists
  (`imageTypes` / `imageUnfilteredTypes`) are strings; the
  `imageRepsWithContentsOfFile:` / URL / pasteboard factories
  are handles. `NSColorSpaceName` crosses as string.
  `NSImageLayoutDirection` and pixel metrics cross as int.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSImageView landed (`src/ns-imageview.{h,m}`): SDK
  header 35 members, bound=35 reserved=0. Same-file category
  `NSImageView(NSSymbolEffect)` binds here; adopted
  `NSAccessibilityImage` / `NSMenuItemValidation` and the
  `NSImageDynamicRange` typedef are not class members. No
  designated initializer — construction is
  `NSControl::initWithFrame` or the `imageViewWithImage:`
  factory (a single class-method send). Inherited NSControl /
  NSView members stay on those classes. Class property
  `defaultPreferredImageDynamicRange` is a no-handle
  getter/setter. Nullable `NSImage` / `NSImageSymbolConfiguration`
  / `NSColor` and Symbols-framework `NSSymbolEffect` /
  `NSSymbolEffectOptions` / `NSSymbolContentTransition` cross
  as handles. Enums (`NSImageAlignment`, `NSImageScaling`,
  `NSImageFrameStyle`, `NSImageDynamicRange`) cross as int.
  Flattened overloads keep unique names
  (`addSymbolEffect` / `addSymbolEffectOptions` /
  `addSymbolEffectOptionsAnimated`, and the matching
  `removeSymbolEffectOfType*` / `removeAllSymbolEffects*` /
  `setSymbolImageWithContentTransition*` forms). `config.json`
  extra-libs now includes `-framework Symbols` so
  `NS_ARG_AS(NSSymbolEffect, …)` can resolve the class.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSText landed (`src/ns-text.{h,m}`): SDK header 72
  members, bound=67 reserved=5 (`initWithCoder:` / NSCoder, plus
  the four NSData RTF/RTFD members: `replaceCharactersInRange:withRTF:`,
  `replaceCharactersInRange:withRTFD:`, `RTFFromRange:`,
  `RTFDFromRange:`). No same-file categories; adopted
  `NSChangeSpelling` / `NSIgnoreMisspelledWords` and the
  `NSTextDelegate` protocol are not class members. Notification
  names and the alignment / writing-direction / movement enums
  are not class members. Inherited NSView / NSResponder members
  stay on those classes. `initWithFrame` is alloc+init
  construction glue. Flattened collisions: `setTextColor:range:`
  → `setTextColorRange`, `setFont:range:` → `setFontRange`.
  Zephir reserved words: `string` → `string_`, `copy:` → `copy_`.
  NSRange crosses as location/length ints in and an assoc array
  out; NSSize follows the struct convention. Nullable color /
  font / delegate cross as handles. Parity and header audit both
  OK. Documented on [binding-rules.md](/binding-rules.md).

- Wave A NSImage landed (`src/ns-image.{h,m}`): SDK
  `NSImage` header 104 members, bound=63 reserved=41. Same-file
  companion `NSImageSymbolConfiguration` binds here (header=11
  bound=11 reserved=0; no header of its own).
  `NSBundle(NSBundleImageExtension)` binds on NSBundle, not here.
  `NSImageDelegate` and the empty `NSImage()` protocol extensions
  are not class members; `NSImageName` constants are not members.
  The audit blanks preprocessor lines, so the Mac-Catalyst
  `init`/`new`/`alloc`/`allocWithZone:` block and both C++/Swift
  `isTemplate` branches are counted. Live construction is `init`
  / `initWithSize` / `initWithContentsOfFile` /
  `initWithContentsOfURL` / `initByReferencingFile` /
  `initByReferencingURL` / `initWithPasteboard` / `initWithCGImage`
  (each alloc+init glue). `new` / `alloc` / `allocWithZone:` are
  reserved. The C `isTemplate` property is bound; the C++/Swift
  duplicates are reserved. The entire `NSImage(Deprecated)`
  category is reserved, as are NSCoder, NSData, the block
  `imageWithSize:flipped:drawingHandler:`, and
  `CGImageForProposedRect:context:hints:` (CGImageRef plus
  nullable `NSRect *` inout). `initWithCGImage:size:` takes
  CGImageRef as int pointer bits (0 = NULL). Nullable `name` /
  `accessibilityDescription` cross as `var`. `representations`
  is handles; `imageTypes` / `imageUnfilteredTypes` are strings.
  `NSDictionary` hints cross as handles. Parity and header audit
  both OK. Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSSliderCell landed (`src/ns-slidercell.{h,m}`): SDK header
  41 members, bound=29 reserved=12. Same-file categories
  `NSSliderCellVerticalGetter`, `NSTickMarkSupport`, and
  `NSDeprecated` bind here; inherited NSActionCell / NSCell
  members stay on those classes. No designated initializer —
  construction is `NSCell::init` / `initTextCell` /
  `initImageCell`. The 10.11 readwrite `vertical`
  (`isVertical` / `setVertical`) is bound; the older
  `NSSliderCellVerticalGetter` readonly `isVertical` is
  reserved as a duplicate so the header member count matches.
  The entire `NSDeprecated` category is reserved (title/cell/
  font/image APIs plus `setKnobThickness:`). `knobThickness`
  stays bound as the live readonly getter. `-drawKnob:` is
  emitted as `drawKnobRect` so it does not collide with
  `-drawKnob`. Class property `prefersTrackingUntilMouseUp`
  is a no-handle getter. Tick-mark `NSPoint` in / `NSRect`
  out follow the struct convention. The typedef aliases
  (`NSTickMarkBelow` / `NSLinearSlider` / …) are not class
  members. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSPopUpButton landed (`src/ns-popupbutton.{h,m}`):
  SDK header 45 members, bound=45 reserved=0. The class is an
  `NSButton` subclass whose own header declares the four macOS 15
  convenience factories, `initWithFrame:pullsDown:` (alloc+init
  construction glue), configuration (`menu`, `pullsDown`,
  `autoenablesItems`, `preferredEdge`, `usesItemFromMenu`,
  `altersStateOfSelectedItem`), item add/remove/index/select, and
  title conveniences. Nothing is reserved — no blocks, NSCoder,
  NSAttributedString, or API_DEPRECATED members. `NSPopUpButtonCell`
  has its own header and is not bound here. Notification name
  `NSPopUpButtonWillPopUpNotification` is not a class member.
  Redeclared `setTitle:` binds here. Inherited NSButton / NSControl /
  NSView members stay on those classes. Nullable `SEL` on
  `popUpButtonWithMenu:target:action:` and
  `indexOfItemWithTarget:andAction:` crosses as `var`; nullable
  `titleOfSelectedItem` crosses as `var`. `itemArray` is handles;
  `itemTitles` / `addItemsWithTitles:` are strings. Parity and
  header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSSlider landed (`src/ns-slider.{h,m}`): SDK header 38
  members, bound=26 reserved=12. Same-file categories
  `NSSliderVerticalGetter`, `NSTickMarkSupport`,
  `NSSliderConvenience`, and `NSSliderDeprecated` bind here;
  adopted `NSAccessibilitySlider` does not. No designated
  initializer — construction is `NSControl::initWithFrame` or the
  convenience factories (`sliderWithTarget:action:`,
  `sliderWithValue:minValue:maxValue:target:action:`), each a
  single class-method send. The 10.12 readwrite `vertical`
  (`isVertical` / `setVertical`) is bound; the older
  `NSSliderVerticalGetter` readonly `isVertical` is reserved as a
  duplicate so the header member count matches. The entire
  `NSSliderDeprecated` category is reserved (title/cell/font/image
  APIs plus `setKnobThickness:`). `knobThickness` stays bound as
  the live readonly getter. Nullable `SEL` `action` on the
  factories crosses as `var`. Tick-mark `NSPoint` in / `NSRect`
  out follow the struct convention. Parity and header audit both
  OK. Documented on [binding-rules.md](/binding-rules.md).
- Wave A NSProgressIndicator landed (`src/ns-progressindicator.{h,m}`):
  SDK header 29 members, bound=22 reserved=7. The class is an
  `NSView` (not `NSControl`) whose own header declares determinate /
  indeterminate options, `observedProgress` (nullable Foundation
  `NSProgress` → int handle), `startAnimation:` / `stopAnimation:` /
  `incrementBy:` / `sizeToFit`, plus `style` / `controlSize` enums
  as int. Same-file `NSProgressIndicatorDeprecated` is reserved
  (`animationDelay` / `setAnimationDelay:` / `animate:`, plus
  `bezeled` and `controlTint` getter+setter). Adopted
  `NSAccessibilityProgressIndicator` is a protocol, not a class
  member. No designated initializer — construction is
  `NSView::initWithFrame`. Inherited NSView members stay on that
  class. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSSwitch landed (`src/ns-switch.{h,m}`): SDK header
  2 members, bound=2 reserved=0. The class is an `NSControl`
  subclass whose own header declares a single readwrite
  `state` property (`NSControlStateValue` → int). Getter and
  setter both bind; nothing is reserved. Adopted
  `NSAccessibilitySwitch` is a protocol, not a class member.
  No same-file categories and no designated initializer —
  construction is `NSControl::initWithFrame`. Inherited
  NSControl / NSView members stay on those classes. Parity
  and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSSecureTextField landed (`src/ns-securetextfield.{h,m}`):
  the SDK header declares two classes. `NSSecureTextField` is an
  empty `NSTextField` subclass (`header=0`) — nothing to bind or
  reserve, no PHP class emitted, inherited members stay on
  NSTextField / NSControl / NSView. `NSSecureTextFieldCell` is the
  same-file companion (`header=2 bound=2 reserved=0`): `echosBullets`
  getter+setter, default getter name (not `isX`). No designated
  initializer on either class. `audit-headers.php` now falls back to
  scanning for `@interface Class` when `{Class}.h` is missing so
  companion classes audit against the owning header. Parity and
  header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSTextFieldCell landed (`src/ns-textfieldcell.{h,m}`): SDK header
  19 members, bound=15 reserved=4 (`initWithCoder:` / NSCoder,
  `initImageCell:` / `NS_UNAVAILABLE`, `placeholderAttributedString`
  getter+setter / NSAttributedString). No same-file categories; inherited
  NSActionCell / NSCell members stay on those classes.
  `initTextCell:` is `alloc`+`init` construction glue. Redeclared
  `setUpFieldEditorAttributes:` binds here. Nullable
  `placeholderString` crosses as `var`; `allowedInputSourceLocales`
  is `NSArray<NSString *>` and crosses as an array of strings.
  `setWantsNotificationForMarkedText:` is `API_AVAILABLE` and stays
  bound. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSCell landed (`src/ns-cell.{h,m}`): SDK header 153
  members, bound=140 reserved=13 (`initWithCoder:` / NSCoder,
  `attributedStringValue` getter+setter / NSAttributedString, plus
  the entire `NSDeprecated` category: `controlTint` getter+setter,
  `entryType` / `setEntryType:`, `isEntryAcceptable:`,
  `setFloatingPointFormat:left:right:`, and the four mnemonic
  methods). Same-file categories `NSKeyboardUI`,
  `NSCellAttributedStringMethods`, `NSCellMixedState`,
  `NSCellHitTest`, `NSCellExpansion`, `NSCellBackgroundStyle`, and
  `NSDeprecated` bind here; adopted protocols (`NSCopying`,
  `NSCoding`, `NSUserInterfaceItemIdentification`,
  `NSAccessibilityElement`, `NSAccessibility`) and the C helpers
  `NSDrawThreePartImage` / `NSDrawNinePartImage` do not.
  `init` / `initTextCell:` / `initImageCell:` are `alloc`+`init`
  construction glue. Nullable `SEL` `action` crosses as `var`.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Wave A NSTextField landed (`src/ns-textfield.{h,m}`): SDK header 54
  members, bound=50 reserved=4 (`placeholderAttributedString`
  getter+setter / NSAttributedString, `labelWithAttributedString:` /
  NSAttributedString, plus `API_DEPRECATED` `setTitleWithMnemonic:`).
  Same-file categories `NSTouchBar`, `NSTextFieldConvenience`,
  `NSTextFieldAttributedStringMethods`, and `NSDeprecated` bind here;
  `NSTextFieldDelegate` and the adopted `NSTextContent` /
  `NSUserInterfaceValidations` / `NSAccessibilityNavigableStaticText`
  protocols do not. No designated initializer on this header —
  construction is `NSControl::initWithFrame` or the convenience
  factories (`labelWithString:`, `wrappingLabelWithString:`,
  `textFieldWithString:`), each a single class-method send.
  `acceptsFirstResponder` is redeclared here and binds here. Nullable
  `placeholderString` crosses as `var`. Parity and header audit both
  OK. Documented on [binding-rules.md](/binding-rules.md).
- Slice zero NSControl landed (`src/ns-control.{h,m}`): SDK header 82
  members, bound=74 reserved=8 (`initWithCoder:` / NSCoder,
  `attributedStringValue` getter+setter / NSAttributedString,
  `cellClass` getter+setter / Class, plus `API_DEPRECATED`
  `setFloatingPointFormat:left:right:`, `setNeedsDisplay`, `calcSize`).
  Same-file categories `NSControlEditableTextMethods` and `NSDeprecated`
  bind here; the `NSControlTextEditingDelegate` protocol and the
  `NSObject(NSControlSubclassNotifications)` category do not.
  Soft-deprecated `cell` / `selectedCell` / `selectedTag` / `updateCell:`
  / `drawCell:` family stay bound. `initWithFrame` is `alloc`+`init`
  construction glue. `mouseDown:` is redeclared on this class and binds
  here. Nullable `SEL` `action` crosses as `var`. Documented on
  [binding-rules.md](/binding-rules.md).
- Slice zero NSMenu landed (`src/ns-menu.{h,m}`): SDK header 82
  members, bound=63 reserved=19 (`initWithCoder:` / NSCoder, both
  `paletteMenuWithColors:…selectionHandler:` block factories, plus the
  entire `NSDeprecated` category including
  `menuChangedMessagesEnabled` and `isTornOff`). Same-file categories
  `NSPaletteMenus`, `NSSubmenuAction`, `NSMenuPropertiesToUpdate`,
  `NSDeprecated` bind here; `NSMenuDelegate` / `NSMenuItemValidation`
  and `NSObject(NSMenuValidation)` do not. `initWithTitle` is
  `alloc`+`init` construction glue. Nullable `SEL` on
  `insertItemWithTitle:action:keyEquivalent:atIndex:` /
  `addItemWithTitle:action:keyEquivalent:` /
  `indexOfItemWithTarget:andAction:` crosses as `var`. Parity (at
  generate time) and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Slice zero NSResponder landed (`src/ns-responder.{h,m}`): SDK header 63
  members, bound=61 reserved=2 (`initWithCoder:` / NSCoder,
  `performMnemonic:` / API_DEPRECATED). Same-file categories
  `NSUndoSupport`, `NSControlEditingSupport`, `NSErrorPresentation`,
  `NSTextFinderSupport`, `NSWindowTabbing`, `NSWritingToolsSupport`,
  `NSDeprecated` bind here; the empty `NSStandardKeyBindingMethods`
  category and the `NSStandardKeyBindingResponding` protocol do not.
  `init` is `alloc`+`init` construction glue. `NSError*` presentation
  methods bind as handles; `void *contextInfo` crosses as int pointer
  bits; `IBAction` is void; `tryToPerform:with:` emits `object_`.
  Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Slice zero NSView landed (`src/ns-view.{h,m}`): SDK header 267
  members, bound=234 reserved=33 (`initWithCoder:` / NSCoder,
  `sortSubviewsUsingFunction:context:` function pointer, NSData EPS/PDF,
  `pageHeader` / `pageFooter` / both `showDefinition…` NSAttributedString
  members, plus `API_DEPRECATED` including lockFocus / acceptsTouchEvents
  / NSDeprecated). Same-file categories `NSKeyboardUI`, `NSPrinting`,
  `NSDrag`, `NSFullScreenMode`, `NSFindIndicator`, `NSGestureRecognizer`,
  `NSTouchBar`, `NSSafeAreas`, `NSTrackingArea`, `NSDisplayLink`,
  `NSWritingToolsCoordinator` bind here; protocols and Auto Layout
  categories in other headers do not. `initWithFrame` is `alloc`+`init`
  construction glue. Soft-deprecated cursor/tracking-rect methods stay
  bound. `print:` → `print_`. Parity and header audit both OK.
  Documented on [binding-rules.md](/binding-rules.md).
- Slice zero NSWindow landed (`src/ns-window.{h,m}`): SDK header 317
  members, bound=277 reserved=40 (deprecated including
  `API_TO_BE_DEPRECATED`, blocks, `initWithCoder:` / NSCoder,
  `dataWithEPSInsideRect:` / `dataWithPDFInsideRect:` / NSData). Same-file
  categories `NSEvent`, `NSCursorRect`, `NSDrag`, `NSDisplayLink`,
  `NSDeprecated` bind here; `NSWindowDelegate` protocol does not.
  `initWithContentRectStyleMaskBackingDefer` is `alloc`+`init` construction
  glue. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Slice zero NSMenuItem landed (`src/ns-menuitem.{h,m}`): SDK header
  70 members, bound=63 reserved=7 (`initWithCoder:` / NSCoder, attributedTitle
  getter+setter, four NSDeprecated mnemonic methods). Same-file
  `NSView(NSViewEnclosingMenuItem)` is not an NSMenuItem member.
  `initWithTitleActionKeyEquivalent` is the first live `alloc`+`init`
  binding. Parity and header audit both OK. Documented on
  [binding-rules.md](/binding-rules.md).
- Slice zero NSApplication landed (`src/ns-application.{h,m}`): SDK header
  102 members, bound=92 reserved=10 (`API_DEPRECATED` including
  `API_TO_BE_DEPRECATED`, plus `enumerateWindowsWithOptions:usingBlock:`).
  Opaque `NSModalSession` crosses as int pointer bits, not a registry
  handle. Documented on [binding-rules.md](/binding-rules.md).
- Slice zero NSButton landed (`src/ns-button.{h,m}`): SDK header 63 members,
  bound=58 reserved=5 (attributed title pair + deprecated mnemonic). Parity
  and header audit both OK. Documented scalar out-param marshalling
  (`getPeriodicDelay:interval:` → assoc array) on [binding-rules.md](/binding-rules.md)
  and the gen-zep `@zep`-in-comment gotcha on [toolchain.md](/toolchain.md).
- Bundle seeded by claude-fable-5/cursor after the toolchain landed:
  `binding-rules.md`, `bridge.md`, `toolchain.md`. All three are
  `status: draft` pending human verification.
