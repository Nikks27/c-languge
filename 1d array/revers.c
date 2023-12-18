#include<stdio.h>
main()
{

   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		printf(" enter the value of ");
		scanf("%d",&a[i]);
	
	}
	for(i=n-1;i>=0;i--)
	{
	  printf("%d",a[i]);	
	}
	
}
