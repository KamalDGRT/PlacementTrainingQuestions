// String lowercase

#include <iostream>

using namespace std;

char *strlwr(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        i++;
    }

    return s;
}

int main() {
    char str1[50];
    cin.getline(str1, 50);

    cout << "String in lowercase is " << strlwr(str1);
    return 0;
}
