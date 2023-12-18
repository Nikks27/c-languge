#include<stdio.h>
main()
{
int n;
	printf(" entr the value of n:");
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		printf(" ennter");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	printf(" avg is %d",sum/n);
	
	
	
}
