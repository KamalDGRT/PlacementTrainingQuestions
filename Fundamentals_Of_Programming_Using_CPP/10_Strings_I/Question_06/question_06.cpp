// String copy

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[50], a[50];
    cin.getline(str, 50);
    strcpy(a, str);
    cout << "The copied string is " << a;
    return 0;
}
