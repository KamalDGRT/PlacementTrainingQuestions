// Treasure Finder

#include <iostream>

using namespace std;

int main() {
    int a, b, c, hcf, st, sl;
    cin >> a >> b >> c;

    // Second Least Number
    if (a >= b && a >= c)
        (b >= c) ? sl = b : sl = c;
    else if (b >= a && b >= c)
        (a >= c) ? sl = a : sl = c;
    else if (a >= b)
        sl = a;
    else
        sl = b;

    // Highest Common Factor
    st = a < b ? (a < c ? a : c) : (b < c ? b : c);
    for (hcf = st; hcf >= 1; hcf--)
    {
        if (a % hcf == 0 && b % hcf == 0 && c % hcf == 0)
            break;
    }

    cout << "The treasure is in box which has number " << sl << endl;
    cout << "The code to open the box is " << hcf;
    return 0;
}
