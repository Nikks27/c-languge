#include<stdio.h>

main()
{
	int n;
	printf("enter the array size : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
    
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d]",i);
		scanf("%d",&a[i]);
	}
	int *pointer= &a[n-1];	
	for(i=n-1;i>=0; i--);
	{
		printf("%d\n",*pointer);
		pointer-=1;
	}
}
