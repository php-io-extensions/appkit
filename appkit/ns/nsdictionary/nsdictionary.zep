namespace AppKit\NS\NSDictionary;

%{
#include "ns-dictionary.h"
#include <stdint.h>
}%

/**
 * NSDictionary — Foundation key/value collections (mutable build, immutable copy).
 */
class NSDictionary
{
    public static function createMutable() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionary_create_mutable();
        }%
        return handle;
    }

    public static function wrap(int nsDictionaryPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionary_wrap((void *)(uintptr_t) nsDictionaryPtr);
        }%
        return handle;
    }

    public static function destroy(int dictionary) -> void
    {
        %{
            ns_dictionary_destroy((uintptr_t) dictionary);
        }%
    }

    public static function nsDictionary(int dictionary) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_dictionary_nsdictionary((uintptr_t) dictionary);
        }%
        return ptr;
    }

    public static function count(int dictionary) -> int
    {
        int value;
        %{
            value = (zend_long) ns_dictionary_count((uintptr_t) dictionary);
        }%
        return value;
    }

    public static function setString(int dictionary, string key, string value) -> void
    {
        %{
            ns_dictionary_set_string((uintptr_t) dictionary, Z_STRVAL(key), Z_STRVAL(value));
        }%
    }

    public static function getString(int dictionary, string key) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionary_get_string((uintptr_t) dictionary, Z_STRVAL(key), buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setInt(int dictionary, string key, int value) -> void
    {
        %{
            ns_dictionary_set_int((uintptr_t) dictionary, Z_STRVAL(key), (long long) value);
        }%
    }

    public static function getInt(int dictionary, string key) -> int
    {
        int value = 0;
        %{
            long long out = 0;
            if (ns_dictionary_get_int((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                value = (zend_long) out;
            }
        }%
        return value;
    }

    public static function setDouble(int dictionary, string key, double value) -> void
    {
        %{
            ns_dictionary_set_double((uintptr_t) dictionary, Z_STRVAL(key), (double) value);
        }%
    }

    public static function getDouble(int dictionary, string key) -> double
    {
        double value = 0.0;
        %{
            double out = 0.0;
            if (ns_dictionary_get_double((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                value = out;
            }
        }%
        return value;
    }

    public static function setBool(int dictionary, string key, bool value) -> void
    {
        %{
            ns_dictionary_set_bool((uintptr_t) dictionary, Z_STRVAL(key), value ? 1 : 0);
        }%
    }

    public static function isTrue(int dictionary, string key) -> bool
    {
        bool result = false;
        %{
            int out = 0;
            if (ns_dictionary_get_bool((uintptr_t) dictionary, Z_STRVAL(key), &out)) {
                result = out == 1;
            }
        }%
        return result;
    }

    public static function setDictionary(int dictionary, string key, int valueDictionary) -> void
    {
        %{
            ns_dictionary_set_dictionary((uintptr_t) dictionary, Z_STRVAL(key), (uintptr_t) valueDictionary);
        }%
    }

    public static function getDictionary(int dictionary, string key) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionary_get_dictionary((uintptr_t) dictionary, Z_STRVAL(key));
        }%
        return handle;
    }

    public static function hasKey(int dictionary, string key) -> bool
    {
        bool result;
        %{
            result = ns_dictionary_has_key((uintptr_t) dictionary, Z_STRVAL(key)) == 1;
        }%
        return result;
    }

    public static function copyImmutable(int dictionary) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_dictionary_copy_immutable((uintptr_t) dictionary);
        }%
        return handle;
    }

    /**
     * Build a mutable dictionary from a PHP associative array.
     * Supports string, int, float, bool values and nested arrays.
     */
    public static function fromArray(array data) -> int
    {
        int handle = 0;
        %{
            zval *val;
            zend_string *key;
            handle = (zend_long) ns_dictionary_create_mutable();
            ZEND_HASH_FOREACH_STR_KEY_VAL(Z_ARRVAL(data), key, val) {
                if (!key) {
                    continue;
                }
                switch (Z_TYPE_P(val)) {
                    case IS_STRING:
                        ns_dictionary_set_string((uintptr_t) handle, ZSTR_VAL(key), Z_STRVAL_P(val));
                        break;
                    case IS_LONG:
                        ns_dictionary_set_int((uintptr_t) handle, ZSTR_VAL(key), (long long) Z_LVAL_P(val));
                        break;
                    case IS_DOUBLE:
                        ns_dictionary_set_double((uintptr_t) handle, ZSTR_VAL(key), Z_DVAL_P(val));
                        break;
                    case IS_TRUE:
                        ns_dictionary_set_bool((uintptr_t) handle, ZSTR_VAL(key), 1);
                        break;
                    case IS_FALSE:
                        ns_dictionary_set_bool((uintptr_t) handle, ZSTR_VAL(key), 0);
                        break;
                    default:
                        break;
                }
            } ZEND_HASH_FOREACH_END();
        }%
        return handle;
    }

    /**
     * Export string/int/double/bool values to a PHP array (string keys only).
     */
    public static function toArray(int dictionary) -> array
    {
        array out = [];
        %{
            int count = ns_dictionary_keys_count((uintptr_t) dictionary);
            int i;
            for (i = 0; i < count; i++) {
                char key[4096];
                char strbuf[4096];
                long long ivalue = 0;
                double dvalue = 0.0;
                int bvalue = 0;
                key[0] = '\0';
                if (!ns_dictionary_key_at((uintptr_t) dictionary, i, key, (int) sizeof(key))) {
                    continue;
                }
                strbuf[0] = '\0';
                if (ns_dictionary_get_string((uintptr_t) dictionary, key, strbuf, (int) sizeof(strbuf))) {
                    add_assoc_string(&out, key, strbuf);
                    continue;
                }
                if (ns_dictionary_get_int((uintptr_t) dictionary, key, &ivalue)) {
                    add_assoc_long(&out, key, (zend_long) ivalue);
                    continue;
                }
                if (ns_dictionary_get_double((uintptr_t) dictionary, key, &dvalue)) {
                    add_assoc_double(&out, key, dvalue);
                    continue;
                }
                if (ns_dictionary_get_bool((uintptr_t) dictionary, key, &bvalue)) {
                    add_assoc_bool(&out, key, bvalue ? 1 : 0);
                }
            }
        }%
        return out;
    }
}
