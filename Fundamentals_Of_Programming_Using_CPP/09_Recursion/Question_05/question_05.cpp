// Search the element

#include <iostream>

using namespace std;

int rSearch(int array[], int key, int size) {
    size = size - 1;
    if (size < 0)
        return -1;

    else if (array[size] == key)
        return 1;

    else
        return rSearch(array, key, size);
}

int main() {
    int size, key, j, result;
    cin >> size;
    int array[size];

    for (j = 0; j < size; j++)
        cin >> array[j];

    cin >> key;
    result = rSearch(array, key, size--);

    if (result == 1)
        cout << key;

    else
        cout << "The number is not present in the list";

    return 0;
}
