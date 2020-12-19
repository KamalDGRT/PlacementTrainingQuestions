// Same or Not

#include <iostream>

using namespace std;

int main() {
    int m, n, flag = 1, i;
    cin >> m >> n;
    int a[m], b[n];

    for (i = 0; i < m; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cin >> b[i];

    if (m != n)
        flag = 0;

    else {
        for (i = 0; i < n; i++)
            if (a[i] != b[i]) {
                flag = 0;
                break;
            }
    }

    (flag) ? cout << "Same" : cout << "Not Same";
    return 0;
}
