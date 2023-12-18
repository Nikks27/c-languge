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
	for(i=0;i<5;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
			printf("\n");
	}
	
}
