// Age Detector

#include <iostream>

using namespace std;

int main(){
    int current, birth, age;
    cin >> birth >> current;

    if(current < birth) {
        birth = 100 - birth;
        age = birth + current;
    }
    else  
        age = current - birth;
  
    cout << age;
    return 0;
}
