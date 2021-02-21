# Question 02

Chandhana is given a set of numbers in an array which has to be placed in a stack. She writes a code to implement it but gets stuck halfway. Analyze her code and help her complete it by filling up the missing part.

### Input Format

First line has the number of array elements and the second line has the elements separated by a space.

### Output Format

Output is displayed as shown in sample test cases.

## Sample Testcases

### Input 1

```
5
23 569 85 12 56
```

### Output 1

```
56 12 85 569 23
85 569 23
```

## Whitelist

- Set 1 : `push`
- Set 2 : `pop`
- Set 3 : `struct`
- Set 4 : `show`

### Header Snippet

```
#include <stdio.h>

struct Stack
{
    int top;
    int stack[50];
};

void push (struct Stack *S, int arr[], int n);
void pop (Struct Stack *S);
void show (Struct Stack *S);
```
