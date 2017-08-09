void swap(int *a, int *b);
void segregateEvenOdd(int arr[], int n)
{
    /* l=left index of array
    r= right index of array */
    int l = 0, r = n-1;
    while (l < r)
    {
        /* Increment left index while we see 0 at left */
        while (arr[l]%2 == 0 && l < r)
            l++;

        /* Decrement right index while we see 1 at right */
        while (arr[r]%2 == 1 && l < r)
            r--;

        if (l < r)
        {

            swap(&arr[l], &arr[r]);// Swap arr[l] and arr[r]//
            l++;
            r--;
        }
    }
}
