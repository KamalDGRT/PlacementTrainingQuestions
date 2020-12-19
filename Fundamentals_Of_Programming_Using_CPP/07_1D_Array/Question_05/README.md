# Minimum Scalar Product

You are given two vectors v1=(x1,x2,...,xn) and v2=(y1,y2,...,yn). The scalar product of these vectors is a single number, calculated as x1y1+x2y2+...+xnyn. Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the largest possible, and output that maximum scalar product.

### INPUT FORMAT:

The first line contains integer number n. The next two lines contain n integers each, giving the coordinates of v1 and v2 respectively.

### OUTPUT FORMAT:

The output consists of a single integer Y, that corresponds to the maximum scalar product of all permutations of the two given vectors.

### SAMPLE INPUT 1:

```
3
1 3 5
2 4 1
```

### SAMPLE OUTPUT 1:

```
27
```

### SAMPLE INPUT 2:

```
3
1 2 3
4 5 6
```

### SAMPLE OUTPUT 2:

```
32
```

### SAMPLE INPUT 3:

```
2
1 2
2 4
```

### SAMPLE OUTPUT 3:

```
10
```

### SAMPLE INPUT 4:

```
3
3 4 6
5 4 6
```

### SAMPLE OUTPUT 4:

```
68
```
