#ifndef PHP_APPKIT_NS_SPELLCHECKER_H
#define PHP_APPKIT_NS_SPELLCHECKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_spellchecker_shared(void);
void ns_spellchecker_destroy(uintptr_t checker);
int ns_spellchecker_unique_spell_document_tag(void);
void ns_spellchecker_check_spelling(uintptr_t checker, const char *string, int starting_at, int *location, int *length);
int ns_spellchecker_count_words_in_string(uintptr_t checker, const char *string, const char *language);
void ns_spellchecker_ignore_word(uintptr_t checker, const char *word, int tag);
int ns_spellchecker_ignored_words_count(uintptr_t checker, int tag);
int ns_spellchecker_ignored_word_at(uintptr_t checker, int tag, int index, char *out, int out_len);
void ns_spellchecker_update_spelling_panel_with_misspelled_word(uintptr_t checker, const char *word);
void ns_spellchecker_update_panels(uintptr_t checker);
int ns_spellchecker_is_automatic_spelling_correction_enabled(uintptr_t checker);
void ns_spellchecker_set_automatic_spelling_correction_enabled(uintptr_t checker, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPELLCHECKER_H */
