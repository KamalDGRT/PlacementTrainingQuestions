// Series V

#include <iostream>

using namespace std;

int main()
{
    int n, i, d = 0, a = 11;
    cin >> n;

    for (i = 0; i < n; i++) {
        d = a * a;
        cout << d << " ";
        a += 4;
    }

    return 0;
}
