#include <stdio.h>
#include "utils/utils.h"
#include "rotation/rotation.h"
#include "return_min_num/return_min_num.h"
#include "check_range/check_range.h"
#include "given_sum_subset/given_sum_subset.h"
#include "sorting/sorting.h"
#include "find_index/find_index.h"

void main(){
  int n = 10;
<<<<<<< HEAD
  int a[10] = {75,41,52,1,2,3,4,5,-4,-2};
=======
  int a[10] = {7,8,9,10,3,4,5,6,1,2};
>>>>>>> FETCH_HEAD
  int r = 5;
  // left_rotate(n,r,a);
  // print_array(a,n);
  // right_rotate(n,r,a);
  // print_array(a,n);
  // printf("minimum number to make array even sum: %d\n",return_min_num(a,n));
  // printf("%d\n", check_elements_in_range(a,n,0,11));
<<<<<<< HEAD
  // printf("%d\n", find_index(a,n,4));
  printf("%d\n", given_sum_subset(a,n,-6));
  printf("%d\n", given_sum_subset(a,n,9));
  printf("%d\n", given_sum_subset(a,n,18));
=======
  merge_sort(a,0,n-1);
  printf("%d\n", find_index_binary(a,0,n-1,4));
  // printf("%d\n", given_sum_subset(a,n,100));
  // merge_sort(a,0,n-1);
  // print_array(a,n);
>>>>>>> FETCH_HEAD
}
