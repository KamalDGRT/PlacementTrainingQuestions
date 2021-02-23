# Question 03

**Swapping 2 numbers**

Mrs. Anitha, our favorite Math teacher wanted to teach her students to swap 
two elements.

Write a program to accept 2 numbers and to swap them using function and 
pointers.

#### Function Specificaton

##### void swap(int *a, int *b)

This function swaps 2 integers.

### Input Format

The input consists of 2 integers.

### Output Format

Refer to the sample input and output for fomatting details.

## Sample Testcases

### Input 1

```
5
3
```

### Output 1

```
Before swap
a = 5 b = 3
After swap
a = 3 b = 5
```

### Header Snippet

```
#include <stdio.h>
```

### Footer Snippet

```
int main() 
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before swap\na = %d b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap\na = %d b = %d\n", a, b);
    return 0;
}
```
