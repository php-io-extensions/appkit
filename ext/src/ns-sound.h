#ifndef PHP_APPKIT_NS_SOUND_H
#define PHP_APPKIT_NS_SOUND_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_sound_sound_named(const char *name);
uintptr_t ns_sound_create_with_contents_of_file(const char *path, int by_ref);
uintptr_t ns_sound_create_with_contents_of_url(const char *url, int by_ref);
uintptr_t ns_sound_wrap(void *sound);
void ns_sound_destroy(uintptr_t sound);
void *ns_sound_nssound(uintptr_t sound);
int ns_sound_set_name(uintptr_t sound, const char *name);
int ns_sound_name(uintptr_t sound, char *out, int out_len);
int ns_sound_play(uintptr_t sound);
int ns_sound_pause(uintptr_t sound);
int ns_sound_resume(uintptr_t sound);
int ns_sound_stop(uintptr_t sound);
int ns_sound_is_playing(uintptr_t sound);
double ns_sound_duration(uintptr_t sound);
float ns_sound_volume(uintptr_t sound);
void ns_sound_set_volume(uintptr_t sound, float volume);
double ns_sound_current_time(uintptr_t sound);
void ns_sound_set_current_time(uintptr_t sound, double seconds);
int ns_sound_loops(uintptr_t sound);
void ns_sound_set_loops(uintptr_t sound, int loops);
int ns_sound_playback_device_identifier(uintptr_t sound, char *out, int out_len);
void ns_sound_set_playback_device_identifier(uintptr_t sound, const char *identifier);
int ns_sound_can_init_with_pasteboard(uintptr_t pasteboard);
uintptr_t ns_sound_create_with_pasteboard(uintptr_t pasteboard);
void ns_sound_write_to_pasteboard(uintptr_t sound, uintptr_t pasteboard);
int ns_sound_unfiltered_types_count(void);
int ns_sound_unfiltered_type_at(int index, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SOUND_H */
