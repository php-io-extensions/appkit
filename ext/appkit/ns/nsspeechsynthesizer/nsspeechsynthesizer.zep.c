
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
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"

#include "ns-speechsynthesizer.h"
#include <stdint.h>



/**
 * NSSpeechSynthesizer — text-to-speech (deprecated on macOS 14; use AVSpeechSynthesizer for new code).
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSpeechSynthesizer, NSSpeechSynthesizer, appkit, ns_nsspeechsynthesizer_nsspeechsynthesizer, appkit_ns_nsspeechsynthesizer_nsspeechsynthesizer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *voice_param = NULL;
	zval voice;

	ZVAL_UNDEF(&voice);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(voice)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &voice_param);
	if (!voice_param) {
		ZEPHIR_INIT_VAR(&voice);
		ZVAL_STRING(&voice, "");
	} else {
		zephir_get_strval(&voice, voice_param);
	}
	
            handle = (zend_long) ns_speechsynthesizer_create(Z_STRVAL(voice));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, wrap)
{
	zval *nsSpeechSynthesizerPtr_param = NULL;
	zend_long nsSpeechSynthesizerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsSpeechSynthesizerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsSpeechSynthesizerPtr_param);
	
            handle = (zend_long) ns_speechsynthesizer_wrap((void *)(uintptr_t) nsSpeechSynthesizerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, destroy)
{
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            ns_speechsynthesizer_destroy((uintptr_t) synthesizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, nsSpeechSynthesizer)
{
	zval *synthesizer_param = NULL;
	zend_long synthesizer, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            ptr = (zend_long)(uintptr_t) ns_speechsynthesizer_nsspeechsynthesizer((uintptr_t) synthesizer);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, startSpeakingString)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *synthesizer_param = NULL, *text_param = NULL;
	zend_long synthesizer;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &synthesizer_param, &text_param);
	zephir_get_strval(&text, text_param);
	
            result = ns_speechsynthesizer_start_speaking_string((uintptr_t) synthesizer, Z_STRVAL(text)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, startSpeakingStringToURL)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text, url;
	zval *synthesizer_param = NULL, *text_param = NULL, *url_param = NULL;
	zend_long synthesizer;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&url);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_STR(text)
		Z_PARAM_STR(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &synthesizer_param, &text_param, &url_param);
	zephir_get_strval(&text, text_param);
	zephir_get_strval(&url, url_param);
	
            result = ns_speechsynthesizer_start_speaking_string_to_url((uintptr_t) synthesizer, Z_STRVAL(text), Z_STRVAL(url)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, isSpeaking)
{
	zend_bool result = 0;
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            result = ns_speechsynthesizer_is_speaking((uintptr_t) synthesizer) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, stopSpeaking)
{
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            ns_speechsynthesizer_stop_speaking((uintptr_t) synthesizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, stopSpeakingAtBoundary)
{
	zval *synthesizer_param = NULL, *boundary_param = NULL;
	zend_long synthesizer, boundary;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_LONG(boundary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &synthesizer_param, &boundary_param);
	
            ns_speechsynthesizer_stop_speaking_at_boundary((uintptr_t) synthesizer, (int) boundary);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, pauseSpeakingAtBoundary)
{
	zval *synthesizer_param = NULL, *boundary_param = NULL;
	zend_long synthesizer, boundary;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_LONG(boundary)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &synthesizer_param, &boundary_param);
	
            ns_speechsynthesizer_pause_speaking_at_boundary((uintptr_t) synthesizer, (int) boundary);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, continueSpeaking)
{
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            ns_speechsynthesizer_continue_speaking((uintptr_t) synthesizer);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, voice)
{
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_voice((uintptr_t) synthesizer, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, setVoice)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval voice;
	zval *synthesizer_param = NULL, *voice_param = NULL;
	zend_long synthesizer;

	ZVAL_UNDEF(&voice);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_STR(voice)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &synthesizer_param, &voice_param);
	zephir_get_strval(&voice, voice_param);
	
            result = ns_speechsynthesizer_set_voice((uintptr_t) synthesizer, Z_STRVAL(voice)) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, rate)
{
	double value = 0;
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            value = (double) ns_speechsynthesizer_rate((uintptr_t) synthesizer);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, setRate)
{
	double rate;
	zval *synthesizer_param = NULL, *rate_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_ZVAL(rate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &synthesizer_param, &rate_param);
	rate = zephir_get_doubleval(rate_param);
	
            ns_speechsynthesizer_set_rate((uintptr_t) synthesizer, (float) rate);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, volume)
{
	double value = 0;
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            value = (double) ns_speechsynthesizer_volume((uintptr_t) synthesizer);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, setVolume)
{
	double volume;
	zval *synthesizer_param = NULL, *volume_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_ZVAL(volume)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &synthesizer_param, &volume_param);
	volume = zephir_get_doubleval(volume_param);
	
            ns_speechsynthesizer_set_volume((uintptr_t) synthesizer, (float) volume);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, usesFeedbackWindow)
{
	zend_bool result = 0;
	zval *synthesizer_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(synthesizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &synthesizer_param);
	
            result = ns_speechsynthesizer_uses_feedback_window((uintptr_t) synthesizer) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, setUsesFeedbackWindow)
{
	zend_bool flag;
	zval *synthesizer_param = NULL, *flag_param = NULL;
	zend_long synthesizer;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &synthesizer_param, &flag_param);
	
            ns_speechsynthesizer_set_uses_feedback_window((uintptr_t) synthesizer, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, phonemesFromText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *synthesizer_param = NULL, *text_param = NULL;
	zend_long synthesizer;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(synthesizer)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &synthesizer_param, &text_param);
	zephir_get_strval(&text, text_param);
	
            char buf[8192];
            buf[0] = '\0';
            if (ns_speechsynthesizer_phonemes_from_text((uintptr_t) synthesizer, Z_STRVAL(text), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, isAnyApplicationSpeaking)
{
	zend_bool result = 0;
	
            result = ns_speechsynthesizer_is_any_application_speaking() == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, defaultVoice)
{

	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_default_voice(buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, availableVoicesCount)
{
	zend_long count = 0;
	
            count = ns_speechsynthesizer_available_voices_count();
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, availableVoiceAt)
{
	zval *index_param = NULL;
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_available_voice_at((int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpeechSynthesizer_NSSpeechSynthesizer, attributeForVoice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *voice_param = NULL, *key_param = NULL;
	zval voice, key;

	ZVAL_UNDEF(&voice);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(voice)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &voice_param, &key_param);
	zephir_get_strval(&voice, voice_param);
	zephir_get_strval(&key, key_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_speechsynthesizer_attribute_for_voice(Z_STRVAL(voice), Z_STRVAL(key), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_MM_STRING("");
}

