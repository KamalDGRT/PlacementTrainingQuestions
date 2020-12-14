// Splitting into the teams

#include<iostream>

using namespace std;

int main() {
    int m, n, f, l;
    cin >> m >> n;

    f = m / n;
    l = m % n;

    cout << "The number of friends in each team is " << f << " and left out is " << l;
    return 0;
}
