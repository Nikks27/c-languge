#include<stdio.h>
int factorial(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f*factorial(f-1);
}
main()
{
	printf("%d",factorial(5));
}
