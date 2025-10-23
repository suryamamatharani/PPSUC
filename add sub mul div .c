#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a b values");
	scanf("%d%d",&a,&b);
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	printf("addition is %d\n",c);
	printf("subtraction is %d\n",d);
	printf("multilpication is %d\n",e);
	printf("division is %d\n",f);
	return 0;
}
