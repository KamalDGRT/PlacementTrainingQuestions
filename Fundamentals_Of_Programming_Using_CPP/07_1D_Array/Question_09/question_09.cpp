// Stock span

#include <iostream>

using namespace std;

int main() {

    int n, x = 1, y = 0, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << x;

    for (i = 1; i < n; i++) {
        if (a[i] < a[i - 1])
            cout << endl << x;

        else {

            y += 2;
            cout << endl << y;
        }
    }

    return 0;
}
