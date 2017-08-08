/**
 * C program to find index of maximum and minimum element in array
 */

#include <stdio.h>
#define size 100

int main()
{
    int a[size];
    int i, max, min, n, min_index=0, max_index=0;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Assume first element as maximum and minimum */
    max = a[0];
    min = a[0];

    /*
     * Finds maximum and minimum in all array elements and store index in max_index and min_index.
     */
    for(i=1; i<n; i++)
    {
        /* If current element of array is greater than max */
        if(a[i]>max)
        {
            max = a[i];
            max_index=i;//update max_index
        }

        /* If current element of array is smaller than min */
        if(a[i]<min)
        {
            min = a[i];
            min_index=i;//update min_index
        }
    }

    /* Print index of maximum and minimum element*/
    printf("Index of Maximum element = %d\n", max_index);
    printf("Index of Minimum element = %d\n", min_index);

    return 0;
}
