#include <stdio.h>
#include <stdbool.h>
#include "prob_6.h"
#include "../utils/utils.h"
void zig_Zag(int arr[], int n);
void print_arr(int *arr, int n);

int main()
{
    int  arr[] = {3,4,2,87,5,32,45,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    zig_Zag(arr, n);
    print_arr(arr,n);
    return 0;
}
