
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

#include "ns-textattachment.h"
#include <stdint.h>
#include <stddef.h>



/**
 * NSTextAttachment — inline attachment in attributed text.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTextAttachment_NSTextAttachment)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextAttachment, NSTextAttachment, appkit, ns_nstextattachment_nstextattachment, appkit_ns_nstextattachment_nstextattachment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_textattachment_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, createWithData)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL, *fileType_param = NULL;
	zval data, fileType;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&fileType);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(fileType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &data_param, &fileType_param);
	zephir_get_strval(&data, data_param);
	if (!fileType_param) {
		ZEPHIR_INIT_VAR(&fileType);
		ZVAL_STRING(&fileType, "");
	} else {
		zephir_get_strval(&fileType, fileType_param);
	}
	
            handle = (zend_long) ns_textattachment_create_with_data(Z_STRVAL(data), (size_t) Z_STRLEN(data), Z_STRVAL(fileType));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, wrap)
{
	zval *nsTextAttachmentPtr_param = NULL;
	zend_long nsTextAttachmentPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTextAttachmentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTextAttachmentPtr_param);
	
            handle = (zend_long) ns_textattachment_wrap((void *)(uintptr_t) nsTextAttachmentPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, destroy)
{
	zval *attachment_param = NULL;
	zend_long attachment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attachment_param);
	
            ns_textattachment_destroy((uintptr_t) attachment);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setFileType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileType;
	zval *attachment_param = NULL, *fileType_param = NULL;
	zend_long attachment;

	ZVAL_UNDEF(&fileType);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(attachment)
		Z_PARAM_STR(fileType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &attachment_param, &fileType_param);
	zephir_get_strval(&fileType, fileType_param);
	
            ns_textattachment_set_file_type((uintptr_t) attachment, Z_STRVAL(fileType));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getFileType)
{
	zval *attachment_param = NULL;
	zend_long attachment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attachment_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_textattachment_get_file_type((uintptr_t) attachment, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setImage)
{
	zval *attachment_param = NULL, *image_param = NULL;
	zend_long attachment, image;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &attachment_param, &image_param);
	
            ns_textattachment_set_image((uintptr_t) attachment, (uintptr_t) image);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getImage)
{
	zval *attachment_param = NULL;
	zend_long attachment, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attachment_param);
	
            handle = (zend_long) ns_textattachment_get_image((uintptr_t) attachment);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setBounds)
{
	double x, y, width, height;
	zval *attachment_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long attachment;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(attachment)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &attachment_param, &x_param, &y_param, &width_param, &height_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_textattachment_set_bounds((uintptr_t) attachment, (double) x, (double) y, (double) width, (double) height);
        
}

/**
 * @return array [x, y, width, height]
 */
PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getBounds)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *attachment_param = NULL;
	zend_long attachment;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &attachment_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textattachment_get_bounds((uintptr_t) attachment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setAttachmentCell)
{
	zval *attachment_param = NULL, *cell_param = NULL;
	zend_long attachment, cell;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(cell)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &attachment_param, &cell_param);
	
            ns_textattachment_set_attachment_cell((uintptr_t) attachment, (uintptr_t) cell);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getAttachmentCell)
{
	zval *attachment_param = NULL;
	zend_long attachment, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attachment_param);
	
            handle = (zend_long) ns_textattachment_get_attachment_cell((uintptr_t) attachment);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, setLineLayoutPadding)
{
	double padding;
	zval *attachment_param = NULL, *padding_param = NULL;
	zend_long attachment;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(attachment)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &attachment_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	
            ns_textattachment_set_line_layout_padding((uintptr_t) attachment, (double) padding);
        
}

PHP_METHOD(AppKit_NS_NSTextAttachment_NSTextAttachment, getLineLayoutPadding)
{
	double value = 0;
	zval *attachment_param = NULL;
	zend_long attachment;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &attachment_param);
	
            value = ns_textattachment_get_line_layout_padding((uintptr_t) attachment);
        
	RETURN_DOUBLE((double) (value));
}

