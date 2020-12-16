// Target Practice

#include <iostream>

using namespace std;

int main() {
    int n, a, i = 0, c = 0, s = 0;
    cin >> n;

    do {
        c++;
        cin >> a;
        s += a;
        i++;
    } while (s < n);

    cout << "The number of turns is " << c;
    return 0;
}
