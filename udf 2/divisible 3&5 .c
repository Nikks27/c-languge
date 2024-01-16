#include<stdio.h>

int divisible(int num)
{
	
	if(num%3==0&&num%5==0)
	{
		printf("num divisible by 3_&_5");
	}
	else if(num%3==0)
	{
		printf("num divisible by 3");	
	}
	else if(num%5==0)
	{
		printf("num divisible by 5");	
	}
	else
	{
		printf("num divisible by not 3_&_5");
	}
}
int main()
{
		int num;
		printf("enter your num :");
		scanf("%d",&num);
	 	divisible(num);
}
