// Remove 'the' Occurrence

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, word;
    int i;
    char x;

    getline(cin, str);
    
    for (i = 0; str[i] != '\0'; i++) {
        x = str[i];
        if (x == ' ') {
            if (word != "the")
                cout << word << " ";
            word = "";
        }
        else
            word = word + x;
    }

    if (word != "the")
        cout << word << " ";

    return 0;
}
