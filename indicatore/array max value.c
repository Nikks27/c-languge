#include<stdio.h>

//wap to find maximum from array using pointer.

void max(int a[],int n)
{
	int i;
	int max = a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}		
	}
	int *ptr = &max;
	printf("%d",*ptr);
}
main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	max(a,n);
}
