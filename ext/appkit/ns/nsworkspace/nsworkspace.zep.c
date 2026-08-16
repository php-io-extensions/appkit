
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-workspace.h"
#include <stdint.h>



/**
 * NSWorkspace shared desktop workspace.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSWorkspace_NSWorkspace)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSWorkspace, NSWorkspace, appkit, ns_nsworkspace_nsworkspace, appkit_ns_nsworkspace_nsworkspace_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_workspace_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, wrap)
{
	zval *nsWorkspacePtr_param = NULL;
	zend_long nsWorkspacePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsWorkspacePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsWorkspacePtr_param);
	
            handle = (zend_long) ns_workspace_wrap((void *)(uintptr_t) nsWorkspacePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, destroy)
{
	zval *workspace_param = NULL;
	zend_long workspace;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(workspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &workspace_param);
	
            ns_workspace_destroy((uintptr_t) workspace);
        
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, nsWorkspace)
{
	zval *workspace_param = NULL;
	zend_long workspace, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(workspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &workspace_param);
	
            ptr = (zend_long)(uintptr_t) ns_workspace_nsworkspace((uintptr_t) workspace);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, openURL)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *workspace_param = NULL, *url_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &url_param);
	zephir_get_strval(&url, url_param);
	
            result = ns_workspace_open_url((uintptr_t) workspace, Z_STRVAL(url)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, selectFile)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fullPath, rootPath;
	zval *workspace_param = NULL, *fullPath_param = NULL, *rootPath_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&fullPath);
	ZVAL_UNDEF(&rootPath);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(fullPath)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(rootPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &workspace_param, &fullPath_param, &rootPath_param);
	zephir_get_strval(&fullPath, fullPath_param);
	if (!rootPath_param) {
		ZEPHIR_INIT_VAR(&rootPath);
		ZVAL_STRING(&rootPath, "");
	} else {
		zephir_get_strval(&rootPath, rootPath_param);
	}
	
            result = ns_workspace_select_file((uintptr_t) workspace, Z_STRVAL(fullPath), Z_STRVAL(rootPath)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, showSearchResults)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval query;
	zval *workspace_param = NULL, *query_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&query);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &query_param);
	zephir_get_strval(&query, query_param);
	
            result = ns_workspace_show_search_results((uintptr_t) workspace, Z_STRVAL(query)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, isFilePackage)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *workspace_param = NULL, *path_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            result = ns_workspace_is_file_package((uintptr_t) workspace, Z_STRVAL(path)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, iconForFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *workspace_param = NULL, *path_param = NULL;
	zend_long workspace, handle = 0;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            handle = (zend_long) ns_workspace_icon_for_file((uintptr_t) workspace, Z_STRVAL(path));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, hideOtherApplications)
{
	zval *workspace_param = NULL;
	zend_long workspace;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(workspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &workspace_param);
	
            ns_workspace_hide_other_applications((uintptr_t) workspace);
        
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationWithBundleIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval bundleId;
	zval *workspace_param = NULL, *bundleId_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&bundleId);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(bundleId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &bundleId_param);
	zephir_get_strval(&bundleId, bundleId_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_url_for_application_with_bundle_id((uintptr_t) workspace, Z_STRVAL(bundleId), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, urlForApplicationToOpenURL)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *workspace_param = NULL, *url_param = NULL;
	zend_long workspace;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &workspace_param, &url_param);
	zephir_get_strval(&url, url_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_url_for_application_to_open_url((uintptr_t) workspace, Z_STRVAL(url), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, frontmostApplicationName)
{
	zval *workspace_param = NULL;
	zend_long workspace;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(workspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &workspace_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_workspace_frontmost_application_name((uintptr_t) workspace, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationsCount)
{
	zval *workspace_param = NULL;
	zend_long workspace, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(workspace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &workspace_param);
	
            count = ns_workspace_running_applications_count((uintptr_t) workspace);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSWorkspace_NSWorkspace, runningApplicationAt)
{
	zval *workspace_param = NULL, *index_param = NULL;
	zend_long workspace, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(workspace)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &workspace_param, &index_param);
	
            handle = (zend_long) ns_workspace_running_application_at((uintptr_t) workspace, (int) index);
        
	RETURN_LONG(handle);
}

