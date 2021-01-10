// String-Delete vowels

#include <iostream>

using namespace std;

int isNotVowel(char c) {
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
        (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        return 0;
    return 1;
}

int main() {
    char str[30];
    int i;
    cin.getline(str, 30);
    for (i = 0; str[i] != '\0'; i++)
        if (isNotVowel(str[i]))
            cout << str[i];
    return 0;
}
