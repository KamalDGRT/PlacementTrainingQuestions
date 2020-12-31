// Sum of even numbers

#include <iostream>

using namespace std;

int evensum(int a[], int num, int sum) {
    if (num >= 0) {
        if ((a[num]) % 2 == 0)
            sum += a[num];
        evensum(a, num - 1, sum);
    }
    else
        return sum;
}

int main() {
    int n, i, sum = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter the number of elements in the array" << endl;
    cout << "Enter the elements in the array" << endl;
    cout << "The sum of the even elements in the array is " << evensum(a, n - 1, sum);

    return 0;
}
