// Prime Number

#include <iostream>

using namespace std;

int isPrime(int n, int i = 2) {
    // Base cases
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;

    // Check for next divisor
    return isPrime(n, i + 1);
}

int main() {
    int n;
    cin >> n;

    (isPrime(n)) ? cout << "Prime Number" : cout << "Not a Prime Number";
    return 0;
}
