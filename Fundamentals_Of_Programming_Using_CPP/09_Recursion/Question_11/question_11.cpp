// Number of Digits

#include <iostream>

using namespace std;

int countdigits(int num) {
    static int count = 0;
    if (num > 0) {
        count++;
        countdigits(num / 10);
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << "Enter the value of n" << endl;
    cout << "The number of digits in " << n << " is " << countdigits(n);
    return 0;
}
