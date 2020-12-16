// Dollars & Cents

#include <iostream>

using namespace std;

int main() {
    int d1, c1, d2, c2, d, c;

    cin >> d1 >> c1;
    cin >> d2 >> c2;

    d = d1 + d2;
    c = c1 + c2;
    if (c > 100) {
        c = c - 100;
        d += 1;
    }

    cout << d << endl << c;
    return 0;
}
