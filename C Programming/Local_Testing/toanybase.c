#include <stdio.h>

long decimalToAnyBase(int decimalnum, int base)
{
    long basenumber = 0;
    int rem, temp = 1;

    while (decimalnum != 0)
    {
        rem = decimalnum % base;
        decimalnum = decimalnum / base;
        basenumber = basenumber + rem * temp;
        temp = temp * 10;
    }
    return basenumber;
}

int main()
{
    int number, base;
    long result;
    scanf("%d", &number);
    scanf("%d", &base);
    result = decimalToAnyBase(number, base);
    printf("%lld", result);
    return 0;
}
