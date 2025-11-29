#include<stdio.h>
int main()
{
    int X, N, M;
    scanf("%d %d %d %d", &X, &N, &M);
    if (X + M >= N) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    return 0;
}
