#include "unity.h"
#include "math_utils.h"

void setUp(void) {}     // runs before each test (can be empty)
void tearDown(void) {}  // runs after each test  (can be empty)

static void test_add_should_sum_correctly(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
}

static void test_multiply_should_multiply_correctly(void) {
    TEST_ASSERT_EQUAL_INT(6, multiply(2, 3));
    TEST_ASSERT_EQUAL_INT(-8, multiply(-4, 2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_sum_correctly);
    RUN_TEST(test_multiply_should_multiply_correctly);
    return UNITY_END();
}
