#include <stdio.h>

int main() {
    int h, s, sp;
    int c1, c2, c3;

    scanf("%d %d %d", &h, &s, &sp);

    // Check conditions
    c1 = (h > 50);
    c2 = (s > 60);
    c3 = (sp > 100);

    // Decide grade
    if (c1 && c2 && c3)
        printf("10");
    else if (c1 && c2)
        printf("9");
    else if (c2 && c3)
        printf("8");
    else if (c1 && c3)
        printf("7");
    else if (c1 || c2 || c3)
        printf("6");
    else
        printf("5");

    return 0;
}

