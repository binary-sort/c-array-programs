# Description of Problem with Solution

### Problem Statement
> Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest.

### Proposed Solutions

1)Algorithm
	*Description*:
   Use two nested loops. The outer loop picks an element one by one, the inner loop checks whether the element is repeated or not. Once we find an element that repeats, we break the loops and print the element. 

	*Time Complexity*: __O(n^2)__
	*Space Complexity*: __O(1)__
