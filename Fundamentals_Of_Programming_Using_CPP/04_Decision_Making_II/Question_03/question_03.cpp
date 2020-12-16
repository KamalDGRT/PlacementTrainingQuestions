// Tank

#include <iostream>

using namespace std;

int main() {
    int N, X, r, h, vol, total;
    cin >> r >> h;
    cin >> N >> X;

    vol = 3.14 * r * r * h;
    total = N * X; // litres of water received

    if (vol <= total)
        cout << "The tank can ";
    else
        cout << "The tank cannot ";
    cout << "be filled within " << X << " hours";
    return 0;
}
