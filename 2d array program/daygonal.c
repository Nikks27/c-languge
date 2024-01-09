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
			if(i==j)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
						
		}
		printf("\n");
	}
	printf("sum is:%d",sum);
	
}
