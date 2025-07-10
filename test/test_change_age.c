#include "unity.h"
#include "..\src\my_functions\change_age.h"

void test_reset_age_should_set_value_to_zero(void) {
    int age = 25;
    change_age(&age);
    TEST_ASSERT_EQUAL(0, age);
}