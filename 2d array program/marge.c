#include<stdio.h>

int main()
{
	int i,j,x,y,sum=0;
	printf("enter your value A :");
	scanf("%d%d",&x,&y);	
	int a[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("enter your value B :");
	scanf("%d%d",&x,&y);	
	int b[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	int c[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
		
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",c[i][j]);
		}
	
	}
	
}
