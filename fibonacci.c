#include <stdio.h>

int main() {
    int i, n = 10; // n is the number of terms
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%lld, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
