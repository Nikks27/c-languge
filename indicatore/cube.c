#include<stdio.h>

// Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

void cube(int *a,int n)
{
	int i,j;
	int *ptr = a;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
	        *ptr = (*ptr) * (*ptr) * (*ptr);
	        ptr++;
	    }
	}

}
main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter the value of a[%d] : ",i);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	cube(&a[0][0],n);
		
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
