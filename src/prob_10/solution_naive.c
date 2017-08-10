// this solution is the most simple approach which
// has the complexity equal to O(n*n)
int OddXorPairs_naive(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
              if ((arr[i] ^ arr[j]) % 2 == 1)
              count++;
    }
   return count;
}
