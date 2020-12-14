// Checking alphabets

#include <iostream>

using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || 
            ch=='i' || ch=='I' || ch=='o' || ch=='O' || 
            ch== 'u' || ch=='U')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
    else
        cout << "Not an alphabet";
    return 0;
}
