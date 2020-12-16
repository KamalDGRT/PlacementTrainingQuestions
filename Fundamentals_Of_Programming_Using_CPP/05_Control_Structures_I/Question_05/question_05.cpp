// Abundant Number

#include <iostream>
#include <cmath>

using namespace std;

int getSum(int n) {
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                sum = sum + i;
            else {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}

bool checkAbundant(int n) {
    return (getSum(n) > n);
}

int main() {
    int n;
    cin >> n;
    checkAbundant(n) ? cout << "Abundant Number" : cout << "Not Abundant Number";
    return 0;
}
