#ifndef PHP_APPKIT_NS_SPEECHSYNTHESIZER_H
#define PHP_APPKIT_NS_SPEECHSYNTHESIZER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_speechsynthesizer_create(const char *voice);
uintptr_t ns_speechsynthesizer_wrap(void *synthesizer);
void ns_speechsynthesizer_destroy(uintptr_t synthesizer);
void *ns_speechsynthesizer_nsspeechsynthesizer(uintptr_t synthesizer);
int ns_speechsynthesizer_start_speaking_string(uintptr_t synthesizer, const char *string);
int ns_speechsynthesizer_start_speaking_string_to_url(uintptr_t synthesizer, const char *string, const char *url);
int ns_speechsynthesizer_is_speaking(uintptr_t synthesizer);
void ns_speechsynthesizer_stop_speaking(uintptr_t synthesizer);
void ns_speechsynthesizer_stop_speaking_at_boundary(uintptr_t synthesizer, int boundary);
void ns_speechsynthesizer_pause_speaking_at_boundary(uintptr_t synthesizer, int boundary);
void ns_speechsynthesizer_continue_speaking(uintptr_t synthesizer);
int ns_speechsynthesizer_voice(uintptr_t synthesizer, char *out, int out_len);
int ns_speechsynthesizer_set_voice(uintptr_t synthesizer, const char *voice);
float ns_speechsynthesizer_rate(uintptr_t synthesizer);
void ns_speechsynthesizer_set_rate(uintptr_t synthesizer, float rate);
float ns_speechsynthesizer_volume(uintptr_t synthesizer);
void ns_speechsynthesizer_set_volume(uintptr_t synthesizer, float volume);
int ns_speechsynthesizer_uses_feedback_window(uintptr_t synthesizer);
void ns_speechsynthesizer_set_uses_feedback_window(uintptr_t synthesizer, int flag);
int ns_speechsynthesizer_phonemes_from_text(uintptr_t synthesizer, const char *text, char *out, int out_len);
int ns_speechsynthesizer_is_any_application_speaking(void);
int ns_speechsynthesizer_default_voice(char *out, int out_len);
int ns_speechsynthesizer_available_voices_count(void);
int ns_speechsynthesizer_available_voice_at(int index, char *out, int out_len);
int ns_speechsynthesizer_attribute_for_voice(const char *voice, const char *key, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPEECHSYNTHESIZER_H */
