# Z 460 Date Sorting

Given a number of dates, sort them in such a way that the date that
corresponds to the earliest day comes first and the date that
corresponds to the latest day comes last.

### Input Format

-   First line contains N, the number of dates.
-   Next N lines contain one date each in the following format :
    `DD MM YYYY`.
-   The date will be three integers separated by a space where the
    first integer is the day, the second integer is the month and
    the third is the year.

### Constraints

1 <= N <= 100

_It is guaranteed that the date will be a valid date._

### Output Format

-   Output N lines.
-   Each line must contain one date.
-   The dates must appear in a sorted format.

### Sample Input 0

```
4
9 8 1996
31 4 1995
30 4 1996
25 12 1997
```

### Sample Output 0

```
31 4 1995
30 4 1996
9 8 1996
25 12 1997
```
