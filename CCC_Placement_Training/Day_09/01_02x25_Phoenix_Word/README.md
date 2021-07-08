# 02x25 - Phoenix Word

-   Just like a phoenix rises from the ashes, a phoenix word
    is built out of destruction of many words.

-   You are given a list of N words.
-   From each word you can keep any one letter and discard
    the remaining letters.
-   Then you can use the N chosen letters by concatenating
    them in any order to build a new string.
-   Find the lexicographically smallest string that you can obtain.

### INPUT

-   First line contains N, the number of words. (1 ≤ N ≤ 10^3)
-   Next N lines each contain a word made of small english alphabets only.
-   Sum of lengths of all words ≤ 10^3

### OUTPUT

Output should contain one word : the lexicographically smallest
word possible to build as given above.

### Sample Input 0

```
3
cross
stop
arm
```

### Sample Output 0

```
aco
```

### Explanation 0

-   take `a` from `arm`
-   `c` from `cross` and
-   `o` from `stop`.
