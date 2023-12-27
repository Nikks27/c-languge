#include<stdio.h>
int sum(int f)
{
	if(f==1)
	{
		return 1;
	}
	return f+sum(f-1);
}
main()
{
	int f;
	printf("enter your value :");
	scanf("%d",&f);
	printf("%d",sum(f));
}
