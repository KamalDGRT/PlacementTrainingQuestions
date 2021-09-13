#include <iostream>

using namespace std;

int main() {
	int a[10][10] = {{1,2,}, {3,4}, {5,6}, {7,8}, {9,10}};
	int *p = a[3];
	int result = (*p + 2) * a[4][1] + (++*p) + (*p + 7);
	cout << result << endl;
	return 0;
}
