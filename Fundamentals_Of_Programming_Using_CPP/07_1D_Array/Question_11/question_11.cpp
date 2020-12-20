// Sum of even numbers and sum of odd numbers

#include <iostream>

using namespace std;

int main() {
    int n, i, osum = 0, esum = 0;
    cin >> n;
    int a[n];
    
    for (i = 0; i < n; i++) {
        cin >> a[i];
        a[i] % 2 ? osum += a[i] : esum += a[i];
    }

    cout << "The sum of the even numbers in the array is " << esum << endl;
    cout << "The sum of the odd numbers in the array is " << osum;

    return 0;
}
