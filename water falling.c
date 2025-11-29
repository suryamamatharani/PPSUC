#include<stdio.h>
int main()
{
    int B1, B2, B3;
    scanf("%d %d %d", &B1, &B2, &B3);
    int emptyCount = 0;
    if (B1 == 0) emptyCount++;
    if (B2 == 0) emptyCount++;
    if (B3 == 0) emptyCount++;
    if (emptyCount >= 2) {
        printf("Water filling time
");
    } else {
        printf("Not now
");
    }
    return 0;
}
