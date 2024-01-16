#include<stdio.h>

int fac(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f+fac(f-1);
}
main()
{
	int f;
	printf("enter your value :");
	scanf("%d",&f);
	printf("%d",fac(f));
}
