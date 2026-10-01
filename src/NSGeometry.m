#include "runtime.h"
#include "../stubs/NSGeometry_arginfo.h"

void appkit_register_NSGeometry(void)
{
	appkit_ce_NSSize = register_class_NSSize();
	appkit_ce_NSRect = register_class_NSRect();
}

ZEND_METHOD(NSSize, __construct)
{
	double width = 0.0;
	double height = 0.0;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_DOUBLE(width)
		Z_PARAM_DOUBLE(height)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), width);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), height);
}

ZEND_METHOD(NSRect, __construct)
{
	double x = 0.0;
	double y = 0.0;
	double width = 0.0;
	double height = 0.0;

	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
		Z_PARAM_DOUBLE(width)
		Z_PARAM_DOUBLE(height)
	ZEND_PARSE_PARAMETERS_END();

	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 0), x);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 1), y);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 2), width);
	ZVAL_DOUBLE(OBJ_PROP_NUM(Z_OBJ_P(ZEND_THIS), 3), height);
}
