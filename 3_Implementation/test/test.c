#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../inc/simple.h"
#include "../inc/advance.h"
#include <math.h>

void setUp(){}
void tearDown(){}

void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_sqroot(void);
void test_power(void);
void test_logarithm(void);
void test_sin_res(void);
void test_cos_res(void);
void test_tan_res(void);
void test_cot_res(void);
void test_sec_res(void);
void test_cosec_res(void);

void test_add(void) {
  TEST_ASSERT_EQUAL(20.00, add(15, 5));
}
void test_sub(void) {
  TEST_ASSERT_EQUAL(10.00, sub(20, 10));
}
void test_mul(void) {
  TEST_ASSERT_EQUAL(10.00, mul(2, 5));
}
void test_div(void) {
  TEST_ASSERT_EQUAL(5.00, div(10, 2));
}
void test_sqroot(void) {
  TEST_ASSERT_EQUAL(2.00, sqroot(4));
}
void test_power(void) {
  TEST_ASSERT_EQUAL(8.00, power(2, 3));
}
void test_logarithm(void) {
  TEST_ASSERT_EQUAL(0.30, log10(2));
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



int main(void){

    
    UnityBegin(NULL);
    
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_sqroot);
    RUN_TEST(test_power);
    RUN_TEST(test_logarithm);
    RUN_TEST(test_sin_res);
    RUN_TEST(test_cos_res);
    RUN_TEST(test_tan_res);
    RUN_TEST(test_cot_res);
    RUN_TEST(test_sec_res);
    RUN_TEST(test_cosec_res);

    return (UnityEnd());
}

