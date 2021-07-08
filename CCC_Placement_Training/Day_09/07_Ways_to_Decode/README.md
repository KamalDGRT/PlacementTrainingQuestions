# Ways to Decode

A numeric string can be converted to an alphabetic string in the
following manner :

-   replace '0' by 'A',
-   '1' by 'B' ... '
-   25' by 'Z'.

Unfortunately, this method of encoding and decoding is not very robust
as some strings can result in multiple outputs and hence cause ambiguity,
for example, the string "1101" can be read as "LB", "BBAB", "BKB", "LAB"
etc etc.

Your task is, given a numeric string, give the number of distinct
alphabetic strings that it can be decoded to.

Since this number can be very large, output it modulo 1e9 + 7

Note that you can only consider either 1 or 2 contiguous characters and
convert them to alphabets while decoding if possible.

### Input

Input consists of one string only

### Output

Print the number of ways module 1e9+7

##### Notes

The length of the input string does not exceed 1e6

### Sample Input 0

```
1101
```

### Sample Output 0

```
5
```
