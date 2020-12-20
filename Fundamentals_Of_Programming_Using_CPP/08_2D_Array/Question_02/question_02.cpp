// Transpose Matrix

#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    int a[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Transpose matrix is:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}
