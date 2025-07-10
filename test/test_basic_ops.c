#include "unity.h"
#include "../src/my_functions/basic_ops.h"

void test_add_should_return_sum(void) {
    TEST_ASSERT_EQUAL_DOUBLE(5.0, add(2.0, 3.0));
    TEST_ASSERT_EQUAL_DOUBLE(150.62, add(50.5, 100.12));
}