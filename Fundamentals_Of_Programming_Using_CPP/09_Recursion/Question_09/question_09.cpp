// Sum of digits

#include <iostream>

using namespace std;

int digitsum(int n) {
    if (n == 0)
        return 0;
    return (n % 10 + digitsum(n / 10));
}

int main() {
    int n;

    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "The sum of digits in " << n << " is " << digitsum(n);
    return 0;
}
