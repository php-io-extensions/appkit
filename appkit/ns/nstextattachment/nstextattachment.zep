namespace AppKit\NS\NSTextAttachment;

%{
#include "ns-textattachment.h"
#include <stdint.h>
#include <stddef.h>
}%


/**
 * NSTextAttachment — inline attachment in attributed text.
 */
class NSTextAttachment
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_create();
        }%
        return handle;
    }

    public static function createWithData(string data, string fileType = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_create_with_data(Z_STRVAL(data), (size_t) Z_STRLEN(data), Z_STRVAL(fileType));
        }%
        return handle;
    }

    public static function wrap(int nsTextAttachmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_wrap((void *)(uintptr_t) nsTextAttachmentPtr);
        }%
        return handle;
    }

    public static function destroy(int attachment) -> void
    {
        %{
            ns_textattachment_destroy((uintptr_t) attachment);
        }%
    }

    public static function setFileType(int attachment, string fileType) -> void
    {
        %{
            ns_textattachment_set_file_type((uintptr_t) attachment, Z_STRVAL(fileType));
        }%
    }

    public static function getFileType(int attachment) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textattachment_get_file_type((uintptr_t) attachment, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setImage(int attachment, int image) -> void
    {
        %{
            ns_textattachment_set_image((uintptr_t) attachment, (uintptr_t) image);
        }%
    }

    public static function getImage(int attachment) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_get_image((uintptr_t) attachment);
        }%
        return handle;
    }

    public static function setBounds(int attachment, float x, float y, float width, float height) -> void
    {
        %{
            ns_textattachment_set_bounds((uintptr_t) attachment, (double) x, (double) y, (double) width, (double) height);
        }%
    }

    /**
     * @return array [x, y, width, height]
     */
    public static function getBounds(int attachment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textattachment_get_bounds((uintptr_t) attachment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function setAttachmentCell(int attachment, int cell) -> void
    {
        %{
            ns_textattachment_set_attachment_cell((uintptr_t) attachment, (uintptr_t) cell);
        }%
    }

    public static function getAttachmentCell(int attachment) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_get_attachment_cell((uintptr_t) attachment);
        }%
        return handle;
    }

    public static function setLineLayoutPadding(int attachment, float padding) -> void
    {
        %{
            ns_textattachment_set_line_layout_padding((uintptr_t) attachment, (double) padding);
        }%
    }

    public static function getLineLayoutPadding(int attachment) -> float
    {
        double value;
        %{
            value = ns_textattachment_get_line_layout_padding((uintptr_t) attachment);
        }%
        return (float) value;
    }
}
