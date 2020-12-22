# Magic Square

A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.

### Input Format:

The input consists of (n * n + 1) integers. <br>
The first integer corresponds to the number of rows/columns in the matrix. <br>
The remaining integers correspond to the elements in the matrix. <br>
The elements are read in row-wise order, the first row first, then second row and so on. <br>
Assume that the maximum value of m and n is 5.

### Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

### SAMPLE INPUT 1:

```
2
4 5
5 4
```

### SAMPLE OUTPUT 1:

```
No
```

### SAMPLE INPUT 2:

```
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

### SAMPLE OUTPUT 2:

```
Yes
```

### SAMPLE INPUT 3:

```
3
1 2 3
3 1 2
2 3 1
```

### SAMPLE OUTPUT 3:

```
No
```
