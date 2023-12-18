#include<stdio.h>
main()
{
	
	int n;
	printf("enter the size of ");
	scanf("%d",&n);
	int a[n];
	int i;
	int max=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of  a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}printf(" max is %d",max);
}
