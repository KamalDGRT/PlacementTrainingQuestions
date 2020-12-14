// Boating

#include <iostream>

using namespace std;

int main() {
    int bwt, ad, ch, tot;
    cin >> bwt >> ad >> ch;

    tot = ad * 75 + ch * 30;
    if (tot <= bwt)
        cout << "Boat is stable";
    else
        cout << "Boat will sink";

    return 0;
}
