// Symmetric Matrix

#include <iostream>

using namespace std;

const int MAX = 10;

void transpose(int mat[][MAX], int tr[][MAX], int N) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            tr[i][j] = mat[j][i];
}

bool isSymmetric(int mat[][MAX], int N)
{
    int tr[N][MAX];
    transpose(mat, tr, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != tr[i][j])
                return false;
    return true;
}

int main() {
    int mat[10][10];
    int i, j, m, n;

    cin >> m >> n;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> mat[i][j];

    isSymmetric(mat, n) ? cout << "Symmetric" : cout << "Not Symmetric";
    return 0;
}
