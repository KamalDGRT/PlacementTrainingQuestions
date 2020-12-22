// Uniformity Matrix

#include <iostream>

using namespace std;

int main() {
    int n, i, j, c = 0;
    int a[5][5];

    cin >> n;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] % 2)
                c++;
        }

    (c == 0 || c == (n * n)) ? cout << "Yes" : cout << "No";

    return 0;
}
