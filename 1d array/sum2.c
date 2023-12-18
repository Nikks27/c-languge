#include<stdio.h>
main()
{
int n;
	printf(" entr the value of n:");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf(" enter the value of ");
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf(" enter the value of ");
		scanf("%d",&b[i]);
	
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
		for(i=0;i<n;i++)
	{
	  printf("c[%d]=%d\n",i,c[i]);
	}
	
}
