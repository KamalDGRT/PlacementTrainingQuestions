// Mango Tree - II

#include <iostream>

using namespace std;

int main() {
    int r, c, tno, m1, m2;
    cin >> r >> c >> tno;

    m1 = r * (c - 1);
    m2 = tno % r;
    if (tno <= r || tno % c == 1 || tno == (m1 + m2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
