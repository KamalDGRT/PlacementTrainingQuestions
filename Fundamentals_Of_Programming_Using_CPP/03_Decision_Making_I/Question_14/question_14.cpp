// Lab Allocation - II

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int x, y, z;
    char lab[3];
    cin >> x >> y >> z >> lab;

    if(strcmp(lab, "L1") == 0)
        (y < z) ? cout << "L2" : cout<< "L3";
    else if(strcmp(lab, "L2") == 0)
        (x < z) ? cout << "L1" : cout << "L3";
    else
        (x < y) ? cout << "L1" : cout << "L2";

    return 0;
}
