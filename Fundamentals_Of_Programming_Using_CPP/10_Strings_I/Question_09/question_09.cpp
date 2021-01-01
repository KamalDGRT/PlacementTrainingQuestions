// String uppercase

#include <iostream>

using namespace std;

char *strupr(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        i++;
    }

    return s;
}

int main() {
    char str1[50];
    cin.getline(str1, 50);

    cout << "String in uppercase is " << strupr(str1);
    return 0;
}
