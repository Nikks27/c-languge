#include<stdio.h>
main()
{
int n;
	printf(" entr the value of n:");
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		printf(" enter the value of ");
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
	   b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
	   printf("a[%d] : %d\n",i,a[i]);
	}
	printf("\n");
		for(i=0;i<n;i++)
	{
	   printf("b[%d] : %d\n",i,b[i]);
	}


	
	
}
