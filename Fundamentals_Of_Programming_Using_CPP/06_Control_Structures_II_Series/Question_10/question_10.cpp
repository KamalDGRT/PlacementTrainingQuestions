// Series X

#include <iostream>

using namespace std;

int main() {
    int n, i, d = 0, a = 2;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        a = a * a - 1;
    }

    return 0;
}
