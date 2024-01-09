#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	int a[n];
	int i,j,num;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value of num : ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] + a[j] == num)
			{
				printf("%d + %d = %d   ",a[i],a[j],num);
			}
		}
	}

}
