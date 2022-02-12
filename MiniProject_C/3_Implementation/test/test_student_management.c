#include "unity.h"
#include "student_management.h"
#include "student_management.h"
#define PROJECT_NAME    "Student_Record_Management"
void test_ret_roll(void);
void test_marks(void);
void test_ret_subtotal(void);
void test_compare(void);
void setUp()
{
}
void tearDown()
{
}

int main(void)
{
  UNITY_BEGIN();
RUN_TEST(test_ret_roll);
RUN_TEST(test_marks);
RUN_TEST(test_ret_subtotal);
RUN_TEST(test_compare);
return UNITY_END();
}
void test_ret_roll(void)
{
  TEST_ASSERT_EQUAL(301, ret_roll("ashish sharma"));
  TEST_ASSERT_EQUAL(315, ret_roll("nikhil desale"));
  TEST_ASSERT_EQUAL(305, ret_roll("balaji swamy"));
  TEST_ASSERT_EQUAL(303, ret_roll("suman mehta"));
  TEST_ASSERT_EQUAL(304, ret_roll("gaurav kapoor"));
}
void test_marks(void)
{
  TEST_ASSERT_EQUAL(163, marks("ashish sharma"));
  TEST_ASSERT_EQUAL(263, marks("nikhil desale"));
  TEST_ASSERT_EQUAL(56, marks("balaji swamy"));
  TEST_ASSERT_EQUAL(223, marks("suman mehta"));
  TEST_ASSERT_EQUAL(267, marks("gaurav kapoor"));
}
void test_ret_subavg(void)
{
  TEST_ASSERT_EQUAL(839, ret_subtotal(1));
  TEST_ASSERT_EQUAL(872, ret_subtotal(2));
  TEST_ASSERT_EQUAL(838, ret_subtotal(3));
  TEST_ASSERT_EQUAL(1048, ret_subtotal(4));
  TEST_ASSERT_EQUAL(0, ret_subtotal(5));
}
void test_compare(void)
{
  TEST_ASSERT_EQUAL(315, compare(315,301));
  TEST_ASSERT_EQUAL(303, compare(305,303));
  TEST_ASSERT_EQUAL(306, compare(306,308));
  TEST_ASSERT_EQUAL(310, compare(310,317));
  TEST_ASSERT_EQUAL(0, compare(299,321));
}

