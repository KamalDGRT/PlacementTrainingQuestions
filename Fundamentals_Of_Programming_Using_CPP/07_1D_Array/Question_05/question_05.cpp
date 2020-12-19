// Minimum Scalar Product

#include <iostream>

void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {

        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

using namespace std;

int main() {
    int n, i, sum = 0;
    cin >> n;
    int a[n], b[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cin >> b[i];

    selectionSort(a, n);
    selectionSort(b, n);

    for (i = 0; i < n; i++)
        sum += a[i] * b[i];

    cout << sum;

    return 0;
}
