# Target practice

The Witcher normally trains his disciples like Yennefer using a board which consists of concentric circles. When a student correctly hits the center of the concentric circles, his/her score is 100. The score gets reduced depending on where the students hit on the board. When the student hits outside the board, his score is 0. Witcher will not allow a student to have his/her food unless he/she scores 100. Yennefer will always hit the target in her first attempt and she will leave early. Others may take more turns to reach a score of 100. Now, write a program to determine the number of turns a disciple takes to reach the target score of 'n'.

### INPUT FORMAT:

Input consists of a list of positive integers. <br>
The first integer corresponds to the target score 'n'. <br>
Assume that all the other integers input are less than or equal to n.

### OUTPUT FORMAT:

The output consists of a single line. Refer the sample output for format details.

### SAMPLE INPUT 1:

```
100
4
40
60
```

### SAMPLE OUTPUT 1:

```
The number of turns is 3
```

### SAMPLE INPUT 2:

```
1000
1000
```

### SAMPLE OUTPUT 2:

```
The number of turns is 1
```

### SAMPLE INPUT 3:

```
200
400
```

### SAMPLE OUTPUT 3:

```
The number of turns is 1
```

### SAMPLE INPUT 4:

```
100
4
20
70
8
```

### SAMPLE OUTPUT 4:

```
The number of turns is 4
```
