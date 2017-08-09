#include <stdio.h>
#include "prob_4.h"
#include "../utils/utils.h"
int max_product(int arr[], int n);
int max (int x, int y);
int min (int x, int y);
int main()
{
int arr[10]={1,1,1,1,1,1,2,3,4,5};
printf("%d",max_product(arr, 10));
printf("\n");
return 0;

}
