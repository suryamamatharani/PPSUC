#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	double si,ci;
	printf("enter p t r vaules");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*pow(1+r/100.0,t)-p;
	printf("simple intrest is:%1f\n",si);
	printf("compoundf intrest is:%1",ci);
	return 0;
}
