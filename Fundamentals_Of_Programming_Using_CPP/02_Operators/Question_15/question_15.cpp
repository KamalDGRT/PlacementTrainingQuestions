// Alice in Wonderland

#include <iostream>

using namespace std;

int main() {
    int num, sum;
    cin >> num;

    sum = num / 10 + num % 10;

    cout << "Alice must go in path-" << sum;
    return 0;
}
