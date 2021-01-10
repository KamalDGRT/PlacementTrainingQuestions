// Special school

#include <iostream>

using namespace std;

// To find the length of the string
int STRLEN(char b[]) {
    int a = 0;
    while (b[a] != '\0')
        a = a + 1;
    return a;
}

// Reverses the string passed
void STRREV(char str[]) {
    int size = 0, i;
    char temp;
    size = STRLEN(str);

    i = 0;
    size = size - 1;
    while (i < size) {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
        i++;
    }
}

// Copies source string to destination
void STRCPY(char dest[], char source[]) {
    int l1 = 0;

    while (source[l1] != '\0') {
        dest[l1] = source[l1];
        l1++;
    }
    dest[l1] = '\0';
}

// Compares two strings
int STRCMP(char x[], char y[]) {
    int i, j, c = 0, t1, t2, l1, l2;

    l1 = STRLEN(x);
    l2 = STRLEN(y);

    for (i = 0, j = 0; i < l1 && j < l2; i++, j++) {
        t1 = x[i];
        t2 = y[j];
        c = t1 - t2;
        if (c != 0)
            break;
    }

    return c;
}

int main() {
    char str1[50], str2[50];

    cin.getline(str1, 50);
    cin.getline(str2, 50);

    STRREV(str2);
    if (STRCMP(str1, str2) == 0)
        cout << "It is correct";
    else
        cout << "It is wrong";

    return 0;
}
