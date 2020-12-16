// Series XI

#include <iostream>

using namespace std;

int main() {
    int n, i;
    float d = 20.5, a = 95;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        a += d;
        d += 2;
    }

    return 0;
}
