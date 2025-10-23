#include<stdio.h>
int main()
{
	char a;
	char b[10];
	char c[20];
	printf("enter a character");
	scanf("%c",&a);
	printf("enter a word");
	scanf("%[^/n]s",c);
	printf(" chharacterj%c\nword;%s\n sentence;%s",a,b,c);
	return 0;
}
