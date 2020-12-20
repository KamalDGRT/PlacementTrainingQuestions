#include <stdio.h>

int reverse(int number) {
    int rev = 0, rem;
    while (number) {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= 10;
    }
    return rev;
}

int isadam(int number) {
    int n_squared = number * number;
    int rev_of_n = reverse(number);
    int rev_squared = rev_of_n * rev_of_n;
    int rev_of_rev_squared = reverse(rev_squared);
    if(n_squared == rev_of_rev_squared)
        return 1;
    return 0;
}

int main() {
    int number;
    scanf("%d", &number);

    if(isadam(number))
        printf("The number is an Adam number");
    else
        printf("The number is not an Adam number");

    return 0;
}
