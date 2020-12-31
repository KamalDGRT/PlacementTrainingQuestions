// Maximum element in an array

#include <iostream>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int findMaxRec(int A[], int n) {
    if (n == 1)
        return A[0];
    return max(A[n - 1], findMaxRec(A, n - 1));
}

int main() {
    int i, n;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the size of the array" << endl;
    cout << "Enter " << n << " elements of an array" << endl;
    cout << "Maximum element in the array is " << findMaxRec(a, n);
    return 0;
}
