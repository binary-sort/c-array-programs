#include <stdio.h>
#include "utils/utils.h"
#include "prob_1/prob_1.h"
#include "prob_2/prob_2.h"
#include "check_range/check_range.h"

void main(){
  int n = 10;
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int r = 5;
  // left_rotate(n,r,a);
  // print_array(a,n);
  // right_rotate(n,r,a);
  // print_array(a,n);
  // printf("minimum number to make array even sum: %d\n",return_min_num(a,n));
  printf("%d\n", check_elements_in_range(a,n,0,11));
}
