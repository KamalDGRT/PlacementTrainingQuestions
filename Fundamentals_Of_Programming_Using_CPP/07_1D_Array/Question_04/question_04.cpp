// Remove duplicate elements

#include <iostream>

using namespace std;

int present(int a[], int n, int k) {
    int f = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == k) {
            f = 1;
            break;
        }
    return f;
}

int main() {
    int n, temp, i, k = 1;
    cin >> n;
    int a[n], t[100];

    for (i = 0; i < n; i++)
        cin >> a[i];

    // Storing the distinct elements in a temporary array
    t[0] = a[0];
    for (i = 1; i < n; i++)
        if (!present(t, k, a[i])) {
            t[k] = a[i];
            k++;
        }

    // Displaying the contents of the temporary array 'cause it has the distinct elements
    for (i = 0; i < k; i++)
        cout << t[i] << endl;

    return 0;
}
