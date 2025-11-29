#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messiPoints = 2 * A + B;
    int ronaldoPoints = 2 * X + Y;

    if (messiPoints > ronaldoPoints) {
        printf("Messi
");
    } else if (ronaldoPoints > messiPoints) {
        printf("Ronaldo
");
    } else {
        printf("Equal
");
    }

    return 0;
}

