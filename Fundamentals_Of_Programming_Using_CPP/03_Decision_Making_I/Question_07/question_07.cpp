// Swimming Pool

#include <iostream>

using namespace std;

int main() {
    int side, volume, tostore;
    cin >> side >> tostore;

    volume = side * side * side; // Volume in cubic metres
    volume = volume * 1000; // Volume in litres

    if(volume > tostore)
        cout << "Can store";
    else
        cout << "Cannot store";

    return 0;
}
