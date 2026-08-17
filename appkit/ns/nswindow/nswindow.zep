namespace AppKit\NS\NSWindow;

%{
#include "ns-window.h"
#include <stdint.h>

static HashTable *ns_window_resize_cbs = NULL;
static int ns_window_resize_invoke_depth = 0;

void ns_window_php_set_did_resize(uintptr_t window, void *callback)
{
	zval *cb = (zval *)callback;

	if (!ns_window_resize_cbs) {
		ALLOC_HASHTABLE(ns_window_resize_cbs);
		zend_hash_init(ns_window_resize_cbs, 8, NULL, ZVAL_PTR_DTOR, 0);
	}
	if (!cb || Z_TYPE_P(cb) == IS_NULL) {
		zend_hash_index_del(ns_window_resize_cbs, (zend_ulong)window);
		return;
	}
	zval copy;
	ZVAL_COPY(&copy, cb);
	zend_hash_index_update(ns_window_resize_cbs, (zend_ulong)window, &copy);
}

void ns_window_php_clear_did_resize(uintptr_t window)
{
	if (!ns_window_resize_cbs) {
		return;
	}
	zend_hash_index_del(ns_window_resize_cbs, (zend_ulong)window);
}

void ns_window_php_invoke_did_resize(uintptr_t window)
{
	zval *cb;
	zval retval;

	if (!ns_window_resize_cbs || ns_window_resize_invoke_depth > 0) {
		return;
	}
	cb = zend_hash_index_find(ns_window_resize_cbs, (zend_ulong)window);
	if (!cb) {
		return;
	}
	ns_window_resize_invoke_depth++;
	ZVAL_UNDEF(&retval);
	call_user_function(NULL, NULL, cb, &retval, 0, NULL);
	zval_ptr_dtor(&retval);
	ns_window_resize_invoke_depth--;
}
}%

/**
 * NSWindow only. Metal lives in php-io-extensions/metal. Handles are opaque ints.
 */
class NSWindow
{
    /**
     * @return int Opaque window handle, or 0 on failure
     */
    public static function create(string title, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_window_create(Z_STRVAL(title), (int) width, (int) height);
        }%
        return handle;
    }

    public static function destroy(int window) -> void
    {
        %{
            ns_window_destroy((uintptr_t) window);
        }%
    }

    public static function setTitle(int window, string title) -> void
    {
        %{
            ns_window_set_title((uintptr_t) window, Z_STRVAL(title));
        }%
    }

    public static function show(int window) -> void
    {
        %{
            ns_window_show((uintptr_t) window);
        }%
    }

    public static function hide(int window) -> void
    {
        %{
            ns_window_hide((uintptr_t) window);
        }%
    }

    public static function center(int window) -> void
    {
        %{
            ns_window_center((uintptr_t) window);
        }%
    }

    public static function shouldClose(int window) -> bool
    {
        bool result;
        %{
            result = ns_window_should_close((uintptr_t) window) == 1;
        }%
        return result;
    }

    public static function getWidth(int window) -> int
    {
        int value;
        %{
            value = (zend_long) ns_window_get_width((uintptr_t) window);
        }%
        return value;
    }

    public static function getHeight(int window) -> int
    {
        int value;
        %{
            value = (zend_long) ns_window_get_height((uintptr_t) window);
        }%
        return value;
    }

    /**
     * @return int Opaque NSView handle for contentView, or 0
     */
    public static function contentView(int window) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_window_content_view((uintptr_t) window);
        }%
        return handle;
    }

    public static function setContentView(int window, int view) -> bool
    {
        bool result;
        %{
            result = ns_window_set_content_view((uintptr_t) window, (uintptr_t) view) == 1;
        }%
        return result;
    }

    public static function makeFirstResponder(int window, int view) -> bool
    {
        bool result;
        %{
            result = ns_window_make_first_responder((uintptr_t) window, (uintptr_t) view) == 1;
        }%
        return result;
    }

    /**
     * Convert screen coordinates to content-view local coordinates.
     * @return array [x, y] on success, or empty array on failure
     */
    public static function screenToContent(int window, float screenX, float screenY) -> array
    {
        %{
            double out_x = 0.0;
            double out_y = 0.0;
            zval point;
            array_init(&point);
            if (ns_window_screen_to_content((uintptr_t) window, (double) screenX, (double) screenY, &out_x, &out_y)) {
                add_next_index_double(&point, out_x);
                add_next_index_double(&point, out_y);
            }
            RETURN_ZVAL(&point, 0, 0);
        }%
        return [];
    }

    /**
     * @return int Borrowed NSWindow pointer, or 0
     */
    public static function nsWindow(int window) -> int
    {
        int handle;
        %{
            handle = (zend_long)(uintptr_t) ns_window_nswindow((uintptr_t) window);
        }%
        return handle;
    }

    public static function tab(int window) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_window_tab((uintptr_t) window);
        }%
        return handle;
    }

    public static function tabGroup(int window) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_window_tab_group((uintptr_t) window);
        }%
        return handle;
    }

    public static function addTitlebarAccessoryViewController(int window, int controller) -> void
    {
        %{
            ns_window_add_titlebar_accessory((uintptr_t) window, (uintptr_t) controller);
        }%
    }

    /**
     * Invoked from windowDidResize: during live resize (nested NSEventTrackingRunLoopMode).
     */
    public static function setDidResize(int window, var callback) -> void
    {
        %{
            ns_window_php_set_did_resize((uintptr_t) window, (void *) callback);
        }%
    }
}
