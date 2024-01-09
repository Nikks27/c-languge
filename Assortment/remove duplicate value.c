#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	int a[n];
	int i,x=0,j,remove=0,k=0;
	int b[k];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				x++;
			}
		}
	}
	printf("Duplicate Num is : %d\n",x);
	printf("Remove element is : ");
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{	
				for(k=j; k<n-1; k++)
    			{
    				a[k] = a[k+1];
				}
				n--;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}
