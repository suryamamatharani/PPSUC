#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],x[10][10],k,r,c,i,j;
	printf("enter row and column vaules\n");
	scanf("%d%d",&r,&c);
	printf("enter A matrix elements\n");
	  for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("enter B matrix values");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
   	printf("Matrix Multiplication is :\n");
	for(j=0;j<r;j++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=0;
			for(k=0;k<c;k++)
			{
			x[i][j]=x[i][j]+(a[i][k]*b[k][j]);
		}
      } 
}
        for(i=0;i<r;i++)
        {
		printf("%d\t",x[i][j]);
		}
        printf("\n");
    }
  return 0;	
} 
