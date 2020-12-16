// Online Shopping

#include <iostream>

using namespace std;

struct site {
  int amt, disc, ship, price;
};

int main() {
    site fk, sd, az;
    cin >> fk.amt >> fk.disc >> fk.ship;
    cin >> sd.amt >> sd.disc >> sd.ship;
    cin >> az.amt >> az.disc >> az.ship;
  
    fk.price = fk.amt - fk.amt * fk.disc / 100 + fk.ship;
    sd.price = sd.amt - sd.amt * sd.disc / 100 + sd.ship;
    az.price = az.amt - az.amt * az.disc / 100 + az.ship;
  
    cout << "In Flipkart Rs." << fk.price << endl;
    cout << "In Snapdeal Rs." << sd.price << endl;
    cout << "In Amazon Rs." << az.price << endl;
  
    cout << "He will prefer ";
    if(fk.price <= sd.price && fk.price <= az.price)
        cout << "Flipkart";
    else if (sd.price <= az.price)
        cout << "Snapdeal";
    else
        cout << "Amazon";

    return 0;
}
