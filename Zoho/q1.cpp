#include <iostream>

using namespace std;

int main() {
	int n = 21;
	int out = 1;
	while(n >= 3) {
		n /= 2;
		out *= (n/2);
	}
	cout << n * out;
}