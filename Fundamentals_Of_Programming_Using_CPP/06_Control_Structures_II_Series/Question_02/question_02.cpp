// Series II

#include <iostream>

using namespace std;

int main() {
    int n, i, d = 0, a = 6;
    cin >> n;

    for (i = 0; i < n; i++) {
        a += d;
        cout << a << " ";
        d += 5;
    }

    return 0;
}
