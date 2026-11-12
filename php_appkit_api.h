/*
 * The object model another extension builds on: include this, add
 * -I$(php-config --include-dir)/ext/appkit, declare ZEND_MOD_REQUIRED("appkit"),
 * and load after appkit. Its classes extend appkit's (appkit_object_setup), are
 * found by appkit's boxing (appkit_map_objc_class) and call appkit's helpers;
 * the symbols resolve against the loaded appkit.so.
 */

#ifndef PHP_APPKIT_API_H
#define PHP_APPKIT_API_H

#include "src/runtime.h"
#include "src/controls.h"

#endif
