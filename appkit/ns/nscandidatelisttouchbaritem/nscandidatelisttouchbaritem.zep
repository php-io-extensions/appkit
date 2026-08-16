namespace AppKit\NS\NSCandidateListTouchBarItem;

%{
#include "ns-candidatelisttouchbaritem.h"
#include <stdint.h>
}%

/** NSCandidateListTouchBarItem */
class NSCandidateListTouchBarItem
{
    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_candidatelisttouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
    public static function wrap(int ptr) -> int
    {
        int handle;
        %{ handle = (zend_long) ns_candidatelisttouchbaritem_wrap((void *)(uintptr_t) ptr); }%
        return handle;
    }
    public static function destroy(int item) -> void
    {
        %{ ns_candidatelisttouchbaritem_destroy((uintptr_t) item); }%
    }
    public static function nsCandidateListTouchBarItem(int item) -> int
    {
        int ptr;
        %{ ptr = (zend_long)(uintptr_t) ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem((uintptr_t) item); }%
        return ptr;
    }

    public static function setCollapsed(int item, bool flag) -> void { %{ ns_candidatelisttouchbaritem_set_collapsed((uintptr_t) item, flag ? 1 : 0); }% }
    public static function isCollapsed(int item) -> bool { bool r; %{ r = ns_candidatelisttouchbaritem_is_collapsed((uintptr_t) item) == 1; }% return r; }
    public static function setCandidates(int item, array candidates) -> void { %{
            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(candidates), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
        ns_candidatelisttouchbaritem_set_candidates((uintptr_t) item, cstrings, count);
    }% }
    public static function getCandidates(int item) -> array { array out = []; %{
        int count = ns_candidatelisttouchbaritem_candidates_count((uintptr_t) item); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\0'; if (ns_candidatelisttouchbaritem_candidate_at((uintptr_t) item, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
}
