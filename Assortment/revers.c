#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int i,j;
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	for(i=n-1; i>=0; j--)
	{
		printf("%d ",a[i]);
	}
}
