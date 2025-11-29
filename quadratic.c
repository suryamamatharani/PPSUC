#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n < 5) {
        long long power = 1;
        for (int i = 0; i < n; i++) {
            power *= 2;
        }
        if (power > n * n) {
            printf("Yes
");
        } else {
            printf("No
");
        }
    } else {
        printf("Yes
");
    }

    return 0;
}
