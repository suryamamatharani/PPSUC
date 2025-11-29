#include <stdio.h>

int main() {
    long long N, A, B;
    scanf("%lld %lld %lld", &N, &A, &B);

    for (long long i = A; i <= B; i++) {
        printf("%lld x %lld = %lld
", N, i, N * i);
    }

    return 0;
}
