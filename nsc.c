#include<stdio.h> 
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    for (int n = A +1;n<B;n++) {
        printf("%d %d %d
", n,n*n,n*n*n);
    }
    return 0;

}
