# Anna University grading system

The newly appointed Vice-Chancellor of Anna University wanted to create an automated grading system for the students to check their grade. When a student enters the marks, the grading system displays the corresponding grade. Now, write a program to display the grade if marks are entered.

```
________________________
| Marks scored | Grade |
|--------------|-------| 
|      100     |   S   |
|    90 - 99   |   A   |
|    80 - 89   |   B   |
|    70 - 79   |   C   |
|    60 - 69   |   D   |
|    50 - 59   |   E   |
|      <50     |   F   |
------------------------
```

### INPUT & OUTPUT FORMAT:

The input consists of one integer which corresponds to the marks scored by the student. <br>
If a student's mark is greater than 100, print "Invalid Input". Otherwise, print the grade.

### SAMPLE INPUT 1:

```
78
```

### SAMPLE OUTPUT 1:

```
C
```

### SAMPLE INPUT 2:

```
44
```

### SAMPLE OUTPUT 2:

```
F
```

### SAMPLE INPUT 3:

```
780
```

### SAMPLE OUTPUT 3:

```
Invalid Input
```
