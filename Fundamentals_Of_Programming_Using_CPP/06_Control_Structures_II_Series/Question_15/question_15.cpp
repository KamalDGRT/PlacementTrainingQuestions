// Series XV

#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 8, c, d = 2, i, n;
    cin >> n;
    cout << a << " " << b << " ";

    for (i = 3; i <= n; i++) {
        c = a + b + d;
        cout << c << " ";
        a = b;
        b = c;
        d += 1;
    }

    return 0;
}
