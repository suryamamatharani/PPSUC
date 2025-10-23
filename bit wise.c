#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a b vaules\n");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND:%d\n",c);
	c=a|b;
	printf("Bitwise OR:%d\n",c);
	c=a^b;
	printf("Bitwise EX-or:%d\n",c);
	c=a<<b;
	printf("Bitwise Left Shift:%d\n",c);
	c=a>>b;
	printf("Bitwise Right Shift:%d\n,c");
	return 0;
}
