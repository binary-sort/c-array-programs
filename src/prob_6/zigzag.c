#include <stdio.h>
#include <stdbool.h>
#include "prob_6.h"
#include "../utils/utils.h"
void zig_Zag(int arr[], int n);
void print_arr(int *arr, int n);

int main()
{
    int  arr[] = {4, 3, 7, 8, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    zig_Zag(arr, n);
    print_arr(arr,n);
    return 0;
}
