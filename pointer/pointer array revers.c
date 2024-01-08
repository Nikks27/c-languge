#include<stdio.h>

int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	int *ptr= &a[n-1];
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",*ptr);
		ptr-=1;
	}

}
