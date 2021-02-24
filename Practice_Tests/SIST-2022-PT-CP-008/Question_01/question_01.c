/*
    Question 01
    Positve and Negative Pairs
*/

#include <stdio.h>

int myabs(int a) {
    return a >= 0 ? a : -a;
}

int present(int a[], int n, int k) {
    int f = 0, i;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            f = 1;
            break;
        }
    }
    return f;
}

int main() {
    int n, i, t, k = 0;
    scanf("%d", &n);
    int a[n], b[n];
    
    for (i = 0; i < n; i++) {
        t = myabs(a[i]);
        if (!present(b, k, t)) {
            b[k] = t;
            k++;
        }
    }

    for (i = 0; i < k; i++)
        printf("%d -%d ", b[i], b[i]);
    
    return 0;
}
