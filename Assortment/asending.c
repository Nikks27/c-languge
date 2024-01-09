#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	int i,dce = 0,j;
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				dce = a[i];
				a[i] = a[j];
				a[j] = dce;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
