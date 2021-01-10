// First Non-repeating character

#include <iostream>

using namespace std;

// checks if a particular character is present in the string
int present(string str, char key) {
    int f = 0;
    if (str.find(key) != std::string::npos)
        f = 1;
    return f;
}

// returns the count of a particular character in a string
int give_me_count(string str, char key) {
    int count = 0, i;
    for (i = 0; str[i] != '\0'; i++)
        if (str.at(i) == key)
            count++;
    return count;
}

int main() {
    string str, distinct = "";
    char element;
    int i, j, k, n, flag = 0;

    getline(cin, str);

    n = str.size();
    int frequency[n];

    // to get all the distinct elements in the order of appearance
    for (i = 0; str[i] != '\0'; i++) {
        element = str[i];
        if (!present(distinct, element))
            distinct += element;
    }

    // Total number of distinct elements
    k = distinct.size();

    // Get the count of distinct elements in the main string and storing it in a array
    for (i = 0; i < k; i++)
        frequency[i] = give_me_count(str, distinct[i]);

    for (i = 0; i < k; i++)
        if (frequency[i] == 1) {
            cout << distinct[i];
            flag += 1;
            break;
        }

    if (!flag)
        cout << "All the characters are repetitive";
    return 0;
}
