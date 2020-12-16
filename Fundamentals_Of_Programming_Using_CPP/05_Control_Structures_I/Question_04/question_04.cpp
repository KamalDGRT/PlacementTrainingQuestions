// Harshad Number

#include <iostream>

using namespace std;

int main() {

    int n, num, sum = 0, rem;
    cin >> num;

    n = num;
    while (num > 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    if (n % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not Harshad Number";

    return 0;
}
