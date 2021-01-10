// Counting

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, specialCharacters = 0;
    getline(cin, str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;

        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            consonants++;

        else if (str[i] >= '0' && str[i] <= '9')
            digits++;

        else if (str[i] == ' ')
            spaces++;

        else
            specialCharacters++;
    }

    cout << "Vowels:" << vowels << endl;
    cout << "Consonants:" << consonants << endl;
    cout << "White Spaces:" << spaces << endl;
    cout << "Digits:" << digits << endl;
    cout << "Symbols:" << specialCharacters;

    return 0;
}
