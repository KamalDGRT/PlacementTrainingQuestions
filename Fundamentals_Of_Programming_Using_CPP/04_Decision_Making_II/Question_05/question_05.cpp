// Profit or loss

#include <iostream>

using namespace std;

int main() {
    int buy, sell, left;
    cin >> buy >> sell;

    sell *= 12;
    if (buy == sell)
        cout << "No profit nor loss";
    else {
        if (sell > buy) {
            cout << "Profit";
            left = sell - buy;
        }
        else if (buy > sell) {
            cout << "Loss";
            left = buy - sell;
        }
        cout << " : Rs." << left;
    }

    return 0;
}
