#include<stdio.h>

main()
{
	int i=1;
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d ",n);
		n--;
	}
}