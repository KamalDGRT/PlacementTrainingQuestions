// Treasure Hunter

#include<iostream>

using namespace std;

int main() {
    float goldCoins, x, y;
    int shareBen, shareBlack, shareOthers;
    cin >> goldCoins >> x >> y;

    shareBen = goldCoins * x / 100;
    goldCoins -= shareBen;
    shareBlack = y * goldCoins / 100;
    goldCoins -= shareBlack;
    shareOthers = goldCoins / 3;

    cout << shareBen << endl;
    cout << shareBlack << endl;
    cout << shareOthers << endl;
    return 0;
}
