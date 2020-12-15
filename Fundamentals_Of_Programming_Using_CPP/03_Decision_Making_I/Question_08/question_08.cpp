// Gardening

#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >>a >> b >> c;

    if(a + b == c || (a + b) * 2 == c)
        cout << "It is an orange tree";
    else  
        cout << "It is not an orange tree";
    return 0;
}
