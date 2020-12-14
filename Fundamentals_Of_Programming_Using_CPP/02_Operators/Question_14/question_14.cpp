// 3 Idiots

#include <iostream>

using namespace std;

int main() {
    float x1, x2, y1, y2, x, y;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    x = ((x1 + x2) / 2);
    y = ((y1 + y2) / 2);

    cout << "Rachel\'s house is located at (" << x << ", " << y << ")";
    return 0;
}
