// String - Reverse

#include <iostream>

using namespace std;

int main() {
    char temp;
    int size = 0, i = 0;
    char str[50];
    cin.getline(str, 50);

    //Calculating the length of the string
    while (str[size] != '\0') {
        size++;
    }
    size = size - 1;

    // Reversing the string
    while (i < size) {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
        i++;
    }

    cout << "The reversed String is " << str << ".";
    return 0;
}
