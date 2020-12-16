// Series VIII

#include <iostream>

using namespace std;

int main() {
    int n, i, b = 1, d = 0, a = 4;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        d = b * b;
        a += d;
        b += 1;
    }

    return 0;
}
