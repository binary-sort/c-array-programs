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
  int a[10] = {7,8,9,10,3,4,5,6,1,2};
  int b[10] = {1,8,10,23,3,1,1,1,1,100};
  int r = 5;
  // left_rotate(n,r,a);
  // print_array(a,n);
  // right_rotate(n,r,a);
  // print_array(a,n);
  // printf("minimum number to make array even sum: %d\n",return_min_num(a,n));
  // printf("%d\n", check_elements_in_range(a,n,0,11));
  // merge_sort(a,0,n-1);
  // printf("%d\n", find_index_binary(a,0,n-1,4));
  // printf("%d\n", given_sum_subset(a,n,100));
  // merge_sort(a,0,n-1);
  // print_array(a,n);
  // int q[5][2] = {{1,3},{0,6},{8,9},{6,9},{1,4}};
  // mos_algo(a,n,q,5);
  // sol_3(a,n,q,5);
  // palindrome_naive("112113",6);
  // rabin_karp("aabaacaabaa");
  // printf("%lu\n", sizeof(int));
  // printf("%d\n", max_sum_path(a,b,10,10));
  uniquetriplets(a,n,12);
}
