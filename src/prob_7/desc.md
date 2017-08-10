# Description of Problem with Solution

### Problem Statement
> Given an array containing only 0s and 1s, find the largest subarray which contain equal no of 0s and 1s.

### Proposed Solutions

1)Algorithm
	*Description*:
   Initialize sum variable to -1 and 1 if first element of array is 0 and 1 respectively. Traverse through the array using a nested loop and check store maximum size of array when sum of subarray is zero. Terminate the program when max size is achieved and sum become zero.

	*Time Complexity*: __O(n^2)__
	*Space Complexity*: __O(1)__
