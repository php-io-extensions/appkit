#ifndef PHP_APPKIT_NS_OBJECTCONTROLLER_H
#define PHP_APPKIT_NS_OBJECTCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_objectcontroller_create(void);
uintptr_t ns_objectcontroller_create_with_content(void *content);
uintptr_t ns_objectcontroller_wrap(void *controller);
void ns_objectcontroller_destroy(uintptr_t controller);
void *ns_objectcontroller_nsobjectcontroller(uintptr_t controller);
void ns_objectcontroller_discard_editing(uintptr_t controller);
int ns_objectcontroller_commit_editing(uintptr_t controller);
int ns_objectcontroller_is_editing(uintptr_t controller);
void ns_objectcontroller_set_content(uintptr_t controller, void *content);
void *ns_objectcontroller_content(uintptr_t controller);
void *ns_objectcontroller_selection(uintptr_t controller);
int ns_objectcontroller_selected_objects_count(uintptr_t controller);
void *ns_objectcontroller_selected_object_at(uintptr_t controller, int index);
void ns_objectcontroller_set_automatically_prepares_content(uintptr_t controller, int value);
int ns_objectcontroller_automatically_prepares_content(uintptr_t controller);
void ns_objectcontroller_prepare_content(uintptr_t controller);
void ns_objectcontroller_set_object_class_name(uintptr_t controller, const char *class_name);
int ns_objectcontroller_object_class_name(uintptr_t controller, char *out, int out_len);
void *ns_objectcontroller_new_object(uintptr_t controller);
void ns_objectcontroller_add_object(uintptr_t controller, void *object);
void ns_objectcontroller_remove_object(uintptr_t controller, void *object);
void ns_objectcontroller_set_editable(uintptr_t controller, int value);
int ns_objectcontroller_is_editable(uintptr_t controller);
int ns_objectcontroller_can_add(uintptr_t controller);
int ns_objectcontroller_can_remove(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_OBJECTCONTROLLER_H */
