# Description of Problem with Solution

### Problem Statement
> Given a array such that all its terms is either 0 or 1.You need to tell the number represented by a subarray a[l..r] is odd or even.

### Proposed Solutions
using the property of binary representation of a number, we can check whether the last element of the subarray is set or not. If set then the value to decimal representation of subarray is odd otherwise even.

	*Time Complexity*: __O(n)__
	*Space Complexity*: __O(1)__
