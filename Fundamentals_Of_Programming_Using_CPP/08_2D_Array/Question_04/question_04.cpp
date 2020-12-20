// Lower Triangular Matrix

#include <iostream>

using namespace std;

int main() {
    int n, i, j, flag = 1;
    cin >> n;
    int a[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][j] != 0) {
                flag = 0;
                break;
            }

    flag ? cout << "Lower Triangular Matrix" : cout << "Not a Lower Triangular Matrix";

    return 0;
}
