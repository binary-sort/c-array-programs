#include <stdio.h>
#include "prob_7.h"



int main()
{
    int arr[] =  {1,0,0,1,1,0,1,0,1,0,0,1,1,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    findSubArray(arr, n);
    return 0;
}
