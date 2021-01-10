// Remove character except alphabets

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string source, result = "";
    char element;
    int i;

    getline(cin, source);

    for (i = 0; source[i]; i++) {
        element = source[i];
        if (isalpha(element))
            result += element;
    }

    cout << result;
    return 0;
}
