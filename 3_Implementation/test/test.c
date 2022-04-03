#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../inc/simple.h"
#include "../inc/advance.h"
#include <math.h>

// mandetory functions
void setUp(){}
void tearDown(){}

// test function declaration
void test_add_res(void);
void test_sub_res(void);
void test_mul_res(void);
void test_div_res(void);
void test_sqroot_res(void);
void test_power_res(void);
void test_logarithm_res(void);
void test_sin_res(void);
void test_cos_res(void);
void test_tan_res(void);
void test_cot_res(void);
void test_sec_res(void);
void test_cosec_res(void);

// test function implementation
void test_add_res(void) {
  TEST_ASSERT_EQUAL(20, add_res(15, 5));
}
void test_sub_res(void) {
  TEST_ASSERT_EQUAL(10, sub_res(20, 10));
}
void test_mul_res(void) {
  TEST_ASSERT_EQUAL(10, mul_res(2, 5));
}
void test_div_res(void) {
  TEST_ASSERT_EQUAL(5.00, div_res(10, 2));
}
void test_sqroot_res(void) {
  TEST_ASSERT_EQUAL(2.00, sqroot_res(4));
}
void test_power_res(void) {
  TEST_ASSERT_EQUAL(8, power_res(2, 3));
}
void test_logarithm_res(void) {
  TEST_ASSERT_EQUAL(0.30, logarithm_res(2));
}
void test_sin_res(void) {
  TEST_ASSERT_EQUAL(0.87, sin_res(60));
}
void test_cos_res(void) {
  TEST_ASSERT_EQUAL(0.50, cos_res(60));
}
void test_tan_res(void) {
  TEST_ASSERT_EQUAL(1.73, tan_res(60));
}
void test_cot_res(void) {
  TEST_ASSERT_EQUAL(0.58, cot_res(60));
}
void test_sec_res(void) {
  TEST_ASSERT_EQUAL(1.15, sec_res(30));
}
void test_cosec_res(void) {
  TEST_ASSERT_EQUAL(1.16, cosec_res(60));
}


// main function
int main(void){

    
    UnityBegin(NULL);
    
    // running test function

    RUN_TEST(test_add_res);
    RUN_TEST(test_sub_res);
    RUN_TEST(test_mul_res);
    RUN_TEST(test_div_res);
    RUN_TEST(test_sqroot_res);
    RUN_TEST(test_power_res);
    RUN_TEST(test_logarithm_res);
    RUN_TEST(test_sin_res);
    RUN_TEST(test_cos_res);
    RUN_TEST(test_tan_res);
    RUN_TEST(test_cot_res);
    RUN_TEST(test_sec_res);
    RUN_TEST(test_cosec_res);

    return (UnityEnd());
}

