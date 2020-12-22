# Symmetric Matrix

A symmetric matrix is a square matrix that is equal to its transpose. Write a C++ program to find whether a given matrix is a symmetric matrix or not.

### INPUT FORMAT:

The input consists of (m * n + 2) integers. <br>
The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. <br>
The remaining integers correspond to the elements in the matrix. <br>
The elements are read in row-wise order, first row first, then second row and so on. <br>
Assume that the maximum value of m and n is 10.

### OUTPUT FORMAT:

Refer to the sample output for details.

### SAMPLE INPUT 1:

```
2
2
4 5
5 4
```

### SAMPLE OUTPUT 1:

```
Symmetric
```

### SAMPLE INPUT 2:

```
2
2
3 4
4 3
```

### SAMPLE OUTPUT 2:

```
Symmetric
```

### SAMPLE INPUT 3:

```
3
3
1 2 1
2 3 2
1 2 3
```

### SAMPLE OUTPUT 3:

```
Symmetric
```

### SAMPLE INPUT 4:

```
2
2
2 4
6 2
```

### SAMPLE OUTPUT 4:

```
Not Symmetric
```
