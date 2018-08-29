## MO's Algorithm

### Problem statement
> We are given an array and a set of query ranges, we are required to find sum of every query range.

### Proposed Solutions
1. Run loop between range L to R and find sum. _Time Complexity_: __O(m*n)__, _Space Complexity_: __O(1)__

1. MO's Algorithm

The idea of MO’s algorithm is to pre-process all queries so that result of one query can be used in next query. Below are steps.

Let a[0…n-1] be input array and q[0..m-1] be array of queries.

1. Sort all queries in a way that queries with L values from 0 to √n – 1 are put together, then all queries from √n to 2*√n – 1, and so on. All queries within a block are sorted in increasing order of R values.
1. Process all queries one by one in a way that every query uses sum computed in previous query.
  * Let ‘sum’ be sum of previous query.
  * Remove extra elements of previous query. For example if previous query is [0, 8] and current query is [3, 9], then we subtract a[0] and a[1] from sum
  * Add new elements of current query. In the same example as above, we add a[9] to sum.
