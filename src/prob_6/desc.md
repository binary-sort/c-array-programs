# Description of Problem with Solution

### Problem Statement
>  rearrange the elements of array in zig-zag fashion in O(n) time. The converted array should be in form a < b > c < d > e < f.

### Proposed Solutions

1)Algorithm
	*Description*:
   we need the order of elements in the output zig-zag array would be [1st < 2nd > 3rd < 4th > 5th < 6th > 7th].
   1) maintain a flag which represent the current relation (< or > ) we need.
   2)  If the current two elements are not in that order then swap those elements otherwise not.
  
	*Time Complexity*: __O(n)__
	*Space Complexity*: __O(1)__
