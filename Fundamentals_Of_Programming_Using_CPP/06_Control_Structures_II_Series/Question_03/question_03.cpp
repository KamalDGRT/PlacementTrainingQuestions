// Series III

#include <iostream>

using namespace std;

int main() {
    int n, i, d = 0, a = 3;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        a *= 3;
    }

    return 0;
}
