// Magic Square

#include <iostream>

using namespace std;

int main() {
    int n, i, j, Diag2 = 0, Diag1 = 0;
    cin >> n;
    int a[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (i == j)
                Diag1 += a[i][j];
            if (i + j + 1 == n)
                Diag2 += a[i][j];
        }

    (Diag1 == Diag2) ? cout << "Yes" : cout << "No";

    return 0;
}
