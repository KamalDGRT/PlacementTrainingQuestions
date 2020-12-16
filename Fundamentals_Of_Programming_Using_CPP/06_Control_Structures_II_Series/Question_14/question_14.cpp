// Series XIV

#include <iostream>

using namespace std;

int main() {
    int n, i, a = 2;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << a << " ";
        a = 2 * a + 1;
    }

    return 0;
}
