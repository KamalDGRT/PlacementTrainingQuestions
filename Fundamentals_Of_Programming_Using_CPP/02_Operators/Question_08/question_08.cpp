//  Hop n Hop

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int x1 = 3, y1 = 4, x2, y2, distance, hops;

    cin >> x2;
    cin >> y2;
    
    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    hops = sqrt(distance);
    
    cout << hops;
    return 0;
}
