#include <iostream>

using namespace std;

int main() {
	int i;
	char ch[] = {'z', 'o', 'h', 'o'};
	char *ptr, *str1;
	ptr = ch;
	str1 = ch;
	i = (*ptr-- + ++*str1) - 10;
	cout << i;
	return 0;
}
