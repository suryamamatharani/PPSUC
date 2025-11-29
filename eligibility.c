#include <stdio.h>

int main() {
    int total, attended;
    scanf("%d %d", &total, &attended);

    // Check eligibility: must attend at least 75% of total classes
    if (attended * 100 >= 75 * total)
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");
        return 0;
}
