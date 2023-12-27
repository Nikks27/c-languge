#include<stdio.h>
int cube(int n)
{
	int sum;
	sum=n*n*n;
	printf("cube is : %d",sum);
}
main()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	cube(n);
}
