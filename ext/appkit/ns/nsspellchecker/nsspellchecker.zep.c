
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

#include "ns-spellchecker.h"
#include <stdint.h>



/**
 * NSSpellChecker — shared spelling service.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSSpellChecker_NSSpellChecker)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSpellChecker, NSSpellChecker, appkit, ns_nsspellchecker_nsspellchecker, appkit_ns_nsspellchecker_nsspellchecker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, shared)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_spellchecker_shared();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, destroy)
{
	zval *checker_param = NULL;
	zend_long checker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(checker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &checker_param);
	
            ns_spellchecker_destroy((uintptr_t) checker);
        
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, uniqueSpellDocumentTag)
{
	zend_long value = 0;
	
            value = (zend_long) ns_spellchecker_unique_spell_document_tag();
        
	RETURN_LONG(value);
}

/**
 * @return array [location, length] — location is -1 when NSNotFound
 */
PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, checkSpelling)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *checker_param = NULL, *text_param = NULL, *startingAt_param = NULL;
	zend_long checker, startingAt;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(checker)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(startingAt)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &checker_param, &text_param, &startingAt_param);
	zephir_get_strval(&text, text_param);
	if (!startingAt_param) {
		startingAt = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            int location = 0, length = 0;
            ns_spellchecker_check_spelling((uintptr_t) checker, Z_STRVAL(text), (int) startingAt, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, countWordsInString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text, language;
	zval *checker_param = NULL, *text_param = NULL, *language_param = NULL;
	zend_long checker, value = 0;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&language);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(checker)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(language)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &checker_param, &text_param, &language_param);
	zephir_get_strval(&text, text_param);
	if (!language_param) {
		ZEPHIR_INIT_VAR(&language);
		ZVAL_STRING(&language, "");
	} else {
		zephir_get_strval(&language, language_param);
	}
	
            value = (zend_long) ns_spellchecker_count_words_in_string((uintptr_t) checker, Z_STRVAL(text), Z_STRVAL(language));
        
	RETURN_MM_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoreWord)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval word;
	zval *checker_param = NULL, *word_param = NULL, *tag_param = NULL;
	zend_long checker, tag;

	ZVAL_UNDEF(&word);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(checker)
		Z_PARAM_STR(word)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &checker_param, &word_param, &tag_param);
	zephir_get_strval(&word, word_param);
	
            ns_spellchecker_ignore_word((uintptr_t) checker, Z_STRVAL(word), (int) tag);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsCount)
{
	zval *checker_param = NULL, *tag_param = NULL;
	zend_long checker, tag, value = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(checker)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &checker_param, &tag_param);
	
            value = (zend_long) ns_spellchecker_ignored_words_count((uintptr_t) checker, (int) tag);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, ignoredWordsAt)
{
	zval *checker_param = NULL, *tag_param = NULL, *index_param = NULL;
	zend_long checker, tag, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(checker)
		Z_PARAM_LONG(tag)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &checker_param, &tag_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_spellchecker_ignored_word_at((uintptr_t) checker, (int) tag, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, updateSpellingPanelWithMisspelledWord)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval word;
	zval *checker_param = NULL, *word_param = NULL;
	zend_long checker;

	ZVAL_UNDEF(&word);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(checker)
		Z_PARAM_STR(word)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &checker_param, &word_param);
	zephir_get_strval(&word, word_param);
	
            ns_spellchecker_update_spelling_panel_with_misspelled_word((uintptr_t) checker, Z_STRVAL(word));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, updatePanels)
{
	zval *checker_param = NULL;
	zend_long checker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(checker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &checker_param);
	
            ns_spellchecker_update_panels((uintptr_t) checker);
        
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, isAutomaticSpellingCorrectionEnabled)
{
	zend_bool result = 0;
	zval *checker_param = NULL;
	zend_long checker;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(checker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &checker_param);
	
            result = ns_spellchecker_is_automatic_spelling_correction_enabled((uintptr_t) checker) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSSpellChecker_NSSpellChecker, setAutomaticSpellingCorrectionEnabled)
{
	zend_bool flag;
	zval *checker_param = NULL, *flag_param = NULL;
	zend_long checker;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(checker)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &checker_param, &flag_param);
	
            ns_spellchecker_set_automatic_spelling_correction_enabled((uintptr_t) checker, flag ? 1 : 0);
        
}

