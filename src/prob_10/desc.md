# Description of Problem with Solution

### Problem Statement
> Given an array of n integers. Find out number of pairs in array whose XOR is odd.

### Proposed Solutions

1.)Naives Algorithm:
 We can find pairs whose XOR is odd by running two loops. If XOR of two number is odd increase count of pairs.

	*Time Complexity*: __O(n1*n2)__
	*Space Complexity*: __O(1)__

2.)Efficient Algorithm:

we know that :
odd ^ odd = even
odd ^ even = odd
even ^ odd = odd
even ^ even = even

using above observation we can clearly see that total number of pairs having odd XOR is equal to the multiplication of count of even members and count of odd numbers.

*Time Complexity*: __O(n)__
*Space Complexity*: __O(1)__
