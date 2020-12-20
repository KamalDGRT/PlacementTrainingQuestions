// Sum of Rows

#include <iostream>

using namespace std;

int main() {
    int r, c, i, j, sum = 0;
    cin >> r >> c;
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        cout << sum << endl;
    }

    return 0;
}
