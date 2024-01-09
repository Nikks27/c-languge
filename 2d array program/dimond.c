#include<stdio.h>

int main()
{
	int i,j,x,y,sum=0;
	printf("enter your value :");
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
			if(i==0||i==4||j==0||j==4)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\nsum is :%d",sum);
}

