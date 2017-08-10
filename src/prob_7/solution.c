
#include<stdio.h>

int findSubArray(int arr[], int n)
{
    int sum = 0;
    int max = -1, startindex;
    for (int i = 0; i < n-1; i++)
    {
        sum = (arr[i] == 0)? -1 : 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] == 0)
            {sum += -1 ;
            }
            else{
              sum += 1 ;
            }
            if (sum == 0 && max < j-i+1)
            {
                max = j - i + 1;
                startindex = i;
            }
        }
    }
    if (max == -1)
        printf("No such subarray");
    else
        printf("%d to %d", startindex, startindex+max-1);

    return max;
}
