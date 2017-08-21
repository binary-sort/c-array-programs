# Description of Problem with Solution

### Problem Statement
> Consider a big party where a log register for guest’s entry and exit times is maintained. Find the time at which there are maximum guests in the party. Note that entries in register are not in any order.

### Proposed Solutions
Algorithm:
1) sort both the arrays
2)consider all events (entry and exit in sorted order)
3) Count the number of guests present in the hall based on the number of guests entered but not exited.

	*Time Complexity*: __O(nLogn)__
	*Space Complexity*: __O(1)__
