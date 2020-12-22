// Sum of Zig-Zag

#include <iostream>

using namespace std;

int main() {
    int m, n, sum = 0, row1 = 0, col_n = 0, diag = 0, i, j;
    cin >> m >> n;
    
    int mat[m][n];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> mat[i][j];

    for (j = 0; j < n - 1; j++)
        row1 = row1 + mat[0][j];

    for (i = 1; i < m; i++)
        col_n = col_n + mat[n - 1][i];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if ((i + j) == (m - 1))
                diag += mat[i][j];

    cout << "Sum of Zig-Zag pattern is " << diag + row1 + col_n;

    return 0;
}
