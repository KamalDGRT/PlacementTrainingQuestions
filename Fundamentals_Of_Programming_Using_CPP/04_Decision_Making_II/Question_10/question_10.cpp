// Budget

#include <iostream>

using namespace std;

int main() {
    float br, vs, as, arms, legs;
    cin >> br >> vs >> as >> arms >> legs;

    br *= 350.34;
    vs *= 230.90;
    as *= 190.55;
    arms *= 125.30;
    legs *= 180.90;
    if ((br + vs + as + arms + legs) <= 15000)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
