#include <stdio.h>
#include "../utils/utils.h"
#include "prob_5.h"
void print_arr(int *arr, int n);
void swap(int *a, int *b);
int main()
{
  int arr[] = {1, 3,8, 7, 48, 5, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  segregateEvenOdd(arr, n);
  print_arr(arr,n);
  return 0;
}
