#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 15) {
        // Lower Deck
        if (N <= 10)
            printf("Lower Double");
        else
            printf("Lower Single");
    } else if (N >= 16 && N <= 30) {
        // Upper Deck
        if (N <= 25)
            printf("Upper Double");
        else
            printf("Upper Single");
    }

    return 0;
}
