#include <stdio.h>
#include "../utils/utils.h"
#include "prob_9.h"
int main() {
  int a[]={1,3,5,7}, b[]={2,4,6,8}, m, n, c;
  m=sizeof(a)/sizeof(a[0]);
    n=sizeof(b)/sizeof(b[0]);
    int sorted[m+n];
    merge(a, m, b, n, sorted);
  printf("Sorted array:\n");
  print_arr(sorted, m+n);

  return 0;
}
