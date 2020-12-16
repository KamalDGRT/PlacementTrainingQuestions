// Series IX

#include <iostream>

using namespace std;

int main() {
    int n, i, d = 13, a = 2;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        a += d;
        d += 13;
    }

    return 0;
}
