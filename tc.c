#include <stdio.h>

signed char subtract(signed char a, signed char b) {
  /* Returns the result of `a - b`
   * this function may only use the folling
   * 
   * - addition `+`
   * - bitwise complement `~`
   */

  return 0;
}

/* 
Test code 

It is not recommended to modify any code below this point
*/

#define test_int_equal(exp, result) \
printf("Test %s == %d ", #exp, result); \
if ((exp) != result) { \
  printf("FAILED as %d.\n", exp); \
} else { \
  printf("succeeded.\n"); \
}

int main() {
  printf("\nSubtraction identity\n");
  test_int_equal(subtract(0,0), 0);
  test_int_equal(subtract(1,0), 1);
  test_int_equal(subtract(99,0), 99);
  
  printf("\nSubtracting 1\n");
  test_int_equal(subtract(2,1), 1);
  test_int_equal(subtract(10,1), 9);

  printf("\nGeneral subtraction\n");
  test_int_equal(subtract(35,6), 29);
  test_int_equal(subtract(127,10), 117);
  test_int_equal(subtract(90,85), 5);

  printf("\nNegative result\n");
  test_int_equal(subtract(1,2), -1);  
  test_int_equal(subtract(15,20), -5);  
  test_int_equal(subtract(0,1), -1);  

  printf("\nNegative operand\n");
  test_int_equal(subtract(1,-1), 2);  
  test_int_equal(subtract(-1,0), -1);  
  test_int_equal(subtract(-20,-10), -10);  
}
