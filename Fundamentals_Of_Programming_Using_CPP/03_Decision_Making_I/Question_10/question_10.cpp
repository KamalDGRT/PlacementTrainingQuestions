// Game with Shapes

#include <iostream>

using namespace std;

int main() {
    int rad, s, ac, as, d;
    cin >> rad >> s;

    as = s * s;
    d = 2 * rad;
    ac = 3.14 * rad * rad;

    if(ac < as && d <= s)  
        cout << "Circle can be inside a square";
    else
        cout << "Circle cannot be inside a square";

    return 0;
}
