namespace AppKit\NS\NSTextAttachmentCell;

%{
#include "ns-textattachmentcell.h"
#include <stdint.h>
}%


/**
 * NSTextAttachmentCell — cell drawn for an NSTextAttachment.
 */
class NSTextAttachmentCell
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextAttachmentCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_wrap((void *)(uintptr_t) nsTextAttachmentCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_textattachmentcell_destroy((uintptr_t) cell);
        }%
    }

    public static function setAttachment(int cell, int attachment) -> void
    {
        %{
            ns_textattachmentcell_set_attachment((uintptr_t) cell, (uintptr_t) attachment);
        }%
    }

    public static function getAttachment(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_get_attachment((uintptr_t) cell);
        }%
        return handle;
    }

    /**
     * @return array [width, height]
     */
    public static function cellSize(int cell) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            ns_textattachmentcell_cell_size((uintptr_t) cell, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y]
     */
    public static function cellBaselineOffset(int cell) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_textattachmentcell_cell_baseline_offset((uintptr_t) cell, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        }%
        return out;
    }
}
