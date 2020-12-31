// Automated Dictation Evaluation I

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[50], str2[50];

    cin.getline(str1, 50);
    cin.getline(str2, 50);

    if (strcmp(str1, str2) == 0)
        cout << "It is correct";
    else
        cout << "It is wrong";

    return 0;
}
