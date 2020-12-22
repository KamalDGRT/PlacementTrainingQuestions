// Maximum element in the matrix

#include <iostream>

using namespace std;

int main() {
    int r, c, i, j, max;
    cin >> r >> c;
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> a[i][j];

    max = a[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] >= max)
                max = a[i][j];

    cout << "The maximum element is " << max;
    return 0;
}
