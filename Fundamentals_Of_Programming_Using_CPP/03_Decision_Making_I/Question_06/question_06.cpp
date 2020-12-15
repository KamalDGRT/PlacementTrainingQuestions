// Car mileage

#include <iostream>

using namespace std;

int main() {
    float m, x;
    int l, d;
    cin >> m >> l >> d;

    x = m * l;

    if(x < d)
        cout << "Cannot reach" << endl;
    else
        cout << "Can reach" << endl;
    return 0;
}
