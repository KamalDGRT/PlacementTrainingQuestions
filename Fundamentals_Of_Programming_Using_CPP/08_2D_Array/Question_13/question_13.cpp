// Diagonal Matrix

#include <iostream>

using namespace std;

int main() {
    int n, i, j, diag = 1;
    cin >> n;
    int a[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i != j && a[i][j] != 0) {
                diag = 0;
                break;
            }

    diag ? cout << "Yes" : cout << "No";

    return 0;
}
