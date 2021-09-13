#include <iostream>

using namespace std;

int main() {
	int n[] = {8, 1, 3, 9, 4};
	int j, *y = n;
	for(j = 0; j < 5; j++) {
		if(j % 2 == 0)
			*y++;
	}
	cout << *y << endl;
	return 0;
}
