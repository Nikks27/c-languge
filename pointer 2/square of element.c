#include<stdio.h>

void sqr(int *a,int n)
{
	int i;
	int *ptr = a;
	for(i=0; i<n; i++)
	{
        *ptr = a[i] * a[i];
        ptr++;
	}
	for(i=0; i<n; i++)
	{
        printf("%d ", a[i]);
    } 
}
main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	sqr(a,n);
}
