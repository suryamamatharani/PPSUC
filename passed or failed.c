#include<stdio.h>
int main()
{
    int english, maths, physics, chemistry, computer;
    scanf("%d %d %d %d %d", &english, &maths, &physics, 
    & chemistry, &computer);
    if (english > 34 && maths > 34 && physics > 34 && chemistry > 34 && computer > 34) {
        printf("PASSED");
    } else {
        printf("FAILED");
    }
    return 0;
}
