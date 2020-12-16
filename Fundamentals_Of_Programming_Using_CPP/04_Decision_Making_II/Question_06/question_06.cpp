// Mango tree - I

#include <iostream>

using namespace std;

int main() {
    int row, col, num, col2, col3, col4, col5, row2;
    cin >> row >> col >> num;

    col2 = col * 2;
    col3 = col * 3;
    col4 = col * 4;
    col5 = col * 5;
    row2 = row * 2;

    if (num > 1 && num <= col)
        cout << "Yes";

    else if (num == col || num == col2 || num == col3 || num == col4 || num == col5)
        cout << "Yes";

    else if (num == (col + 1) || num == (col2 + 1) || num == (col3 + 1) || num == (col4 + 1) || num == (col5 + 1))
        cout << "Yes";

    else
        cout << "No";
    
    return 0;
}
