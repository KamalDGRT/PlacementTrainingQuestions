// Paintings

#include <iostream>

using namespace std;

int main() {
    int l_wall, b_wall, l_paint1, b_paint1, l_paint2, b_paint2;
    int a_wall, a_paint1, a_paint2, possible = 0;

    cin >> l_wall >> b_wall;
    cin >> l_paint1 >> b_paint1;
    cin >> l_paint2 >> b_paint2;
    
    a_wall = l_wall * b_wall;
    a_paint1 = l_paint1 * b_paint1;
    a_paint2 = l_paint2 * b_paint2;
  
    if( (a_paint1 + a_paint2) < a_wall)
        possible = 1;

    if(possible)
        cout << "Leonardo can fix both painting";
    else
        cout << "Leonardo cannot fix both painting";
    return 0;
}
