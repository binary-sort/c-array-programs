# Description of Problem with Solution

### Problem Statement
> Given two sorted arrays, the task is to merge them in a sorted manner.

### Proposed Solutions

Algorithm:

1) Create an array sorted[] of size n1 + n2.
2) Copy all n1 elements of arr1[] to sorted[]
3.) Traverse arr2[] and one by one insert elements (like insertion sort) of sorted[] to arr1[].

	*Time Complexity*: __O(n1*n2)__
	*Space Complexity*: __O(1)__
