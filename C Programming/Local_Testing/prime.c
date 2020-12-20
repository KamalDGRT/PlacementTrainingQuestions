#include <stdio.h>

int isprime(int a)
{
    int i, fcount = 0;

    for (i = 1; i <= a; i++)
        if (a % i == 0)
            fcount += 1;

    if (fcount == 2)
        return 1;
    return 0;
}

int main()
{
    int l, u, i;
    scanf("%d", &l);
    scanf("%d", &u);
    for (i = l; i <= u; i++)
        if (isprime(i))
            printf("%d ", i);

    return 0;
}
