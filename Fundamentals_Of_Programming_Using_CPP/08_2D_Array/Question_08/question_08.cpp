// Sum of Boundary

#include <iostream>

using namespace std;

int main() {
    int r, c, i, j, sum = 0;
    cin >> r >> c;
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            cin >> a[i][j];

            if (i == 0 || j == 0 || i == (r - 1) || j == (c - 1))
                sum += a[i][j];
        }

    cout << "Sum of boundaries is " << sum;
    return 0;
}
