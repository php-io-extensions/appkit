PHP_ARG_ENABLE(appkit, whether to enable appkit, [ --enable-appkit   Enable Appkit])

if test "$PHP_APPKIT" = "yes"; then

	

	if ! test "x-framework Foundation -framework AppKit -framework QuartzCore" = "x"; then
		PHP_EVAL_LIBLINE(-framework Foundation -framework AppKit -framework QuartzCore, APPKIT_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_APPKIT, 1, [Whether you have Appkit])
	appkit_sources="appkit.c kernel/main.c kernel/memory.c kernel/exception.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c appkit/bridge/bridge.zep.c
	src/ns-bridge.m
	src/ns-extra.m"
	PHP_NEW_EXTENSION(appkit, $appkit_sources, $ext_shared,, -fobjc-arc -Wno-deprecated-declarations)
	PHP_ADD_BUILD_DIR([$ext_builddir/kernel/])
	for dir in "appkit/bridge"; do
		PHP_ADD_BUILD_DIR([$ext_builddir/$dir])
	done
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
