#include <stdio.h>
#include "prob_10.h"
int main()
{
    int arr[] = { 1, 3 , 4,  5, 7 ,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n",OddXorPairs_naive(arr, n));
    //  printf("%d \n",countXorPair_efficient(arr, n));

    return 0;
}
