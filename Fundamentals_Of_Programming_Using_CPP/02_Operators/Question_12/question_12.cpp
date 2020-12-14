// Fencing the ground

#include<iostream>

using namespace std;

int main() {
    int l, b, p, a;
    cin >> l >> b;

    p = 2 * (l + b);
    a = l * b;

    cout << "Required length is " << p << " m" << endl;
    cout << "Required area of carpet is " << a << " sqm";
    return 0;
}
