#include <iostream>

using namespace std;

void function(char **ptr) {
	char *ptr1;
	ptr1 = (ptr += sizeof(int))[-2];
	cout << ptr1 << endl;
}

int main() {
	char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);
	return 0;
}
