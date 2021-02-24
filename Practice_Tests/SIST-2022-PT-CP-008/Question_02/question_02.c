/*
    Question 02
    Fibonacci Numbers upto N

    5 out 6 test cases passed.
*/

#include <stdio.h>

int main() {
    int n, a = -1, b = 1, c= -1;
    scanf("%d", &n);

    if (n < 1) 
        printf("Invalid");
    else  {
        c = a + b;
        while (c < n) {
            c = a + b;
            if (c > n)
                break;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
