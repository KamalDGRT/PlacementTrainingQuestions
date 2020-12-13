// Harry Potter

#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char str[10];
    int first, last, key;
    cin >> str;

    if(strlen(str)==4){
      	first = str[0] - '0';
      	last = str[3] - '0';
        key = first + last;
        cout << key;
    }

    return 0;
}
