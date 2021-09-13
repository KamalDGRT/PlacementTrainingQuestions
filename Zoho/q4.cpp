#include <iostream>

using namespace std;

int main() {
	int x = 10, y = 20;
	if(!(x ^ y))
		cout << "0";
	else
		cout<< "1";
	return 0;
}
