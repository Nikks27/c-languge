#include<stdio.h>

main()
{
	int i=1;
	int n;
	int sum=0;
	printf("enter the value of n : ");
	scanf("%d",&n);
	while(i<=n)
	{
        sum=sum+i;
        printf("%d ",i);
        i++;
	}
	printf("\nsum is %d ",sum);
	
}