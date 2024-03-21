#include "gtest/gtest.h"
#include "my_folder/function.h"
#include "../util.h"

/*
 * Test your code here.
 * Do not use printf. Printing is not testing.
 * Use ASSERT_EQ, ASSERT_TRUE or ASSERT_FALSE instead.
 */
TEST(function_name, test_case_name) {
    const int TEST_SIZE = 100;
    for (int i = 0; i < TEST_SIZE; ++i) {
        int actual = foo(i);
        int expect = i + 1;
        ASSERT_EQ(expect, actual) << case_string(i);
    }
}

