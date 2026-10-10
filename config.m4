PHP_ARG_ENABLE([appkit],
  [whether to enable appkit support],
  [AS_HELP_STRING([--enable-appkit], [Enable AppKit bindings])],
  [no])

if test "$PHP_APPKIT" != "no"; then
  case $host_os in
    darwin*) ;;
    *) AC_MSG_ERROR([appkit binds AppKit, which only macOS provides]) ;;
  esac

  APPKIT_SOURCES="src/appkit.m src/runtime.m src/NSObject.m src/NSApplication.m src/NSEvent.m src/NSDate.m src/CFType.m src/CFRunLoop.m src/CFFileDescriptor.m src/CoreGraphics.m src/NSGeometry.m src/NSView.m src/NSWindow.m src/NSMenu.m src/ObjCGlue.m src/NSLayout.m src/NSColor.m src/NSFont.m src/NSStackView.m src/NSGridView.m src/NSControls.m src/NSTableView.m src/NSNotificationCenter.m src/AVKit.m src/CALayer.m src/NSOpenGL.m src/NSScreen.m src/CGDirectDisplay.m src/CGEvent.m src/GameController.m src/NSGraphicsContext.m src/CADisplayLink.m src/NSRunLoop.m src/NSProcessInfo.m src/IOPMLib.m"

  dnl No C sources: every translation unit is Objective-C, compiled by the rules below.
  PHP_NEW_EXTENSION([appkit], [], [$ext_shared],, [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])

  dnl PHP_ADD_SOURCES only knows .c/.s/.S/.cpp, so the .m rules are written the way
  dnl PHP_ADD_SOURCES_X writes a .c rule, with the ObjC flags added: shared objects for a
  dnl phpize build, PHP's own objects when compiled into PHP. -fno-objc-arc: retain/release
  dnl are explicit.
  case $ext_dir in
    "") appkit_srcdir="$abs_srcdir/"; appkit_bdir=""; appkit_inc="-I. -I$abs_srcdir" ;;
    *) appkit_srcdir="$abs_srcdir/$ext_dir/"; appkit_bdir="$ext_dir/"; appkit_inc="-I$appkit_bdir -I$appkit_srcdir" ;;
  esac
  if test "$ext_shared" = "yes"; then
    appkit_cc="$shared_c_pre $appkit_inc $shared_c_meta -DZEND_COMPILE_DL_EXT=1"
    appkit_post=$shared_c_post
  else
    appkit_cc="$php_c_pre $appkit_inc $php_c_meta"
    appkit_post=$php_c_post
  fi
  for appkit_src in $APPKIT_SOURCES; do
    appkit_obj=$appkit_bdir$(echo "$appkit_src" | $SED -e 's/\.m$//')
    if test "$ext_shared" = "yes"; then
      shared_objects_appkit="$shared_objects_appkit $appkit_obj.lo"
    else
      PHP_GLOBAL_OBJS="$PHP_GLOBAL_OBJS $appkit_obj.lo"
    fi
    cat >>Makefile.objects<<EOF
-include $appkit_obj.dep
$appkit_obj.lo: $appkit_srcdir$appkit_src
	$appkit_cc -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -DGL_SILENCE_DEPRECATION -x objective-c -fno-objc-arc -fobjc-exceptions -Wno-unused-parameter -c $appkit_srcdir$appkit_src -o $appkit_obj.lo $appkit_post -MMD -MF $appkit_obj.dep -MT $appkit_obj.lo
EOF
  done

  dnl Shared, the frameworks go to the .so; compiled in, to PHP's own link line.
  APPKIT_FRAMEWORKS="Foundation CoreFoundation AppKit AVKit AVFoundation CoreMedia QuartzCore CoreGraphics OpenGL IOKit GameController"
  if test "$ext_shared" = "yes"; then
    for appkit_framework in $APPKIT_FRAMEWORKS; do
      APPKIT_SHARED_LIBADD="$APPKIT_SHARED_LIBADD -framework $appkit_framework"
    done
    APPKIT_SHARED_LIBADD="$APPKIT_SHARED_LIBADD -lobjc"
    PHP_SUBST([APPKIT_SHARED_LIBADD])
  else
    for appkit_framework in $APPKIT_FRAMEWORKS; do
      PHP_ADD_FRAMEWORK([$appkit_framework])
    done
    PHP_ADD_LIBRARY([objc])
  fi
fi
