// Array Mean

#include <iostream>

using namespace std;

int main() {
    int n, i, a[20], mean = 0;

    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        mean += a[i];
    }
    mean /= n;

    cout << "The mean of the array is " << mean;
    return 0;
}
