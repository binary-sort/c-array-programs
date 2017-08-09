## Given Sum Subset

### Problem statement
> Check if there is subset having sum equal to given value

### Proposed Solutions:

If we keep subtracting elements from sum and arrive to sum==0 then we can say there's a subset
* We can arrive to conclusion by recursion:
  * First check if element is greater than sum. if greater leave it out.
  * if length==0 before sum==0 then there's no subset.
  * if sum==0 then there's a subset. 
