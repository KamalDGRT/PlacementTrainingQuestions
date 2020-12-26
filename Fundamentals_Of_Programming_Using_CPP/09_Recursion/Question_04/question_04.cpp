// Sum of the array elements

#include <iostream>

using namespace std;

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

int main() {
    int N, i;
    cin >> N;
    int A[N];

    for (i = 0; i < N; i++)
        cin >> A[i];

    cout << findSum(A, N);
    return 0;
}
