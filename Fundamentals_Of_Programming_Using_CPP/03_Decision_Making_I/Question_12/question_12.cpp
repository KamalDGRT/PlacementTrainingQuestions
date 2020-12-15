// Anna University grading system

#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;

    if (m > 100)
        cout << "Invalid Input";
    else if(m == 100)
        cout << "S";
    else if(m >= 90 && m <= 99)
        cout << "A";
    else if(m >= 80 && m <= 89)
        cout << "B";
    else if(m >= 70 && m <= 79)
        cout << "C";
    else if(m >= 60 && m <= 69)
        cout << "D";
    else if(m >= 50 && m <= 59)
        cout << "E";
    else if(m < 50)
        cout << "F";

    return 0;
}
