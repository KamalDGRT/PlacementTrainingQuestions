/*
    Question 01
    Odd or Even
*/

// Header Snippet
#include <stdio.h>

// Solution
void oddoreven(int *a) {
    printf("%d is ", *a);
    if(*a % 2)
        printf("odd");
    else
        printf("even");
}

// Footer Snippet
int main()
{
    int a;
    scanf("%d", &a);
    oddoreven(&a);
    return 0;
}
