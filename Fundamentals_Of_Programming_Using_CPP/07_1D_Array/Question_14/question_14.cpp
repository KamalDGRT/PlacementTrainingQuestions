// Array Range

#include <iostream>

using namespace std;

int main() {
    int n, i, a[20], max, min;

    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];

    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] >= max)
            max = a[i];
        if (a[i] <= min)
            min = a[i];
    }

    cout << "The range of the array is " << max - min;
    return 0;
}
