# Diagonal Matrix

Diagonal Matrix is a square matrix which has zeros everywhere other than the main diagonal. Entries on the main diagonal may be any number, including 0. Write a program to find whether a given matrix is a diagonal matrix or not.

### INPUT FORMAT:

The input consists of (n * n + 1) integers. <br>
The first integer corresponds to the number of rows/columns in the matrix. <br>
The remaining integers correspond to the elements in the matrix. <br>
The elements are read in row-wise order, the first row first, then second row and so on. <br>
Assume that the maximum value of n is 5.

### OUTPUT FORMAT:

Print yes if it is a diagonal matrix. Print no if it is not a diagonal matrix.

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
2
1 0
0 2
```

### SAMPLE OUTPUT 2:

```
Yes
```

### SAMPLE INPUT 3:

```
3
1 2 3
4 5 6
7 8 9
```

### SAMPLE OUTPUT 3:

```
No
```
