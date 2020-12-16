// Chalk

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float n, root, count = 0.00;
    int val = 1, days, ans;
    cin >> n;

    root = (1 / sqrt(n));
    cout << setprecision(2);

    for (int i = 0; i < n; i++)
        count = root + count;

    days = int(count);
    ans = n + days;

    cout << ans + 1;
    return 0;
}
