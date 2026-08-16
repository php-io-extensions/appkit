namespace AppKit\NS\NSLayoutConstraint;

%{
#include "ns-layoutconstraint.h"
#include <stdint.h>
}%

/**
 * NSLayoutConstraint — Auto Layout constraint.
 */
class NSLayoutConstraint
{
    public static function wrap(int nsLayoutConstraintPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutconstraint_wrap((void *)(uintptr_t) nsLayoutConstraintPtr);
        }%
        return handle;
    }

    public static function destroy(int constraint) -> void
    {
        %{
            ns_layoutconstraint_destroy((uintptr_t) constraint);
        }%
    }

    public static function nsLayoutConstraint(int constraint) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutconstraint_nslayoutconstraint((uintptr_t) constraint);
        }%
        return ptr;
    }

    public static function constraintWithItem(int view1, int attr1, int relation, int view2, int attr2, double multiplier, double constant) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutconstraint_constraint_with_item(
                (uintptr_t) view1, (int) attr1, (int) relation, (uintptr_t) view2, (int) attr2, multiplier, constant);
        }%
        return handle;
    }

    public static function activateConstraints(array constraints) -> void
    {
        %{
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(constraints), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_layoutconstraint_activate(handles, count);
        }%
    }

    public static function deactivateConstraints(array constraints) -> void
    {
        %{
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(constraints), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_layoutconstraint_deactivate(handles, count);
        }%
    }

    public static function setActive(int constraint, bool active) -> void
    {
        %{
            ns_layoutconstraint_set_active((uintptr_t) constraint, active ? 1 : 0);
        }%
    }

    public static function isActive(int constraint) -> bool
    {
        bool result;
        %{
            result = ns_layoutconstraint_is_active((uintptr_t) constraint) == 1;
        }%
        return result;
    }

    public static function setPriority(int constraint, float priority) -> void
    {
        %{
            ns_layoutconstraint_set_priority((uintptr_t) constraint, (float) priority);
        }%
    }

    public static function priority(int constraint) -> double
    {
        double value;
        %{
            value = (double) ns_layoutconstraint_priority((uintptr_t) constraint);
        }%
        return value;
    }

    public static function setConstant(int constraint, double constant) -> void
    {
        %{
            ns_layoutconstraint_set_constant((uintptr_t) constraint, constant);
        }%
    }

    public static function constant(int constraint) -> double
    {
        double value;
        %{
            value = ns_layoutconstraint_constant((uintptr_t) constraint);
        }%
        return value;
    }

    public static function setIdentifier(int constraint, string identifier) -> void
    {
        %{
            ns_layoutconstraint_set_identifier((uintptr_t) constraint, Z_STRVAL(identifier));
        }%
    }

    public static function identifier(int constraint) -> string
    {
        string value;
        %{
            char buf[512];
            if (ns_layoutconstraint_identifier((uintptr_t) constraint, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        }%
        return value;
    }

    public static function firstAttribute(int constraint) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutconstraint_first_attribute((uintptr_t) constraint);
        }%
        return value;
    }

    public static function secondAttribute(int constraint) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutconstraint_second_attribute((uintptr_t) constraint);
        }%
        return value;
    }

    public static function relation(int constraint) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutconstraint_relation((uintptr_t) constraint);
        }%
        return value;
    }

    public static function multiplier(int constraint) -> double
    {
        double value;
        %{
            value = ns_layoutconstraint_multiplier((uintptr_t) constraint);
        }%
        return value;
    }

    public static function firstAnchor(int constraint) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutconstraint_first_anchor((uintptr_t) constraint);
        }%
        return handle;
    }

    public static function secondAnchor(int constraint) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutconstraint_second_anchor((uintptr_t) constraint);
        }%
        return handle;
    }
}
