// Compute a^n

#include <iostream>

using namespace std;

int p(int a, int n) {
    if (n > 0)
        return a * p(a, n - 1);
    else
        return 1;
}

int main() {
    int a, n;

    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "The value of " << a << " power " << n << " is " << p(a, n);
    return 0;
}
