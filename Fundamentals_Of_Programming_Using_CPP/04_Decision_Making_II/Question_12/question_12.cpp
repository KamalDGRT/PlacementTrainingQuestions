// Circle intersection

#include <iostream>

using namespace std;

int main() {
    float x1, y1, x2, y2, r1, r2, distSq, radSumSq;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    int t;

    distSq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    radSumSq = (r1 + r2) * (r1 + r2);
    if (distSq == radSumSq)
        t = 1;
    else if (distSq > radSumSq)
        t = -1;
    else
        return 0;

    if (t == 1)
        cout << "Tangential";
    else if (t < 0)
        cout << "Do not Overlap";
    else
        cout << "Overlap";

    return 0;
}
