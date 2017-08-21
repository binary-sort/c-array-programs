#include<stdio.h>
#include "prob_13.h"
#include "../utils/utils.h"

void main()
{
int size, arr[]={2,4,9,7,5,15,19};
size=sizeof(arr)/sizeof(arr[0]);
deletion(arr,size,9);
print_arr(arr,size-1);
}
