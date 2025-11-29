#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];

    // Reading matrix elements
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculating and printing row-wise sum
    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = 0; j < M; j++) {
            sum += A[i][j];
        }
        printf("%d ", sum);
    }

    return 0;
}

