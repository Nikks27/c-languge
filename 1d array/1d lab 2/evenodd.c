#include<stdio.h>
main()
{
	int i,j;
	int acc=0;
	int n;
	printf("enter the size ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf(" even is %d\n",a[i]);
		}
		else
		{
			printf(" odd is %d\n",a[i]);
		}
	}
}
