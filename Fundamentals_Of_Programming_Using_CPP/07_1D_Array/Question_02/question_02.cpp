// Ascending order

#include <iostream>

using namespace std;

int main() {
    int n, i, j, t;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    // Using Bubble Sort to Sort the Array
    for (i = 0; i < n; i++)
        for (j = 0; j < (n - i - 1); j++)
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    cout << "Sorted array is:";
    for (i = 0; i < n; i++)
        cout << endl << a[i];

    return 0;
}
