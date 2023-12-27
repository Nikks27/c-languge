#include<stdio.h>

int divisible(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("divisible by both ");
	}
	else if(n%3==0)
	{
		printf("divisible by 3 ");
	}
	else if(n%5==0)
	{
		printf("divisible by 5 ");
	}
	else
	{
		printf("not divisible by 3 or 5 ");
	}
}
main()
{
   int n;
   printf("enter the value n : ");
   scanf("%d",&n);
   divisible(n);	
}
