# Question 01

**Odd or Even**

Mrs. Anitha, our favorite Math teacher wanted to teach her students to check
whether the given number is odd or even.

Write a program to accept an integer and to check whether the given number is
odd or even using functions and pointers.

Note: Print the text "a is an odd number" and " a is an even number" inside the
function.

#### Function Specificaton

##### void oddoreven(int *a)

This function prints the text "a is an odd number" if the number is odd, else prints
"a is an even number" if the number is even.

### Input Format

The input consists of an integer.

### Output Format

Refer to the sample input and output for formatting details.

## Sample Testcases

### Input 1

```
5
```

### Output 1

```
5 is odd
```

### Input 2

```
6
```

### Output 2

```
6 is even
```

### Header Snippet

```
#include <stdio.h>
```

### Footer Snippet

```
int main()
{
    int a;
    scanf("%d", &a);
    oddoreven(&a);
    return 0;
}
```
