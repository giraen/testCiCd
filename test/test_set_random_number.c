#include "unity.h"

void test_set_random_number_should_assign_value_between_0_and_99(void) {
    int value = -1;
    for (int i = 0; i < 50; i++) {
        set_random_number(&value);
        TEST_ASSERT_TRUE(value >= 0 && value < 100);
    }
}
