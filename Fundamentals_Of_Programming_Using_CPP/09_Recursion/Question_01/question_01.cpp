// Addition of First N Numbers

#include <iostream> 

using namespace std; 

int recurSum(int n) {
    if (n <= 1) 
        return n; 
    return n + recurSum(n - 1); 
} 

int main() {
    int n;
    cin >> n;
    cout << recurSum(n);
    return 0;
}
