// Queue

#include <iostream>

using namespace std;

int main() {
    int n, m, i, ans = 0, cap;
    cin >> n >> m;
    int S[n];

    for (i = 0; i < n; i++)
        cin >> S[i];

    for (i = 0, cap = 0; i < n; cap = 0) {
        while (i < n && cap + S[i] <= m)
            cap += S[i++];
        ans++;
    }

    cout << ans;
    return 0;
}
