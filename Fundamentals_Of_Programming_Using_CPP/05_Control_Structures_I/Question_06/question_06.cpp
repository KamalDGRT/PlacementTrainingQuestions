// Friendly Pair

#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum1 = 0, sum2 = 0, i;
    cin >> num1 >> num2;
    
    for (i = 1; i < num1; i++)
        if (num1 % i == 0)
            sum1 = sum1 + i;
        
    
    for (i = 1; i < num2; i++)
        if (num2 % i == 0)
            sum2 = sum2 + i;
    
    if ((double)num1 / num2 == (double)sum1 / sum2)
        cout << "Friendly Pair";
    else
        cout << "Not Friendly Pair";

    return 0;
}
