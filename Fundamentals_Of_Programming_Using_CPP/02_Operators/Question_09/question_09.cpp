// Wind chill factor

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    float t, v, wcf;
    cin >> t >> v;

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    cout << wcf;
    return 0;
}
