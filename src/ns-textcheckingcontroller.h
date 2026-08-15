#ifndef PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H
#define PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcheckingcontroller_create_with_client(void *client);
uintptr_t ns_textcheckingcontroller_wrap(void *controller);
void ns_textcheckingcontroller_destroy(uintptr_t controller);
void *ns_textcheckingcontroller_nstextcheckingcontroller(uintptr_t controller);
void *ns_textcheckingcontroller_client(uintptr_t controller);

void ns_textcheckingcontroller_invalidate(uintptr_t controller);
void ns_textcheckingcontroller_did_change_text_in_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_inserted_text_in_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_did_change_selected_range(uintptr_t controller);
void ns_textcheckingcontroller_consider_text_checking_for_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_check_text_in_range(uintptr_t controller, int location, int length, unsigned long long types, uintptr_t options);
void ns_textcheckingcontroller_check_text_in_selection(uintptr_t controller);
void ns_textcheckingcontroller_check_text_in_document(uintptr_t controller);
void ns_textcheckingcontroller_order_front_substitutions_panel(uintptr_t controller);
void ns_textcheckingcontroller_check_spelling(uintptr_t controller);
void ns_textcheckingcontroller_show_guess_panel(uintptr_t controller);
void ns_textcheckingcontroller_change_spelling(uintptr_t controller);
void ns_textcheckingcontroller_ignore_spelling(uintptr_t controller);
void ns_textcheckingcontroller_update_candidates(uintptr_t controller);
int ns_textcheckingcontroller_valid_annotations_count(uintptr_t controller);
int ns_textcheckingcontroller_valid_annotation_at(uintptr_t controller, int index, char *out, int out_len);
void ns_textcheckingcontroller_set_spell_checker_document_tag(uintptr_t controller, int tag);
int ns_textcheckingcontroller_get_spell_checker_document_tag(uintptr_t controller);

/** Returns retained NSMenu handle (0 if nil). effective_location/effective_length may be NULL. */
uintptr_t ns_textcheckingcontroller_menu_at_index(uintptr_t controller, int location, int clicked_on_selection, int *effective_location, int *effective_length);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H */
