#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter your value :");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is max");	
		}
		else
		{
			printf("c ia max");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b ia max");	
		}	
		else
		{
			printf("c ia max");
		}
	}
}