# include <stdio.h>
# include <stdlib.h>
# include <math.h>

/* time compexity is O(n^2)
*/
// not so Efficient
//see solution2 for more efficient program
void minpairsum(int arr[], int size)
{
int left, right, minsum, sum, minleft, minright;
  minleft = 0;
  minright= 1;
  minsum = arr[0] + arr[1];

  for(left = 0; left <size - 1; left++)
  {
    for(right = left+1; right < size; right++)
    {
      sum = arr[left] + arr[right];
      if(abs(minsum) > abs(sum))
      {
        minsum = sum;
        minleft = left;
        minright = right;
      }
    }
  }

  printf(" The two elements whose sum is minimum are %d and %d \n",
          arr[minleft], arr[minright]);
}
