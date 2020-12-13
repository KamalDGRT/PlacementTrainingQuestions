// Four Musketeers

#include<iostream>

using namespace std;

int main() {

    float x1, x2, x3, y1, y2, y3, x, y;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    x = (x1 + x2 + x3) / 3;
    y = (y1 + y2 + y3) / 3;

    cout << x << endl << y;
    return 0;
}
