# Description of Problem with Solution

### Problem Statement
> To segregate the even and odd members of the unsorted array and to place all even members before odd members of an array.
This problem is same as Dutch national flag problem.

### Proposed Solutions

1)Algorithm
	*Description*:
  1)left and right are two index variables i.e:  
          left = 0,  right = size -1
  2) Keep incrementing left index until we see an odd number.
  3) Keep decrementing right index until we see an even number.
  4) If lef < right then swap arr[left] and arr[right]
	*Time Complexity*: __O(n)__
	*Space Complexity*: __O(1)__
