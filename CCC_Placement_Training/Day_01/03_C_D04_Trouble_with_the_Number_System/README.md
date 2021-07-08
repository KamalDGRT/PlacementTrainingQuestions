# C D04 - Trouble with the Number System

Barua has developed his own Operating System known as "Barua OS" (BOS).
One day while booting up his system he runs into a bug. You want to
impress Barua so you jump in and offer to solve the bug yourself.

Barua doesn't like binary numbers very much and his operating system
uses a new number system called BNS (Barua Number System).

The following are the properties of a number represented in BNS form :

-   The number can only be made up of 2 distinct digits, one or zero.
-   The number cannot start with zero.
-   The number can have any number of zeroes, but only one instance
    of the digit one.
-   For example 100, 1000, 10000 are Barua Numbers whereas 101, 502,
    625 are not Barua Numbers.

Unfortunately one decimal number has crept into a list of Barua
Numbers and Barua OS cannot find its product. Can you?

### Input Format

First line contains an integer N, total number of elements in the list.

Next N lines contains a number a[i] <= 10^18.

#### NOTE

Out of the N numbers, there will be at most 1 decimal number and
the remaining numbers will be Barua Numbers.

There may be no decimal numbers at all.

### Output Format

Print one number, the product of all the numbers.

### Input Constraints

-   1 <= N <= 10^6
-   1 <= A[i] <= 10^18

### Sample Input 0

```
4
100
121
10
100
```

### Sample Output 0

```
12100000
```
