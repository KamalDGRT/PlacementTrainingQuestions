#include <iostream>
#include <string>

using namespace std;

int isNotVowel(char c) {
    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
        (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        return 0;
    return 1;
}

int main() {
    
    int n, i, size, j;
    cin >> n;
    string a[50];
    for (i = 0; i <= n; i++)
        getline(cin, a[i]);
    
    for(i = 0; i <= n; i++) {
        size = a[i].size();
        for(j = 0; j < size; j++)
            if(isNotVowel(a[i][j]))
                cout << a[i][j];
        cout << endl;
    }
    return 0;
}
