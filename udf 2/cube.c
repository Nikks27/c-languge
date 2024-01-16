#include<stdio.h>

int cube(int num)
{

	int sum;
	
	sum=num*num*num;
	printf("cube is : %d",sum);
}
int main()
{
	int num;
	printf("enter your num :");
	scanf("%d",&num);
	cube(num);
}
