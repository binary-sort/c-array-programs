#include <stdio.h>
#include "utils/utlis.h"
#include "prob_1/prob_1.h"

void main(){
  int n = 10;
  int a[n] = {1,2,3,4,5,6,7,8,9,10};
  int r = 5;
  left_rotate(n,r,a);
  print_array(a,n);
  right_rotate(n,r,a);
  print_array(a,n);
}
