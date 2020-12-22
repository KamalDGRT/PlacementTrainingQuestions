# Maximum element in each column

In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element in each column of the matrix.)

### Input Format:

The input consists of (m*n+2) integers. <br>
The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix. <br>
The remaining integers correspond to the elements in the matrix. <br>
The elements are read in row-wise order, the first row first, then second row and so on. <br>
Assume that the maximum value of m and n is 10.

### Output Format:

Refer to the sample output for details.

### SAMPLE INPUT 1:

```
3
2
4 5
6 9
0 3
```

### SAMPLE OUTPUT 1:

```
6
9
```

### SAMPLE INPUT 2:

```
3
3
22 23 25
25 22 26
26 27 23
```

### SAMPLE OUTPUT 2:

```
26
27
26
```

### SAMPLE INPUT 3:

```
3
3
1 2 3
4 5 6
7 8 9
```

### SAMPLE OUTPUT 3:

```
7
8
9
```

### SAMPLE INPUT 4:

```
3
2
1 2
33 22
22 100
```

### SAMPLE OUTPUT 4:

```
33
100
```
