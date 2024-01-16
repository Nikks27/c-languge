#include<stdio.h>

int Array_sum(int n)
{
	
	int a[n];
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Array_sum is : %d",sum);
}
int main()
{
	int n;
	printf("enter your value :");
	scanf("%d",&n);
	Array_sum(n);
}
