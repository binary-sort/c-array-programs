#include<stdio.h>
#include "prob_14.h"
#include<stdlib.h>
# include <math.h>
int main()
{
  int arr[] = {1, 2, -1, 0, 1, 4};
  int size;
  size=sizeof(arr)/sizeof(arr[0]);
  // minpairsum(arr, size);
  minpairsumsol2(arr, size);
  return 0;
}
