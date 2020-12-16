// Series XIII

#include <iostream>

using namespace std;

int main() {
    int i, n, t;
    cin >> n;

    for (i = 1; i <= n; i++) {
        t = (11 * i * i) - (22 * i) + 16;
        cout << t << " ";
    }

    return 0;
}
