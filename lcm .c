#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int a = M,b = N;
    while(b!=0) {
        int temp = b;
        b=a % b;
        a = temp;
    }
    int gcd = a;
    long long lcm=(long long)M*N/gcd;
    printf("%lld
",lcm);
    return 0;
} 
