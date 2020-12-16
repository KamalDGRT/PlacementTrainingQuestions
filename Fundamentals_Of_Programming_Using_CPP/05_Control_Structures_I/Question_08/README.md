# Collatz problem

Phoebe Buffay started working for Chandler Bing and he wanted her to write a C++ program to generate Collatz Sequence.The rules for generating Collatz sequence are: If n is even: n = n / 2 If n is odd: n = 3n + 1 For example, if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1 It has been proved for almost all integers, that the repeated application of the above rule will result in a sequence that ends in 1.

### INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the first term of the sequence. <br>
As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.

### SAMPLE INPUT 1:

```
5
```

### SAMPLE OUTPUT 1:

```
5
16
8
4
2
1
5
```

### SAMPLE INPUT 2:

```
18
```

### SAMPLE OUTPUT 2:

```
18
9
28
14
7
22
11
34
17
52
26
13
40
20
10
5
16
8
4
2
1
20
```

### SAMPLE INPUT 3:

```
1
```

### SAMPLE OUTPUT 3:

```
1
0
```

### SAMPLE INPUT 4:

```
3
```

### SAMPLE OUTPUT 4:

```
3
10
5
16
8
4
2
1
7
```
