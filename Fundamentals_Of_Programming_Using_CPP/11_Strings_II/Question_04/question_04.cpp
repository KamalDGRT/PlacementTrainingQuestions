// String-Alphabet Frequency
// I will be storing the frequency of the uppercase characters in the first 26 spaces.
// The next 26 spaces, I will store the frequency of the lowercase characters.

#include <iostream>

using namespace std;

int main() {
    char str[50], ch;
    int frequency[52] = {0}, i, index;
    cin.getline(str, 50);

    for (i = 0; str[i]; i++) {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            index = ch - 'A';

        else if (ch >= 'a' && ch <= 'z')
            index = ch - 'a' + 26;
        // evaluates to index = ch - 71;
        // but how that number came won't strike immediately
        // That's why it is better to keep it in human understandable logic.

        frequency[index] += 1;
    }

    for (i = 0; i < 26; i++)
        if (frequency[i])
            cout << (char)(i + 'A') << " " << frequency[i] << endl;

    for (i = 0; i < 26; i++)
        if (frequency[i + 26])
            cout << (char)(i + 'a') << " " << frequency[i + 26] << endl;
    return 0;
}
