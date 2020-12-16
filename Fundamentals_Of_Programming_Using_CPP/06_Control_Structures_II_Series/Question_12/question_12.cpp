// Series XII

#include <iostream>

using namespace std;

int main() {
    int n, a = 7, b = 2, c, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
