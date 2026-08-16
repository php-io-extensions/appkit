#ifndef PHP_APPKIT_NS_SPEECHRECOGNIZER_H
#define PHP_APPKIT_NS_SPEECHRECOGNIZER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_speechrecognizer_create(void);
uintptr_t ns_speechrecognizer_wrap(void *recognizer);
void ns_speechrecognizer_destroy(uintptr_t recognizer);
void *ns_speechrecognizer_nsspeechrecognizer(uintptr_t recognizer);
void ns_speechrecognizer_start_listening(uintptr_t recognizer);
void ns_speechrecognizer_stop_listening(uintptr_t recognizer);
void ns_speechrecognizer_set_commands(uintptr_t recognizer, const char **commands, int count);
int ns_speechrecognizer_commands_count(uintptr_t recognizer);
int ns_speechrecognizer_command_at(uintptr_t recognizer, int index, char *out, int out_len);
int ns_speechrecognizer_displayed_commands_title(uintptr_t recognizer, char *out, int out_len);
void ns_speechrecognizer_set_displayed_commands_title(uintptr_t recognizer, const char *title);
int ns_speechrecognizer_listens_in_foreground_only(uintptr_t recognizer);
void ns_speechrecognizer_set_listens_in_foreground_only(uintptr_t recognizer, int flag);
int ns_speechrecognizer_blocks_other_recognizers(uintptr_t recognizer);
void ns_speechrecognizer_set_blocks_other_recognizers(uintptr_t recognizer, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPEECHRECOGNIZER_H */
