// Debt Repay

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int x, y, r;
    double inter, amount, disc, finall;
    cin >> x >> y >> r;

    inter = (x * y * r) / 100;
    amount = x + inter;
    disc = inter * 2 / 100;
    finall = x + inter - disc;

    cout << fixed << setprecision(2) << inter << endl;
    cout << fixed << setprecision(2) << amount << endl;
    cout << fixed << setprecision(2) << disc << endl;
    cout << fixed << setprecision(2) << finall;

    return 0;
}
