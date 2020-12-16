// Time Sheet

#include <iostream>

using namespace std;

int main() {
    int sun, mon, tue, wed, thurs, fri, sat;
    int bonus, bonusrate, rate1, rate2, rate3, rate4, rate5, rate6, rate7, rate8 = 0;
    int edays, totaldays, totalrate;

    cin >> sun >> mon >> tue >> wed >> thurs >> fri >> sat;

    rate1 = sun * 150;
    rate7 = sat * 125;

    if (mon <= 8)
        rate2 = mon * 100;

    else if (mon > 8) {
        bonus = mon - 8;
        bonusrate = bonus * 115;
        rate2 = bonusrate + 800;
    }

    if (tue <= 8)
        rate3 = tue * 100;

    else if (tue > 8) {
        bonus = tue - 8;
        bonusrate = bonus * 115;
        rate3 = bonusrate + 800;
    }

    if (wed <= 8)
        rate4 = wed * 100;

    else if (wed > 8) {
        bonus = wed - 8;
        bonusrate = bonus * 115;
        rate4 = bonusrate + 800;
    }

    if (thurs <= 8)
        rate5 = thurs * 100;

    else if (thurs > 8) {
        bonus = thurs - 8;
        bonusrate = bonus * 115;
        rate5 = bonusrate + 800;
    }

    if (fri <= 8)
        rate6 = fri * 100;

    else if (fri > 8) {
        bonus = fri - 8;
        bonusrate = bonus * 115;
        rate6 = bonusrate + 800;
    }

    totaldays = mon + tue + wed + thurs + fri;

    if (totaldays > 40) {
        edays = totaldays - 40;
        rate8 = edays * 25;
    }

    totalrate = rate1 + rate2 + rate3 + rate4 + rate5 + rate6 + rate7 + rate8;
    cout << totalrate;

    return 0;
}
