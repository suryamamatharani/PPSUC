#include <stdio.h>

int main() {
    long long N, R;
    scanf("%lld %lld", &N, &R);

    for (long long i = 1; i <= R; i++) {
        printf("%lld x %lld = %lld
", N, i, N * i);
    }

    return 0;
}
