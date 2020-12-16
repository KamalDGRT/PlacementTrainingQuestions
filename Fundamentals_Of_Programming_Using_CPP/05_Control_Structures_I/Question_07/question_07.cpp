// Amoeba Multiplication

#include <iostream>

using namespace std;

int main() {
    int a = -1, b = 1, c, n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c;

    return 0;
}
