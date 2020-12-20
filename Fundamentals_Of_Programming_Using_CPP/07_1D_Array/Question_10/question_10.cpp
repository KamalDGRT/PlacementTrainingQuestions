// Compatible array

#include <iostream>

using namespace std;

int main() {
    int n1, n2, i, flag = 1;
    int a[15], b[15];

    cin >> n1;
    for (i = 0; i < n1; i++)
        cin >> a[i];

    cin >> n2;
    for (i = 0; i < n2; i++)
        cin >> b[i];

    if (n1 != n2)
        flag = 0;

    else {
        for (i = 0; i < n1; i++)
            if (a[i] < b[i]) {
                flag = 0;
                break;
            }
    }

    (flag) ? cout << "Compatible" : cout << "Incompatible";
    return 0;
}
