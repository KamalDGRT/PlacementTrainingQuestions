# Compatible array

Two arrays are said to be compatible if they are of the same size and if the ith element in the first array is greater than or equal to the ith element in the second array for all the values of i. Write a program to find whether 2 arrays are compatible or not.

### INPUT FORMAT:

Input consists of 2n+2 integers. <br>
The first integer corresponds to 'n1', the size of the first array. <br>
The next 'n1' integers correspond to the elements in the first array. <br>
The next (n+1) integer corresponds to 'n2', the size of the second array. <br>
The last 'n2' integers correspond to the elements in the second array. <br>
Assume that the maximum value of n is 15.

### OUTPUT FORMAT:

Refer sample output for details.

### Sample Input 1:

```
5
2
3
6
8
1
5
1
1
1
1
1
```

### Sample Output 1:

```
Compatible
```

### Sample Input 2:

```
5
2
3
6
8
1
5
1
1
1
1
2
```

### Sample Output 2:

```
Incompatible
```

### Sample Input 3:

```
2
22
33
1
22
```

### Sample Output 3:

```
Incompatible
```
