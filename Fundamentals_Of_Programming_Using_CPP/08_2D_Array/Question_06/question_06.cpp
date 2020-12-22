// Greatest Sum

#include <iostream>

using namespace std;

int main() {
    int r, c, i, j, ri, rmax, cmax, ci;
    cin >> r >> c;
    int a[r][c], rsum[r], csum[c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];

    for (i = 0; i < r; i++) {
        rsum[i] = 0;
        csum[i] = 0;
        for (j = 0; j < c; j++) {
            rsum[i] += a[i][j];
            csum[i] += a[j][i];
        }
    }

    rmax = rsum[0];
    ri = 0;
    for (i = 1; i < r; i++)
        if (rmax < rsum[i]) {
            rmax = rsum[i];
            ri = i;
        }

    cmax = csum[0];
    ci = 0;
    for (i = 1; i < c; i++)
        if (cmax < csum[i]) {
            cmax = csum[i];
            ci = i;
        }

    cout << "Sum of rows is ";
    for (i = 0; i < r; i++)
        cout << rsum[i] << " ";
    cout << endl << "Row " << ri + 1 << " has maximum sum" << endl;

    cout << "Sum of columns is ";
    for (i = 0; i < c; i++)
        cout << csum[i] << " ";
    cout << endl << "Column " << ci + 1 << " has maximum sum";

    return 0;
}
