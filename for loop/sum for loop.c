#include<stdio.h>

int main()
{
	int x;
	int n;
	int sum=0;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
		sum=sum+x;
		

	}
	printf("sum is %d ",sum);
}