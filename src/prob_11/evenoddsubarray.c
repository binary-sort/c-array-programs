#include<stdio.h>

#include "prob_11.h"

int main()
{
  int arr[]={1,0,1,0,1,1,0,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  check_evenodd(arr,n,3,5);
  return 0;
}
