#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <myfn.h>
#define PROJECT_NAME    "FO"

/* Prototypes for all the test functions */
void test_insert(head *t, float data, char foodname[25], int quantity, float price);
void test_foodlist(head *t);
void test_foodlist1(head *t);
float test_getbill(head *t);
void test_order(head *t, head *l, float fc, int qty);
void test_cls();

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/

CU_add_test(suite, "insert",test_insert);
CU_add_test(suite, "foodlist",test_foodlist);
CU_add_test(suite, "foodlist1",test_foodlist1);
CU_add_test(suite, "getbill",test_getbill);
CU_add_test(suite, "order",test_order);
CU_add_test(suite, "cls",test_cls);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 

void test_printop(void)
{
	CU_ASSERT(1==printop(1));
}
