// Decimal to Binary

#include <iostream>

using namespace std;

int convert(int dec) {
    if (dec == 0)
        return 0;
    return (dec % 2 + 10 * convert(dec / 2));
}

int main() {
    int dec, bin;

    cin >> dec;
    bin = convert(dec);
    cout << bin;

    return 0;
}
