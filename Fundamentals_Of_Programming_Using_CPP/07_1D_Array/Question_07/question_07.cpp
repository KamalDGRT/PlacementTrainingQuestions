// Serena and Mugs

#include <iostream>

using namespace std;

int main() {

    int n, c, i, sum = 0;
    cin >> n;
    cin >> c;
    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
        sum = sum + arr[i];

    (sum <= c) ? cout << "YES" : cout << "NO";

    return 0;
}
