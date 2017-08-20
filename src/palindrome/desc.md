## Rabin Karp Algorithm

### Problem statement
> Given a stream of characters (characters are received one by one), write a function that prints ‘Yes’ if a character makes the complete string palindrome, else prints ‘No’.

### Proposed Solutions
1. Naïve Solution
A Simple Solution is to do following for every character str[i] in input string. Check if substring str[0…i] is palindrome, then print yes, else print no.

1. Balin Karp Algorithm

1. The first character is always a palindrome, so print yes for
  first character.
1. Initialize reverse of first half as "a" and second half as "b".  
Let the hash value of first half reverse be 'firstr' and that of
second half be 'second'.
1. Iterate through string starting from second character, do following
for every character str[i], i.e., i varies from 1 to n-1.
* If 'firstr' and 'second' are same, then character by character
check the substring ending with current character and print
"Yes" if palindrome.
Note that if hash values match, then strings need not be same.
For example, hash values of "ab" and "ba" are same, but strings
are different. That is why we check complete string after hash.

* Update 'firstr' and 'second' for next iteration.  
If 'i' is even, then add next character to the beginning of
'firstr' and end of second half and update
hash values.
If 'i' is odd,  then keep 'firstr' as it is, remove leading
character from second and append a next
character at end.
