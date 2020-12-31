// String Length

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i = 0;

    getline(cin, str);
    while (str[i] != '\0')
        i++;

    cout << "The length of word " << str << " is " << i - 1;
    return 0;
}
