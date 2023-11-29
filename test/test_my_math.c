#include "unity.h"
#include "my_math.h"

void test_add() {
    TEST_ASSERT_EQUAL(15, add(10, 5));
    TEST_ASSERT_EQUAL(-5, add(0, -5));
    TEST_ASSERT_EQUAL(0, add(0, 0));
}

void test_subtract() {
    TEST_ASSERT_EQUAL(5, subtract(10, 5));
    TEST_ASSERT_EQUAL(5, subtract(10, -5));
    TEST_ASSERT_EQUAL(0, subtract(5, 5));
}

int main() {
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_subtract);

    return UNITY_END();
}
