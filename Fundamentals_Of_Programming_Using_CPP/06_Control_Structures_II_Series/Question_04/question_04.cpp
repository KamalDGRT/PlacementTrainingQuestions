// Series IV

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float a = 0.5;
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << a << " ";
        a *= 3;
    }

    return 0;
}
