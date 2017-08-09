#include<stdbool.h>
void swap(int *a, int *b);
void zig_Zag(int arr[], int n)
{

    bool p = true; //p used as a flag
      for (int i=0; i<=n-2; i++)
    {
        if (p)  // "<" relation expected
        {
            /* If we have a situation like A > B > C,
               we get A > B < C by swapping B and C */
            if (arr[i] > arr[i+1])
                swap(&arr[i], &arr[i+1]);
        }
        else //">" relation expected
        {
            /* If we have a situation like A < B < C,
               we get A < C > B by swapping B and C */
            if (arr[i] < arr[i+1])
                swap(&arr[i], &arr[i+1]);
        }
        p = !p; //p flipped
    }
}
