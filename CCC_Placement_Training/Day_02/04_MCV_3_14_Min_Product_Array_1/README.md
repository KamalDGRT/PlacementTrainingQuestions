# MCV 3.14 : Min Product Array 1

-   You are given a task to find the sum of Products of
    corresponding elements of two arrays of the same size.
-   Given that k modifications are allowed on the first array,
    what is the minimum product that can be obtained?
-   In each modification, one array element of the first array
    can either be increased or decreased by 2.

##### Note

-   The product sum is Summation (A[i] \* B[i]) for all i from
    1 to n where n is the size of both arrays.

**_Hint :_**

-   You should try to use all the k operations on any single element
    of the modifiable array a.

### Input Format

-   First line of the input contains n and k delimited by whitespace
-   Second line contains the Array A (modifiable array) with its
    values delimited by spaces.
-   Third line contains the Array B (non-modifiable array) with its
    values delimited by spaces.

### Constraints

-   1 ≤ N ≤ 10^5
-   0 ≤ |A[i]|, |B[i]| ≤ 10^5
-   0 ≤ K ≤ 10^9

### Output Format

Output the minimum sum of products of the two arrays.

### Sample Input 0

```
3 5
1 2 -3
-2 3 -5
```

### Sample Output 0

```
-31
```

### Sample Input 1

```
5 3
2 3 4 5 4
3 4 2 3 2
```

### Sample Output 1

```
25
```
