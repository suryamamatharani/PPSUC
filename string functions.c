#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b[10]="ADITYA";
	printf("a string lenght is:%d\n",strlen(a));
	printf("a string reverse is:%s\n",strrev(a));
	printf("a string uppercase is:%s\n",strupr(a));
	printf("b string lowercase is:%s\n",strlwr(b));
	printf("String copy is:%s\n",strcpy(a,b));
	printf("String concat is:%s\n",strcat(a,b));
	printf("String compare is:%d",strcmp(a,b));
	return 0;
}
