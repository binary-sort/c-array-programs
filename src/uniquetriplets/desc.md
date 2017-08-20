## Problem
> Given an array and a sum value, find all possible unique triplets in that array whose sum is equal to the given sum value

## Solution
1. Sort the input array.
2. Find three indexes from the array i, j and k where A[i]+A[j]+A[k] = given sum value.
3. Fix the first element as A[i] and iterate i from 0 to array size – 2.
4. For each iteration of i, take j to be index of the first element in the remaining elements and k to be index of the last element.
5. Check for the triplet combination A[i]+A[j]+A[k] = given sum value.
6. If triplet is obtained (ie., A[i]+A[j]+A[k] = given sum value)
  1. Add all the triplet in a TreeSet with “:” separated value to get the unique triplets.
  2. increment the second value index
  3. decrement the third value index.
  4. repeat step 4 & 5 till j < k
7. If A[i]+A[j]+A[k] given sum value, decrement the third value index
