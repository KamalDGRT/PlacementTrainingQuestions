// Array insertion

#include <iostream>

using namespace std;

int main() {
    int n, i, a[21], pos, val;

    cout << "Enter the number of elements in the array" << endl;
    cin >> n;

    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the location where you wish to insert an element" << endl;
    cin >> pos;

    if (pos > n)
        cout << "Invalid Input";
    else
    {
        pos - 1;

        cout << "Enter the value to insert" << endl;
        cin >> val;

        for (i = n; i >= pos; i--)
            a[i] = a[i - 1];
        a[i] = val;
        n += 1;

        cout << "Array after insertion is" << endl;

        for (i = 0; i < n; i++)
            cout << a[i] << endl;
    }
    return 0;
}
