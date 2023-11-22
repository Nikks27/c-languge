#include<stdio.h>
// WaP to Find min. no. from given 2 no. using if else.
main()
{
	int a,b;
	
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("A is minimum");
	}
	else
	{
		printf("B is minimum");	
	}
}