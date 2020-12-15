// Car Race

#include <iostream>

using namespace std;

int main() {

    int road_a, road_b, road_c, no_of_cars;
    cin >> road_a >> road_b >> road_c >> no_of_cars;

    if( (road_a % no_of_cars) == 0)
        cout << "Car 1 goes into road A";
    else if((road_b % no_of_cars) == 0) 
        cout << "Car 1 goes into road B";
    else if((road_c%no_of_cars) == 0)
        cout << "Car 1 goes into road C";
    else
        cout << "No path exist";
    return 0;
}
