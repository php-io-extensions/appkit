/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 3067bb6e445658dfbbd46fd8dfe84f8b664b3d51 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSFont_systemFontOfSizeWeight, 0, 2, NSFont, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSFont_fontWithNameSize, 0, 2, NSFont, 1)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSFont_pointSize, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSFont_familyName, 0, 0, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSFontManager_sharedFontManager, 0, 0, NSFontManager, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSFontManager_fontWithFamilyTraitsWeightSize, 0, 4, NSFont, 1)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, traits, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSFontManager_weightOfFont, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, font, NSFont, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSFont, systemFontOfSizeWeight);
ZEND_METHOD(NSFont, fontWithNameSize);
ZEND_METHOD(NSFont, pointSize);
ZEND_METHOD(NSFont, familyName);
ZEND_METHOD(NSFontManager, sharedFontManager);
ZEND_METHOD(NSFontManager, fontWithFamilyTraitsWeightSize);
ZEND_METHOD(NSFontManager, weightOfFont);

static const zend_function_entry class_NSFont_methods[] = {
	ZEND_ME(NSFont, systemFontOfSizeWeight, arginfo_class_NSFont_systemFontOfSizeWeight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSFont, fontWithNameSize, arginfo_class_NSFont_fontWithNameSize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSFont, pointSize, arginfo_class_NSFont_pointSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSFont, familyName, arginfo_class_NSFont_familyName, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSFontManager_methods[] = {
	ZEND_ME(NSFontManager, sharedFontManager, arginfo_class_NSFontManager_sharedFontManager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSFontManager, fontWithFamilyTraitsWeightSize, arginfo_class_NSFontManager_fontWithFamilyTraitsWeightSize, ZEND_ACC_PUBLIC)
	ZEND_ME(NSFontManager, weightOfFont, arginfo_class_NSFontManager_weightOfFont, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSFont(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSFont", class_NSFont_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	zval const_WEIGHT_ULTRA_LIGHT_value;
	ZVAL_DOUBLE(&const_WEIGHT_ULTRA_LIGHT_value, NSFontWeightUltraLight);
	zend_string *const_WEIGHT_ULTRA_LIGHT_name = zend_string_init_interned("WEIGHT_ULTRA_LIGHT", sizeof("WEIGHT_ULTRA_LIGHT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_ULTRA_LIGHT_name, &const_WEIGHT_ULTRA_LIGHT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_ULTRA_LIGHT_name);

	zval const_WEIGHT_THIN_value;
	ZVAL_DOUBLE(&const_WEIGHT_THIN_value, NSFontWeightThin);
	zend_string *const_WEIGHT_THIN_name = zend_string_init_interned("WEIGHT_THIN", sizeof("WEIGHT_THIN") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_THIN_name, &const_WEIGHT_THIN_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_THIN_name);

	zval const_WEIGHT_LIGHT_value;
	ZVAL_DOUBLE(&const_WEIGHT_LIGHT_value, NSFontWeightLight);
	zend_string *const_WEIGHT_LIGHT_name = zend_string_init_interned("WEIGHT_LIGHT", sizeof("WEIGHT_LIGHT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_LIGHT_name, &const_WEIGHT_LIGHT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_LIGHT_name);

	zval const_WEIGHT_REGULAR_value;
	ZVAL_DOUBLE(&const_WEIGHT_REGULAR_value, NSFontWeightRegular);
	zend_string *const_WEIGHT_REGULAR_name = zend_string_init_interned("WEIGHT_REGULAR", sizeof("WEIGHT_REGULAR") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_REGULAR_name, &const_WEIGHT_REGULAR_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_REGULAR_name);

	zval const_WEIGHT_MEDIUM_value;
	ZVAL_DOUBLE(&const_WEIGHT_MEDIUM_value, NSFontWeightMedium);
	zend_string *const_WEIGHT_MEDIUM_name = zend_string_init_interned("WEIGHT_MEDIUM", sizeof("WEIGHT_MEDIUM") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_MEDIUM_name, &const_WEIGHT_MEDIUM_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_MEDIUM_name);

	zval const_WEIGHT_SEMIBOLD_value;
	ZVAL_DOUBLE(&const_WEIGHT_SEMIBOLD_value, NSFontWeightSemibold);
	zend_string *const_WEIGHT_SEMIBOLD_name = zend_string_init_interned("WEIGHT_SEMIBOLD", sizeof("WEIGHT_SEMIBOLD") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_SEMIBOLD_name, &const_WEIGHT_SEMIBOLD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_SEMIBOLD_name);

	zval const_WEIGHT_BOLD_value;
	ZVAL_DOUBLE(&const_WEIGHT_BOLD_value, NSFontWeightBold);
	zend_string *const_WEIGHT_BOLD_name = zend_string_init_interned("WEIGHT_BOLD", sizeof("WEIGHT_BOLD") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_BOLD_name, &const_WEIGHT_BOLD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_BOLD_name);

	zval const_WEIGHT_HEAVY_value;
	ZVAL_DOUBLE(&const_WEIGHT_HEAVY_value, NSFontWeightHeavy);
	zend_string *const_WEIGHT_HEAVY_name = zend_string_init_interned("WEIGHT_HEAVY", sizeof("WEIGHT_HEAVY") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_HEAVY_name, &const_WEIGHT_HEAVY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_HEAVY_name);

	zval const_WEIGHT_BLACK_value;
	ZVAL_DOUBLE(&const_WEIGHT_BLACK_value, NSFontWeightBlack);
	zend_string *const_WEIGHT_BLACK_name = zend_string_init_interned("WEIGHT_BLACK", sizeof("WEIGHT_BLACK") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WEIGHT_BLACK_name, &const_WEIGHT_BLACK_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_DOUBLE));
	zend_string_release(const_WEIGHT_BLACK_name);

	return class_entry;
}

static zend_class_entry *register_class_NSFontManager(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSFontManager", class_NSFontManager_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
