// Conversion of Base 10 Number to any base

#include <iostream>

using namespace std;

int convert(int number, int base) {
    if (number == 0 || base == 10)
        return number;
    return (number % base) + 10 * convert(number / base, base);
}

int main() {
    int n, b;
    cin >> n >> b;

    cout << "Enter the value of n" << endl;
    cout << "Enter the base to which you want to convert" << endl;
    cout << "The number in base " << b << " is " << convert(n, b);

    return 0;
}
