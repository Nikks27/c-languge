#include<stdio.h>

int arraysum(int n)
{
	int a[n];
	int i,sum=0;
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];
	}
	printf("array of sum is : %d",sum);
}


main()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	arraysum(n);
}
