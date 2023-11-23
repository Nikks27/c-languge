#include<stdio.h>

  //1. WAP to demonstrate the use of break keywords.

main()
{
	int x;
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=10; x++)
	{
		printf("%d ",x);
		if(x==n)
		{
			break;
		}
	}
}