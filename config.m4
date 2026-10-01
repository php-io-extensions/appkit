PHP_ARG_ENABLE([appkit],
  [whether to enable appkit support],
  [AS_HELP_STRING([--enable-appkit], [Enable AppKit bindings])],
  [no])

if test "$PHP_APPKIT" != "no"; then
  case $host_os in
    darwin*) ;;
    *) AC_MSG_ERROR([appkit binds AppKit, which only macOS provides]) ;;
  esac

  if test "$ext_shared" != "yes"; then
    AC_MSG_ERROR([appkit builds as a shared extension only])
  fi

  APPKIT_SOURCES="src/appkit.m src/runtime.m src/NSObject.m src/NSApplication.m src/NSEvent.m src/NSDate.m src/CFType.m src/CFRunLoop.m src/CFFileDescriptor.m src/NSGeometry.m src/NSView.m src/NSWindow.m src/NSMenu.m src/ObjCGlue.m"

  dnl No C sources: every translation unit is Objective-C, compiled by the rules below.
  PHP_NEW_EXTENSION([appkit], [], [$ext_shared],, [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])

  dnl PHP_ADD_SOURCES only knows .c/.s/.S/.cpp, so the .m rules are written the way it
  dnl writes a .c rule, with the ObjC flags added. -fno-objc-arc: retain/release are explicit.
  for appkit_src in $APPKIT_SOURCES; do
    appkit_obj=$(echo "$appkit_src" | $SED -e 's/\.m$//')
    shared_objects_appkit="$shared_objects_appkit $appkit_obj.lo"
    cat >>Makefile.objects<<EOF
-include $appkit_obj.dep
$appkit_obj.lo: $abs_srcdir/$appkit_src
	$shared_c_pre -I. -I$abs_srcdir $shared_c_meta -DZEND_COMPILE_DL_EXT=1 -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -x objective-c -fno-objc-arc -fobjc-exceptions -Wno-unused-parameter -c $abs_srcdir/$appkit_src -o $appkit_obj.lo $shared_c_post -MMD -MF $appkit_obj.dep -MT $appkit_obj.lo
EOF
  done

  APPKIT_SHARED_LIBADD="-framework Foundation -framework CoreFoundation -framework AppKit -lobjc"
  PHP_SUBST([APPKIT_SHARED_LIBADD])
fi
