
#include<stdio.h>
#include "prob_8.h"
#include "../utils/utils.h"
int main()
{
	int arr[]={1,5,7,3,6,7,8,9,8};
   int n=sizeof(arr)/sizeof(arr[0]);
  first_repeated_element(arr, n);
  return 0;
}
