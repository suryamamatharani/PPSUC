#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int count = 0;
    for (int i = M; i <= N; i++) {
        if (i % 6 == 0) {
            count++;
        }
    }

    printf("%d
", count);
    return 0;
}
