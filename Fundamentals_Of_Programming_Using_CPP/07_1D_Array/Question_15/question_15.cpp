// Functions – Array type

#include <iostream>

using namespace std;

int main() {
    int n, i, a[20], odd = 0, even = 0;

    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        a[i] % 2 ? odd++ : even++;
    }

    cout << "The array is ";
    if (odd == n)
        cout << "Odd";
    else if (even == n)
        cout << "Even";
    else
        cout << "Mixed";

    return 0;
}
