// Traffic Signal

#include <iostream>

using namespace std;

int main() {
    float speed, distance, gtime, time;
    cin >> speed >> distance >> gtime;

    speed = speed / 2.237;   // converting miles per hour to meters per second
    distance *= 1609.34;     // converting miels to metres
    time = distance / speed;
    if (time < gtime)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
