#ifndef PHP_APPKIT_H
#define PHP_APPKIT_H

extern zend_module_entry appkit_module_entry;
#define phpext_appkit_ptr &appkit_module_entry

#define PHP_APPKIT_VERSION "0.10.2"

#if defined(ZTS) && defined(COMPILE_DL_APPKIT)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
