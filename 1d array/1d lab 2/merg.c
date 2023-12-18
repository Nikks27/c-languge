#include<stdio.h>
main()
{
	
	int n;
	printf("enter the size of ");
	scanf("%d",&n);
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of  a[%d]",i);
		scanf("%d",&a[i]);
	}
	int n2;
	printf(" enter the size of   ");
	scanf("%d",&n2);
	int b[n2];
	for(i=0;i<n2;i++)
	{
		printf("enter the value of  b[%d]",i);
		scanf("%d",&b[i]);
	}
	int c[n+n2];
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
		for(i=0;i<n2;i++)
	{
		c[i+n]=b[i];
	}
    for(i=0;i<n+n2;i++)
   {
	printf("%d\n",c[i]);
   }

	

}
