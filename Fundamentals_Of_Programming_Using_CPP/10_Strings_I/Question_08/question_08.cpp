// String concatenation

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[50], str2[50];
    cin.getline(str1, 50);
    cin.getline(str2, 50);
    cout << "The concatenated string is " << strcat(str1, str2);
    return 0;
}
