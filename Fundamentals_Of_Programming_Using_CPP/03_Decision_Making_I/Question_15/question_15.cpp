// Lab Allocation - III

#include <iostream>

using namespace std;

int main() {
    int x, y, z, n, c = 0;
    cin >> x >> y >> z >> n;

    if(x >= n)
        c += 1;
    if(y >= n)
        c += 1;
    if(z >= n)
        c += 1;
    
    cout << c;
    return 0;
}
