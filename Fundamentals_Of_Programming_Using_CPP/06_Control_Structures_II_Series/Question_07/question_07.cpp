// Series VII

#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 2, i, n;
    cin >> n;

    cout << a << " " << b << " ";
    for (i = 3; i <= n; i++) {
        if (i % 2 == 1) {
            a = a * 3;
            cout << a;
        }
        else {
            b = b * 3;
            cout << b;
        }
        cout << " ";
    }

    return 0;
}
