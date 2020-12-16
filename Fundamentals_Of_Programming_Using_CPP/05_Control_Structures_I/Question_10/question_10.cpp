// Viva on odd numbers

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    float marks = 0.0;

    for (int i = 0; i < 3;) {
        cin >> num;
        if (num < 0) {
            marks = marks - 1;
            break;
        }
        else if (num % 2 == 0)
            marks = marks - 0.5;
        else {
            marks = marks + 1;
            i++;
        }
    }

    cout << fixed << setprecision(1) << marks << endl;

    return 0;
}
