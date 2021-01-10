// Remove all Characters in Second String which are present in First String

#include <iostream>

using namespace std;

// checks if a particular character is present in the string
int present(string str, char key) {
    int f = 0;
    if (str.find(key) != std::string::npos)
        f = 1;
    return f;
}

int main() {
    string str1, str2, result = "";
    int i;

    getline(cin, str1);
    getline(cin, str2);

    for(i = 0; str2[i]; i++)
        if(!present(str1, str2[i]))
            result += str2[i];

    cout << result;
    return 0;
}
