#include<stdio.h>

main()
{
	int i=1;
	int n;
	int sum=1;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(i<=10)
	{
        sum=n*i;
        printf("%d*%d=%d\n",i,n,sum);
        i++;
	}

	
}