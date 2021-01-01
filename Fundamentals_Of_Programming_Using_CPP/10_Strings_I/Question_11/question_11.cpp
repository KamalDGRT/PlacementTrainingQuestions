// String palindrome

#include <iostream>

using namespace std;

char TOLOWER(char a) {
    return (a >= 'A' && a <= 'Z') ? a + 32 : a;
}

int STRLEN(char b[]) {
    int a = 0;
    while (b[a] != '\0')
        a = a + 1;
    return a;
}

void STRREV(char str[]) {
    int size = 0, i;
    char temp;
    size = STRLEN(str);

    i = 0;
    size = size - 1;
    while (i < size)
    {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
        i++;
    }
}

void STRCPY(char dest[], char source[]) {
    int l1 = 0;

    while (source[l1] != '\0')
    {
        dest[l1] = source[l1];
        l1++;
    }
    dest[l1] = '\0';
}

int STRCMPI(char x[], char y[]) {
    int i, j, c = 0, t1, t2, l1, l2;

    l1 = STRLEN(x);
    l2 = STRLEN(y);

    for (i = 0, j = 0; i < l1 && j < l2; i++, j++)
    {
        t1 = TOLOWER(x[i]);
        t2 = TOLOWER(y[j]);
        c = t1 - t2;
        if (c != 0)
            break;
    }

    return c;
}

int main() {
    char text[100], reversed[100];

    cin.getline(text, 100);
    STRCPY(reversed, text);
    STRREV(reversed);

    if (!STRCMPI(text, reversed))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}
