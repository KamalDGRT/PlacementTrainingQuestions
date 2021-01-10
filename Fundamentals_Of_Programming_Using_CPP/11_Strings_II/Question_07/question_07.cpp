// WORDAKSHARI

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array of Strings
    string a[50];

    int i = 0;
    int n, lastPos;

    // Loop exits only when the user enters ####
    while (1) {
        getline(cin, a[i]);
        i++;
        if (!a[i - 1].compare("####"))
            break;
    }

    // Total number of words entered by the user
    n = i;

    cout << a[0] << endl;

    // Iterating till (n - 1) because we are checking with the next word.
    // Plus, A[n] will always be ####. So, need not check that.
    for (i = 0; i < n - 1; i++) {
        lastPos = a[i].size() - 1;

        // Checking if the last character of first string is same as the starting
        // letter of the next string
        if (a[i][lastPos] == a[i + 1][0])
            cout << a[i + 1] << endl;
    }

    return 0;
}
