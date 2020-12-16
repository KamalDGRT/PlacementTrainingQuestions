// Microwave Oven

#include <iostream>

using namespace std;

int main() {
    int n;
    float ht1, rht;
    cin >> n >> ht1;

    if (n > 3)
        cout << "Number of items is more";
    else {
        if (n == 2)
            rht = ht1 + ht1 / 2;
        else if (n == 3)
            rht = ht1 + ht1;
        cout << rht;
    }

    return 0;
}
