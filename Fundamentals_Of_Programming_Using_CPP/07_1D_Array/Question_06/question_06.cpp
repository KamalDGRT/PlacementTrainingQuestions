// Stick games I

#include <iostream>

using namespace std;

int main() {
    int n, m, res;
    cin >> n >> m;

    if (n < m)
        res = n;
    else
        res = m;

    if (res % 2 == 0)
        cout << "Jaime Lannister";
    else
        cout << "Tyrion Lannister";

    return 0;
}
