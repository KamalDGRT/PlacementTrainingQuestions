// String-count the vowels

#include <iostream>

using namespace std;

int isvowel(char a) {
    // Lowering the case of the character
    if (a >= 'A' && a <= 'Z')
        a += 32;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    return 0;
}

int main() {
    char str[50];
    int vcount = 0, i;

    cin.getline(str, 50);
    for (i = 0; str[i]; i++)
        if (isvowel(str[i]))
            vcount++;
    cout << "Number of vowels: " << vcount;

    return 0;
}
