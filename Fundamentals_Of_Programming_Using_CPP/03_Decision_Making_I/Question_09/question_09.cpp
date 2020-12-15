// Cricket

#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    int tb, tr, cr, cb, t, p;
    float t6, c6, crr, trr;
    cin >> tb >> tr >> cr >> cb;

    t6 = tb / 6;
    t = cb / 6;
    p = cb % 6;
    c6 = ((float)t + (float)p / 10);
    crr = cr / c6;
    trr = tr / t6;

    cout << t6 << endl;
    cout << fixed << setprecision(1) << c6 <<endl;
    cout << crr << endl;
    cout << trr << endl;

    if(crr > trr)
        cout << "Eligible to Win";
    else  
        cout << "Not Eligible to Win";

 return 0;
}
