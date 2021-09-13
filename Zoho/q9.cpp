#include <iostream>

using namespace std;

void func(int *b) {
	*b = 1;
}

int main() {
	
	int *a;
	int n;
	a = &n;
	*a = 0;
	func(a);
	cout << *a << endl;
	return 0;
}
