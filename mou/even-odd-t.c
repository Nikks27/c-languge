#include<stdio.h>

int main()
{
	int x;
	printf("enter your value :");
	scanf("%d",&x);
	(x%2==0)?printf("value is even....")  : printf("value is odd....");
}