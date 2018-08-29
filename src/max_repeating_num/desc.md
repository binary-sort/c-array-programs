## Problem
> Find the maximum repeating number in O(n) time and O(1) extra space

## Solutions

1. A simple naïve solution is to iterate two loops, outer to pick elements and inner to check frequency.

1. Another solution:
> This solution works only if the array contains numbers in range from 0 to k-1 where k is a positive integer and k <= n.

  * Iterate though input array arr[], for every element arr[i], increment arr[arr[i]%k] by k (arr[] becomes {2, 11, 11, 29, 11, 12, 1, 15 })

  * Find the maximum value in the modified array (maximum value is 29). Index of the maximum value is the maximum repeating element (index of 29 is 3).

  * If we want to get the original array back, we can iterate through the array one more time and do arr[i] = arr[i] % k where i varies from 0 to n-1.

How does the above algorithm work? Since we use arr[i]%k as index and add value k at the index arr[i]%k, the index which is equal to maximum repeating element will have the maximum value in the end. Note that k is added maximum number of times at the index equal to maximum repeating element and all array elements are smaller than k.
