#include<stdio.h>

main()
{
	int i=1;
	int n;
	int factorial=1;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(i<=n)
	{
        factorial=factorial*i;
        printf("%d ",i);
        i++;
	}
	printf("\nsum is %d ",factorial);
	
}