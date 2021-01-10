// Toggle Case of Each Character in a String

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char str[100], t;
    int i = 0;
    cin.getline(str, 100);

    while (str[i]) {
        t = str[i];

        // User can enter anything. So, toggling only the alphabets!
        if (isalpha(t))
            if (islower(t))
                cout << (char)toupper(t);
            else
                cout << (char)tolower(t);
        i = i + 1;
    }
    return 0;
}
