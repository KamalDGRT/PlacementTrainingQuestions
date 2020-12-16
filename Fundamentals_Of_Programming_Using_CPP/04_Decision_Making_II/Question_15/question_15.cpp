// Matinee Movie Tickets

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age;
    float timing, price;
    cin >> age >> timing;

    if (age > 13)
        price = 8;
    else
        price = 4;

    if ((int)timing == 13)
    {
        if (age > 13)
            price = 5;
        else
            price = 2;
    }
    cout << "$";
    cout << fixed << setprecision(2) << price;

    return 0;
}
