#include<stdio.h>
main()
{
int n;
	printf(" entr the value of n:");
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		printf(" enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf(" sum is %d",sum);
	
	
	
}
