// The Miser's Discount

#include<iostream>

using namespace std;

int main() {
    float item1, item2, discountPercentage, discountAmount, total, amountSaved;
    cin >> item1 >> item2 >> discountPercentage;

    total = item1 + item2;
    amountSaved = discountPercentage * total / 100;
    discountAmount = total - amountSaved;

    cout << total << endl;
    cout << discountAmount << endl;
    cout << amountSaved;
    return 0;
}
