
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
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-sound.h"
#include <stdint.h>



/**
 * NSSound — named and file-based sound playback.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSound_NSSound)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSound, NSSound, appkit, ns_nssound_nssound, appkit_ns_nssound_nssound_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, soundNamed)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	
            handle = (zend_long) ns_sound_sound_named(Z_STRVAL(name));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithContentsOfFile)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool byRef;
	zval *path_param = NULL, *byRef_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(byRef)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &path_param, &byRef_param);
	zephir_get_strval(&path, path_param);
	if (!byRef_param) {
		byRef = 0;
	} else {
		}
	
            handle = (zend_long) ns_sound_create_with_contents_of_file(Z_STRVAL(path), byRef ? 1 : 0);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithContentsOfURL)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool byRef;
	zval *url_param = NULL, *byRef_param = NULL;
	zval url;

	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(url)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(byRef)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &url_param, &byRef_param);
	zephir_get_strval(&url, url_param);
	if (!byRef_param) {
		byRef = 0;
	} else {
		}
	
            handle = (zend_long) ns_sound_create_with_contents_of_url(Z_STRVAL(url), byRef ? 1 : 0);
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, wrap)
{
	zval *nsSoundPtr_param = NULL;
	zend_long nsSoundPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSoundPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSoundPtr_param);
	
            handle = (zend_long) ns_sound_wrap((void *)(uintptr_t) nsSoundPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, destroy)
{
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            ns_sound_destroy((uintptr_t) sound);
        
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, nsSound)
{
	zval *sound_param = NULL;
	zend_long sound, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            ptr = (zend_long)(uintptr_t) ns_sound_nssound((uintptr_t) sound);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, setName)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *sound_param = NULL, *name_param = NULL;
	zend_long sound;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &sound_param, &name_param);
	zephir_get_strval(&name, name_param);
	
            result = ns_sound_set_name((uintptr_t) sound, Z_STRVAL(name)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, name)
{
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_name((uintptr_t) sound, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, play)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_play((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, pause)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_pause((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, resume)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_resume((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, stop)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_stop((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, isPlaying)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_is_playing((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, duration)
{
	double value = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            value = ns_sound_duration((uintptr_t) sound);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, volume)
{
	double value = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            value = (double) ns_sound_volume((uintptr_t) sound);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, setVolume)
{
	double volume;
	zval *sound_param = NULL, *volume_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_ZVAL(volume)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sound_param, &volume_param);
	volume = zephir_get_doubleval(volume_param);
	
            ns_sound_set_volume((uintptr_t) sound, (float) volume);
        
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, currentTime)
{
	double value = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            value = ns_sound_current_time((uintptr_t) sound);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, setCurrentTime)
{
	double seconds;
	zval *sound_param = NULL, *seconds_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_ZVAL(seconds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sound_param, &seconds_param);
	seconds = zephir_get_doubleval(seconds_param);
	
            ns_sound_set_current_time((uintptr_t) sound, seconds);
        
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, loops)
{
	zend_bool result = 0;
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            result = ns_sound_loops((uintptr_t) sound) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, setLoops)
{
	zend_bool loops;
	zval *sound_param = NULL, *loops_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_BOOL(loops)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sound_param, &loops_param);
	
            ns_sound_set_loops((uintptr_t) sound, loops ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, playbackDeviceIdentifier)
{
	zval *sound_param = NULL;
	zend_long sound;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sound)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sound_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_playback_device_identifier((uintptr_t) sound, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, setPlaybackDeviceIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *sound_param = NULL, *identifier_param = NULL;
	zend_long sound;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &sound_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            ns_sound_set_playback_device_identifier((uintptr_t) sound, Z_STRVAL(identifier));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, canInitWithPasteboard)
{
	zend_bool result = 0;
	zval *pasteboard_param = NULL;
	zend_long pasteboard;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            result = ns_sound_can_init_with_pasteboard((uintptr_t) pasteboard) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, createWithPasteboard)
{
	zval *pasteboard_param = NULL;
	zend_long pasteboard, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pasteboard_param);
	
            handle = (zend_long) ns_sound_create_with_pasteboard((uintptr_t) pasteboard);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, writeToPasteboard)
{
	zval *sound_param = NULL, *pasteboard_param = NULL;
	zend_long sound, pasteboard;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sound)
		Z_PARAM_LONG(pasteboard)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sound_param, &pasteboard_param);
	
            ns_sound_write_to_pasteboard((uintptr_t) sound, (uintptr_t) pasteboard);
        
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, unfilteredTypesCount)
{
	zend_long count = 0;
	
            count = ns_sound_unfiltered_types_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSSound_NSSound, unfilteredTypeAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_sound_unfiltered_type_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

