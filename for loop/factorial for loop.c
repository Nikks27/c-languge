#include<stdio.h>

int main()
{
	int x;
	int n;
	int factorial=1;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	{
		factorial=factorial*x;
		

	}
	printf("factorial is %d ",factorial);
}