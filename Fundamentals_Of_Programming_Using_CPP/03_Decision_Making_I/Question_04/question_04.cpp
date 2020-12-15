// Electricity Bill

#include <iostream>

using namespace std;

int main() {
    float units, bill;
    cin >> units;
    
    if(units >= 0 && units <= 200)
        bill = units * 0.5;
    else if(units >= 201 && units <= 400)
        bill = 100 + units * 0.65;
    else if(units >= 401 && units <= 600)
        bill = 200 + units * 0.80;
    else if(units > 600)
        bill = 425 + units * 1.25;

    cout << "Rs." << (int)bill;
    return 0;
}
