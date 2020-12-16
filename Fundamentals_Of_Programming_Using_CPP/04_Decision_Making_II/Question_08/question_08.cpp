// Hotel Tariff Calculator

#include <iostream>

using namespace std;

int main() {
    int mm, day, days, price;
    cin >> mm >> day >> days;

    if (mm > 12 || mm <= 0)
        cout << "Invalid Input";
    else {
        price = days * day;
        if (mm == 4 || mm == 5 || mm == 6 || mm == 11 || mm == 12)
            price += (20 * price / 100);
        cout << price;
    }

    return 0;
}
