#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];  
	int *b = &a[n-1];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d]: ",i);
		scanf("%d",&a[i]);       
	}
	
	for(i=n-1; i>=0; i--)
	{
		printf("%d\n",&a[i]);       
	}
	
	printf("\n");
	
	printf("Reverse num : \n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d\n",*b);
		b-=1;
	}                                    
}
