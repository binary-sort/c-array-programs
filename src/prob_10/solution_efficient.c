/*
this solution is more efficient and has complexity O(n)
*/
// Efficient Approach: We can observe that:
//
// odd ^ odd = even
// odd ^ even = odd
// even ^ odd = odd
// even ^ even = even
// logic: count of odd members multiplied by count of even numbers
// equal to count of pairs having odd xor.
int countXorPair_efficient(int *arr, int n)
{
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    return odd * even;
}
