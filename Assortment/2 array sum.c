#include<stdio.h>
//4. Write a program to get two array and create addition of array position wise.
main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int c[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{	
		c[i] = a[i] + b[i];
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",c[i]);
	}
}
