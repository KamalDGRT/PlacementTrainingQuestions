// String sorting

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[50], t;
    int n, i, j;

    cin.getline(a, 50);
    n = strlen(a);

    // Sorting the string using Bubble-Sort Logic
    for (i = 0; i < n - 1; i++) // for passes
        for (j = 0; j < (n - i - 1); j++) // for comparisons
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    cout << "The sorted string is " << a;
    return 0;
}
