#include <iostream>

using namespace std;

int main() {
	int a[10][10] = {{1,2,}, {3,4}, {5,6}, {7,8}, {9,10}};
	int *p = a[3];
	int result = a[2][1] + (*p--) + (++*p) + (*p + 13);
	cout << result << endl;
	return 0;
}
