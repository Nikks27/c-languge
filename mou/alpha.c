#include<stdio.h>

int main()
{
	char x;
	printf("enter your value :");
	scanf("%c",&x);
	
	
	if(x>=65 && x<=90 || x>=97 && x<=122)
	{
		printf("your value is alphbet : %c",x);
	}
	else if(x>=48 && x<=57)
	{
		printf("your value is digit : %c",x);
	}
	else
	{
		printf("your value is special  %c",x);
	}
	
}