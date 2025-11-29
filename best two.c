#include <stdio.h>

int sum_highest_two(int a, int b, int c) {
    int sum = a + b + c;
    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    return sum - min;  // sum of the two highest rolls
}

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    int alice_score = sum_highest_two(A1, A2, A3);
    int bob_score = sum_highest_two(B1, B2, B3);

    if (alice_score > bob_score)
        printf("Alice");
    else if (bob_score > alice_score)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}

