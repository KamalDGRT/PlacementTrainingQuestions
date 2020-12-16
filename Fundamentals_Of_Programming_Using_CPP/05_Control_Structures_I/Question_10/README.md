# Viva on odd numbers

Amy Farrah Fowler asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive odd numbers or when the student has specified a negative number. Some students didn't know the difference between odd numbers and even numbers and they made many mistakes and so it was difficult for her to maintain the scores. She asks for your help. Can you please help her by writing a program to calculate the score?

### INPUT & OUTPUT FORMAT:

Input consists of a list of integers. <br>
The output consists of a single line. The score needs to be corrected to 1 decimal place.<br>

[For this exercise, don't worry about duplicate odd numbers. Even if the students specify the same odd number thrice, it is accepted].

### SAMPLE INPUT 1:

```
2
-4
```

### SAMPLE OUTPUT 1:

```
-1.5
```

### SAMPLE INPUT 2:

```
3
3
3
```

### SAMPLE OUTPUT 2:

```
3.0
```

### SAMPLE INPUT 3:

```
1
7
9
```

### SAMPLE OUTPUT 3:

```
3.0
```
