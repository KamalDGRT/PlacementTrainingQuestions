// Trendy numbers

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int n, t, r, l;
    cin >> n;

    string nstring = to_string(n);
    l = nstring.length();
    t = nstring[1] - '0';

    if (l == 3 && !(t % 3))
        cout << "Trendy Number";
    else if (l < 3 || l > 3)
        cout << "Invalid Number";
    else
        cout << "Not a Trendy Number";

    return 0;
}
