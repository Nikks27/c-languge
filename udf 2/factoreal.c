#include<stdio.h>

int fac(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f*fac(f-1);
}
main()
{
	printf("%d",fac(5));
}
