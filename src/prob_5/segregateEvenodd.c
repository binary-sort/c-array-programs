#include <stdio.h>
#include "../utils/utils.h"
#include "prob_5.h"
// functions prototype declarations
void print_arr(int *arr, int n);
void swap(int *a, int *b);
//main function starts here
int main()
{
  int arr[] = {1, 3,8, 7, 48, 5, 3};// test values for array
  int n = sizeof(arr)/sizeof(arr[0]);
  /*
  segregateEvenOdd function starts here
  */
  segregateEvenOdd(arr, n);
  print_arr(arr,n);
  return 0;
}
